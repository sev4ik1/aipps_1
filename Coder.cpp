#include "Coder.h"

void Coder::GetWork(std::string state, std::string sequence) {
	ChangeState(state);
	_state->Work(state, sequence);
}


void Coder::ChangeState(std::string new_state) {
	int NewStateID = StateID(new_state);
	switch (NewStateID) {
	case NRZ_L:
		delete _state; 
		_state = new State_NRZ_L; 
		break;
	case Bipolar_RZ:
		delete _state; 
		_state = new State_Bipolar_RZ; 
		break;
	case Unipolar_RZ:
		delete _state; 
		_state = new State_Unipolar_RZ; 
		break;
	case NRZ_M:
		delete _state; 
		_state = new State_NRZ_M; 
		break;
	case NRZ_S:
		delete _state; 
		_state = new State_NRZ_S; 
		break;
	case RZ_AMI:
		delete _state; 
		_state = new State_RZ_AMI; 
		break;
	case Bi_f_L:
		delete _state; 
		_state = new State_Bi_f_L; 
		break;
	case Bi_f_M:
		delete _state; 
		_state = new State_Bi_f_M; 
		break;
	case Bi_f_S:
		delete _state; 
		_state = new State_Bi_f_S; 
		break;
	default:
		std::cout << "ERROR! Undefined state!";
	}
}


int Coder::StateID(std::string new_state) {
	if (new_state == "NRZ_L") 
		return NRZ_L;
	if (new_state == "Bipolar_RZ") 
		return Bipolar_RZ;
	if (new_state == "Unipolar_RZ") 
		return Unipolar_RZ;
	if (new_state == "NRZ_M") 
		return NRZ_M;
	if (new_state == "NRZ_S") 
		return NRZ_S;
	if (new_state == "RZ_AMI") 
		return RZ_AMI;
	if (new_state == "Bi-f-L") 
		return Bi_f_L;
	if (new_state == "Bi-f-M") 
		return Bi_f_M;
	if (new_state == "Bi-f-S") 
		return Bi_f_S;
}
