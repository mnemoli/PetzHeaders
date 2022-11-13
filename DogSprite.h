#pragma once
#include "PetSprite.h"
class  DogSprite : public PetSprite {
public:
	__declspec(dllimport) DogSprite();
	bool __declspec(dllimport) GetIsCatz() const override;
	bool __declspec(dllimport) GetIsDogz() const override;
	virtual ~DogSprite() {};
};