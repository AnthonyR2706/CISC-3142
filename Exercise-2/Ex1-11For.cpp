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
	for(int i = v1; i <= v2; i++){
		std::cout << i << std::endl;
	}
	return 0;
}

