#pragma once
#include "XSound.h"
#include "XSmartObject.h"

class __declspec(dllimport) XSprite : public virtual XSmartObject, public XSound {
	unsigned int vars[38];
public:
	virtual ~XSprite();
	virtual bool GetIsAlpo(void) const;
	virtual bool GetIsChrz() const;
	virtual bool GetIsPetz() const;
	virtual bool GetIsCatz() const;
	virtual bool GetIsDogz() const;
	virtual bool GetIsMice() const;
	virtual bool GetIsToyz() const;
	virtual bool GetIsClot() const;
	virtual XTRect<int, long> const& GetDrawRect() const;
	virtual XTRect<int, long> const& SetDrawRect(XTRect<int, long> const&);
	virtual XTRect<int, long> const& GetLevitateRect() const;
	virtual XTPoint<int> GetDrawPoint() const;
	virtual XTPoint<int> SetDrawPoint(XTPoint<int>);
	virtual XTPoint<int> GetHoldPoint(void) const;
	virtual XTPoint<int> SetHoldPoint(XTPoint<int>);
	virtual bool SetDirty(bool);
	virtual XTRect<int, long> const& SetDirty(XTRect<int, long> const&, bool);
	virtual XRegion const& SetDirty(XRegion const&, bool);
	virtual void SetClean();
	virtual bool GetIsBefore(XSprite& xsprite);
	virtual bool GetIsBehind(XSprite& xsprite);
	virtual bool GetShouldIDoHorizon() const;
	virtual bool GetMustIDoHorizon() const;
	virtual bool GetShouldIDoFootprints() const;
	virtual bool GetShouldIBeDeleted() const;
	virtual bool SetShouldIBeDeleted(bool);
	virtual void DrawStacked(XDrawPort* drawPort, EStackDraw stackDrawType);
	virtual void Draw(XTRect<int, long>*, XTRect<int, long>*, XDrawPort*, EStackDraw);
	virtual void DebugDump();
};