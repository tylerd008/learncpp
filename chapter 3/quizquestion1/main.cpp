#include <iostream>

int readNumber() {
	int x{};
	std::cout << "Please enter a number: ";
	std::cin >> x;
	return x;
}

void writeAnswer(int x) {
	std::cout << "The sum is: " << x << '\n';
}

int main() {
	int x{};
	x = readNumber();
	x = x + readNumber();
	writeAnswer(x);

	return 0;
}