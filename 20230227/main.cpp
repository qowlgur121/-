#include "ClassA.h"
#include "ClassB.h"
#include <iostream>


int main() {
	ClassA objA;
	ClassB objB;
	objB.setValue(objA, 10);
	std::cout << objA.getValue() << std::endl;
	return 0;
}