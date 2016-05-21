#include "BaseState.h"

class State_NRZ_M :public BaseState {
public:
	State_NRZ_M() { _state = "NRZ-M"; };
	virtual void Work(std::string state, std::string sequence) {
		std::vector <std::vector <char> > line(2, std::vector <char>(sequence.length() + 1));
		for (int i = 0; i < line.size(); ++i) {
			for (int j = 0; j<line[i].size(); ++j)
				line[i][j] = ' ';
		}
		line[0][0] = '+';
		line[1][0] = '-';
		int flag = 1;
		for (int i = 0; i<sequence.length(); ++i) {
			if (sequence[i] == '1') {
				if (flag == 0) flag = 1;
				else flag = 0;

			}
			line[flag][i + 1] = '_';
		}
		for (int i = 0; i < line.size(); ++i) {
			for (int j = 0; j<line[i].size(); ++j)
				std::cout << line[i][j];
			std::cout << std::endl;
		}
	}
};
