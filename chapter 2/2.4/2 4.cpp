#include <iostream>

int doubleNumber(int num) {
	return num * 2;
}

int main() {
	std::cout << "Please enter an integer:";
	int num{};
	std::cin >> num;
	std::cout << num << " doubled is " << doubleNumber(num);
	return 0;
}