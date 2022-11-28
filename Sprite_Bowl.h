#pragma once
#include "ToySprite.h"

class __declspec(dllimport) Sprite_Bowl : public ToySprite {
protected:
	int foodAmount;
public:
	int vars[7];
	Sprite_Bowl();
	virtual void AddInHostExtraCode(Host&) override;
	virtual void Draw(XTRect<int, long>*, XTRect<int, long>*, XDrawPort*, EStackDraw) override;
	virtual int GetEatenSize(void) override;
	virtual bool Eat(void) override;
	virtual XTPoint<int> GetEatOffset(int) override;
	virtual int GetFullyEatenSize(void) override;
	virtual void RemInHostExtraCode(Host&, char const*, char const*) override;
	virtual void RunAlways() override;
	virtual void RunClicksGrabbed(char const*) override;
	virtual void RunClicksDropped(char const*, char const*) override;
	virtual void RunUpdate() override;
	virtual void SetUsed(AlpoSprite*) override;
	virtual void IncrementSize(int);
	virtual int SetRush(int);
	virtual bool GetMedicated();
	virtual void SetMedicated(bool);
	virtual ~Sprite_Bowl();


};