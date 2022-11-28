#pragma once
#include "Area.h"

class __declspec(dllimport) Oberon {
public:
	int vars[3];
	Area* area;
	// not sure about class size yet
	int vars2[417];
	Oberon();
	void InitOberon();
	Area* GetArea(char const*);
	virtual ~Oberon();
	virtual void KillOberon();
};

__declspec(dllimport) extern Oberon g_Oberon;