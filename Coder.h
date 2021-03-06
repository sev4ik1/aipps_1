#pragma once
#include <fstream>
#include <string>
#include "State_Bi_f_L.h"
#include "State_Bi_f_M.h"
#include "State_Bi_f_S.h"

#include "State_Bipolar_RZ.h"
#include "State_NRZ_L.h"
#include "State_NRZ_M.h"
#include "State_NRZ_S.h"
#include "State_RZ_AMI.h"
#include "State_Unipolar_RZ.h"
#include "BaseState.h"

const int NRZ_L =  1;
const int Bipolar_RZ = 2;
const int Unipolar_RZ = 3;
const int NRZ_M = 4;
const int NRZ_S = 5;
const int RZ_AMI = 6;
const int Bi_f_L = 7;
const int Bi_f_M = 8;
const int Bi_f_S = 9;

class Coder {
public:
	Coder() {_state = new State_Bi_f_L;};
	void GetWork(std::string state, std::string sequence);

private:
	void ChangeState(std::string new_state);
	int StateID(std::string new_state);

	BaseState* _state;
};

