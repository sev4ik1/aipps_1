#include "BaseState.h"

class State_Bi_f_S :public BaseState {
public:
	State_Bi_f_S() { _state = "Bi-f-S"; };
	virtual void Work(std::string state, std::string sequence) {
		std::vector <std::vector <char> > line(2, std::vector <char>((sequence.length() + 1) * 2));
		for (int i = 0; i < line.size(); ++i) {
			for (int j = 0; j<line[i].size(); ++j)
				line[i][j] = ' ';
		}
		line[0][0] = '+';
		line[1][0] = '-';
		int ID = 1;
		int flag0 = 0;
		int flag1 = 0;
		for (int i = 0; i<sequence.length(); ++i) {
			if (sequence[i] == '1') {
				if (flag0 == 0) flag0 = 1; else flag0 = 0;
				line[flag0][ID] = '_';
				line[flag0][ID + 1] = '_';
				ID += 2;


			}
			else {
				line[0][ID] = '_';
				line[1][ID + 1] = '_';
				ID += 2;
			}

		}
		for (int i = 0; i < line.size(); ++i) {
			for (int j = 0; j<line[i].size(); ++j)
				std::cout << line[i][j];
			std::cout << std::endl;
		}
		//std::cout << state << ' '<< sequence<< std::endl;
	}
};

