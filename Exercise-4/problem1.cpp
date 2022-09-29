#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;
int main(){
	vector<string> words;
	string in;
	string word;
	int count = 0;
	cout << "Enter some words" << endl;
	getline(cin, in);
	transform(in.begin(), in.end(), in.begin(), ::toupper);
	istringstream iss(in);
	while(iss >> word){
		words.push_back(word);
	}
	for(auto i : words){
		if(count != 7){
			cout << i << " ";
			count++;
		} else {
			cout << i << endl;
			count = 0;
		}
	}
	return 0;
}
	
