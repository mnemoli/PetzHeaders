#pragma once
#include "XSmartObject.h"
#include "Utils.h"
class __declspec(dllimport) Ledge : public XSmartObject {
public:
	XTRect<> rect;
	pfvector<AlpoSprite*> interestedSprites;
	bool toyzAllowed;
	bool petzAllowed;
	int beingUsed;
	void NotifyInterestedSprites() const;
	XTRect<> const& SetBounds(XTRect<> const&);
	void SetPetsAllowed(bool);
	Ledge(XTRect<int, long> const&, bool toyzAllowed, bool petzAllowed);
	~Ledge();
};