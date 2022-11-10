#include <iostream>
using namespace std;

class Rectangle{
	float length;
	float width;
public:
	void setLength(float x){
		length = x;
		return;
	}
	void setWidth(float x){
		width = x;
		return;
	}
	float perimeter(){
		return ((2 * width) + (2 * length));
	}
	float area(){
		return (length * width);
	}
	void show(){
		cout << "Length: " << length << endl;
		cout << "Width: " << width << endl;
		return;
	}
	int sameArea(Rectangle x){
		if(x.area() == area()){
			return 1;
		}
		return 0;
	}
};

int main(){
	Rectangle x;
	Rectangle y;
	x.setLength(5);
	x.setWidth(2.5);
	y.setLength(5);
	y.setWidth(18.9);
	cout << "For X ";
	x.show();
	cout << "X perimeter = " << x.perimeter() << " X area = " << x.area() << endl;
	cout << "For Y ";
	y.show();
	cout << "Y perimeter = " << y.perimeter() << " Y area = " << y.area() << endl;
	if(x.sameArea(y) == 1){
		cout << "They have the same area" << endl;
	} else {
		cout << "They do not have the same area" << endl;
	}
	return 0;
}
