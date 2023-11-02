#include <iomanip>
#include <iostream>

int main() {
	std::cout << std::setprecision(17);
	std::cout << 13521244.32435f << '\n';
	std::cout << 13521244.32435 << '\n';

	std::cout << std::setprecision(6);
	double d{ 0.1 };
	std::cout << d << '\n';
	std::cout << std::setprecision(17);
	std::cout << d << '\n';

	double zero{ 0.0 };
	double posinf{ 5.0 / zero };
	std::cout << posinf << '\n';

	double neginf{ -5.0 / zero };
	std::cout << neginf << '\n';

	double nan{ zero / zero };
	std::cout << nan;

	return 0;
}