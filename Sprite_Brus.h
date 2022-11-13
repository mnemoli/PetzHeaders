#pragma once
#include "ToySprite.h"

class __declspec(dllimport) AlpoSprite;

class __declspec(dllimport) Sprite_Brus : public ToySprite {
public:
	virtual ~Sprite_Brus();
	Sprite_Brus();
	virtual void RunUpdate();
	virtual void SetUsed(AlpoSprite*) override;
};