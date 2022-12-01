#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <numeric>
#include <algorithm>

using namespace std;

bool pred(int m, int n){
	return (m == n);
}

int main(){
	vector<int> length;
	vector<vector<string>> data;
	vector<string> temp;
	string line;
	string word;
	int totalLength;

	int loop = 0;
	fstream file("Movies.csv", ios::in);
	getline(file, line);
	getline(file, line);
	while(getline(file, line)){
		temp.clear();
		stringstream str(line);
		while(getline(str, word, ';')){ // puts csv into 2d vector
			if (loop == 1){ // puts lengths into its own vector for easy accumulation
				if(word == "" || word == " "){
					length.push_back(0);
				} else {
					length.push_back(stoi(word));
				}
			}
			temp.push_back(word);
			loop++;
		}
		loop = 0;
		data.push_back(temp);
	}
	totalLength = accumulate(length.begin(), length.end(), 0); // gets total length of all films
	cout << "Total Length: " << totalLength << endl;
	sort(data.begin(), data.end(), [] (const vector<string> &a, const vector<string> &b){ // descending sort by popularity
			int x = 0;
			int y = 0;
			try{ // some popularities are blank, this sets them to 0
			x = stoi(a[7]);
			}
			catch(...){}
			try{
			y = stoi(b[7]);
			}
			catch(...){}
			return x > y;
			});
	string x;
	vector<string>::iterator it;
	cout << "Choose a year to see a movie released that year" << endl;
	cin >> x;
	for(int i = 0; i < data.size(); i++){ // returns moviefrom the stated year
		it = find(data[i].begin(), data[i].end(), x);
	
		if(it != data[i].end()){
			advance(it, 2);
			cout << "A movie from " << x << " was: " << *it << endl;
			break;
		}	
	}
	vector<int> comedies;
	vector<int> action;
	vector<int>::iterator ip;
	for(int i = 0; i < data.size(); i++){ // puts every year that a movie from its category was made into a vector
		if (data[i][3] == "Action"){
			action.push_back(stoi(data[i][0]));
		} else if (data[i][3] == "Comedy"){
			comedies.push_back(stoi(data[i][0]));
		}
		}
	ip = unique(comedies.begin(), comedies.end());
	comedies.resize(distance(comedies.begin(), ip));
	ip = unique(action.begin(), comedies.end());
	action.resize(distance(action.begin(), ip));
	if(equal(comedies.begin(), comedies.end(), action.begin(), pred)){
		cout << "Every year that a comdey has been released and action movie has also been released" << endl;
	} else {
		cout << "There have been years that an action movie and comedy movie have not been released together" << endl;
	}
	//for (int i = 0; i < data.size(); i++){
	//	for (int j = 0; j < data[0].size(); j++){
	//		cout << data[i][j] << "  ";
	//	}
	//	cout << endl;
	//}
	
	for(const auto &row : data){
		for (const auto &s : row) {
			cout << s << ' ';
		}
		cout << endl;
	}

	return 0;
}
