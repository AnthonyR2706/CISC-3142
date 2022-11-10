#include <iostream>

using namespace std;

class Sample {
	private:
		int x;
		double y;
	public:
		Sample(){
			x = 0;
			y = 0;
		}
		Sample(int z){
			x = z;
		}
		Sample(int z, int v){
			x = z;
			y = 0;
		}
		Sample(int z, float v){
			x = z;
			y = v;
		}
};

int main(){
	return 0;
}
