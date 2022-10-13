#include <iostream>
#include <fstream>
#include <vector>

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
	ifstream fin("nums.txt");
	double element;
	while(fin >> element){
		data.push_back(element);
	}
	for(int i = 0; i < data.size(); i++){
		xmean += data[i++];
		ymean += data[i];
	}
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

