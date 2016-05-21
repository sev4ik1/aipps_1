#include "BaseState.h"

class State_Bipolar_RZ :public BaseState {
public:
	State_Bipolar_RZ() { _state = "Bipolar_RZ"; };
	virtual void Work(std::string state, std::string sequence) {
		std::vector <std::vector <char> > line(3, std::vector <char>(sequence.length() * 2));
		for (int i = 0; i < line.size(); ++i) {
			for (int j = 0; j<line[i].size(); ++j)
				line[i][j] = ' ';
		}
		line[0][0] = '+';
		line[1][0] = '0';
		line[2][0] = '-';
		int Id = 1;
		for (int i = 0; i<sequence.length(); ++i) {
			if (sequence[i] == '1') { line[0][Id] = '_'; line[1][Id + 1] = '_'; Id += 2; }
			else { line[2][Id] = '_'; line[1][Id + 1] = '_'; Id += 2; }
		}
		for (int i = 0; i < line.size(); ++i) {
			for (int j = 0; j<line[i].size(); ++j)
				std::cout << line[i][j];
			std::cout << std::endl;
		}
	}
};
