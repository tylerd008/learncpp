#include <iostream>

double getStartHeight() {
	std::cout << "Enter the height of the tower in meters: ";
	double height{};

	std::cin >> height;

	return height;
}

void printHeightAt(double startHeight, int seconds) {
	double heightAt{ startHeight - ((9.8 * seconds * seconds) / 2) };
	std::cout << "At " << seconds << " seconds, the ball is ";

	if (heightAt > 0) {
		std::cout << "at height " << heightAt << " meters";
	}
	else {
		std::cout << "on the ground.";
	}

	std::cout << '\n';
}

int main() {
	double startHeight{ getStartHeight() };

	printHeightAt(startHeight, 0);
	printHeightAt(startHeight, 1);
	printHeightAt(startHeight, 2);
	printHeightAt(startHeight, 3);
	printHeightAt(startHeight, 4);
	printHeightAt(startHeight, 5);

	return 0;
}