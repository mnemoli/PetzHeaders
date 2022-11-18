#pragma once
#include "ToySprite.h"

class __declspec(dllimport) Sprite_Post: public ToySprite {
public:
	Sprite_Post();
	virtual ~Sprite_Post();
	virtual void RemInHostExtraCode(Host&, char const*, char const*) override;
};