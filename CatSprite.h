#pragma once
#include "PetSprite.h"
class  CatSprite : public PetSprite {
public:
	__declspec(dllimport) CatSprite();
	bool __declspec(dllimport) GetIsCatz() const override;
	bool __declspec(dllimport) GetIsDogz() const override;
	virtual ~CatSprite() {};
};