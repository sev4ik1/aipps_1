#include <iostream>
#include <string>
#include "Facade.h"

int main() {
	Facade fac;
	std::string path;
	std::cout << "Enter path to the file with requests: ";
	std::cin >> path;
	fac.TotalWork(path);
	return 0;
};

