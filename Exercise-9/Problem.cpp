#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main(){
	vector<vector<string>> temperature;
	vector<string> temp;
	string line;
	string word;
	double val = 0;
	fstream file ("Temps.csv", ios::in);
	while(getline(file, line)){
		temp.clear(); // empties temp
		stringstream str(line);
		while(getline(str, word, ',')){
			temp.push_back(word); // adds each word in the line seperated by ,'s
		}
		temperature.push_back(temp); // adds the temp vector to the main temperature vector
	}
	for(int i = 1; i < temperature.size(); i++){ // Simple average
		val += stoi(temperature[i][1]); 
	}
	cout << "Simple Average: " << val / 9 << endl;
	val = 0;
	for(int i = temperature.size() - 3; i < temperature.size(); i++){ // Sliding Average for last 3 months
		val += stoi(temperature[i][1]);
	}
	cout << "Sliding Average: " << val / 3 << endl;
		val = 0;
	for(int i = temperature.size() - 3; i < temperature.size(); i++){ // Weighted average for last 3 months
		val += stoi(temperature[i][1]) * ((temperature.size() - i - 4) * -1);
	}
	cout << "Weighted Average: " << val / 6 << endl;
	return 0;
}
