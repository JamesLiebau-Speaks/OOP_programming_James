#include <iostream>
#include "classes.hpp"

int main(void) {
	Flower flower;
	Sardine sardine;
	Cat cat;
	LivingThingTreePrinter::print(flower);
	std::cout << '\n';
	LivingThingTreePrinter::print(sardine);
	std::cout << '\n';
	LivingThingTreePrinter::print(cat);

	return 0;
}
