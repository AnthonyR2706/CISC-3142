#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main() {
	vector<int> data;
	double xmean = 0;
	double ymean = 0;
	double temp = 0;
	double temp2 = 0;
	double b1 = 0;
	double b0 = 0;
	double result;
	ifstream inFile;
	string file;
	cout << "Enter name of file where numbers are located" << endl;
	cin >> file;
	inFile.open(file);
	//ifstream fin("nums.txt");
	double element;
	while(inFile >> element){
		data.push_back(element);
	}
	for(int i = 0; i < data.size(); i++){
		xmean += data[i++];
		ymean += data[i];
	}
	inFile.close();
	xmean /= (data.size() / 2);
	ymean /= (data.size() / 2);
	for(int i = 0; i < data.size(); i++){
		temp = data[i++] - xmean;
		temp2 += temp * temp;
		b1 += temp * (data[i] - ymean);
	}
	b1 /= temp2;
	b0 = ymean - (b1 * xmean);
	cout << "y = " << b0 << " + " << b1 << "X" << endl;
	return 0;
}

