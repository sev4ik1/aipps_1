#pragma once
#include <string>
#include <vector>
#include <iostream>

class BaseState {
public:
	virtual void Work(std::string state, std::string sequence) {};
	std::string GetState() { return _state; }
	//private:
	std::string _state;
};
