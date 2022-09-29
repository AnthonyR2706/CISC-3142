#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> nums(10);
	int n = 1;
	*nums.begin() = n;
	cout << *nums.begin() << endl;
	for(vector<int>::iterator it = nums.begin()+1; it != nums.end(); ++it){
		*it = *(it-1) * 2;
		cout << *it << endl;
	}
	return 0;
}	
