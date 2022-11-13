#pragma once
class __declspec(dllimport) StateMachine {
public:
	unsigned int vars[5];
	virtual ~StateMachine();
	virtual void Dispatch(bool, bool);
	virtual int GetCurState();
	virtual int GetNextState();
	virtual void UpdateState();
	virtual void BaseNewState(int);
	virtual void LoadStateNames(int, int);
	virtual void ClearTransitioningFlags();
};