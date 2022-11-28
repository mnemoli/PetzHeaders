#pragma once
#include "AlpoSprite.h"

class __declspec(dllimport) ToySprite : public AlpoSprite {
public:
	virtual void InitToy(bool, Host*);
	virtual bool GetDontBringToScreenSaver(void) const;
	virtual void InitToyResources(void);
	virtual void InitToyExtraCode(bool, Host*);
	virtual void InitToyHostStuff(void);
	virtual void AddInHostExtraCode(Host&);
	virtual void DrawAwayFrameTo(XDrawPort*);
	short GetClassID(void) const override;
	virtual bool GetIsToyz(void) const override;
	virtual void MoreAwayFrameTo(short, XTRect<int, long>&, XTPoint<int>&);
	virtual void MoveAwayFrameTo(int, XTRect<int, long>&, XTPoint<int>&);
	virtual void RemInHostExtraCode(Host&, char const*, char const*);
	virtual void RunClicksDropped(char const*, char const*);
	virtual void RunClicksGrabbed(char const*);
	virtual void RunUpdate();
	virtual ~ToySprite();
};