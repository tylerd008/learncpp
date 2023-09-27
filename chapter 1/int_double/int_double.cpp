#include <iostream>

int main() 
{
	std::cout << "Please enter an integer: ";

	int num{};
	std::cin >> num;

	std::cout << num << " doubled is " << num * 2 << '.';
	std::cout << num << " tripled is " << num * 3 << '.';

	return 0;
}