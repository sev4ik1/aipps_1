#pragma once
#include <fstream>
#include <string>
#include "Coder.h"

class Facade {
public:
	void TotalWork(std::string path_tothe_file);

private:
	Coder _coder;
};
