#include "BaseState.h"

class State_RZ_AMI :public BaseState {
public:
	State_RZ_AMI() { _state = "RZ_AMI"; };
	virtual void Work(std::string state, std::string sequence) {
		std::vector <std::vector <char> > line(3, std::vector <char>((sequence.length() * 3) + 1));
		for (int i = 0; i < line.size(); ++i) {
			for (int j = 0; j<line[i].size(); ++j)
				line[i][j] = ' ';
		}
		line[0][0] = '+';
		line[1][0] = '0';
		line[2][0] = '-';
		int flag = 2;
		int ID = 1;
		for (int i = 0; i<sequence.length(); ++i) {
			if (sequence[i] == '1') {
				if (flag == 0) flag = 2;
				else flag = 0;
				line[1][ID] = '_';
				line[flag][ID + 1] = '_';
				line[1][ID + 2] = '_';
			}
			else {
				line[1][ID] = '_';
				line[1][ID + 1] = '_';
				line[1][ID + 2] = '_';
			}
			ID += 3;
		}
		for (int i = 0; i < line.size(); ++i) {
			for (int j = 0; j<line[i].size(); ++j)
				std::cout << line[i][j];
			std::cout << std::endl;
		}
	}
};

