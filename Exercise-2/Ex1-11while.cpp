#include <iostream>
int main() {
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0;
	int v2 = 0;
	std::cin >> v1 >> v2;
	if(v1 > v2){
		int temp = v1;
		v1 = v2;
		v2 = temp;
	}
	while(v2 >= v1){
		std::cout << v1++ << std::endl;
	}
	return 0;
}

