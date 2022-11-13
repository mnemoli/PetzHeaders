#pragma once
#include "XSmartObject.h"

class AlpoSprite;
class ToySprite;

class __declspec(dllimport) Host: public virtual XSmartObject {
public:
	unsigned int vars[133];
	virtual ~Host();
	virtual void RunClicks();
	virtual void RunAlways();
	virtual void RunUpdate();
	virtual void LoadToyz();
	virtual void SaveToyz(bool);
	virtual bool MoveAlpoInside(AlpoSprite&, AlpoSprite*);
	virtual void InitFillOnce(void);
	virtual void RealFillOnce(ERunMode, bool);
	virtual ToySprite* InitFillToyz(char const*, int, int);
	virtual ToySprite* InitFillToyz(char const*, int, XTPoint<int> const&);
	virtual void AddAlpoExtraCode(AlpoSprite&);
	virtual void RemAlpoExtraCode(AlpoSprite&);

};