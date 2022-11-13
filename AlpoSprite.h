#pragma once
#include "ScriptSprite.h"
#include "Host.h"
#include "BannerAble.h"
class __declspec(dllimport) AlpoSprite : public ScriptSprite, public Host, public BannerAble {
	unsigned int vars[389];
public:
	virtual ~AlpoSprite();
	void DoInitDownload(LoadInfo const&, XLibraryList*) override;
	virtual bool GetIsDependent(void) const;
	virtual bool GetIsBehindPetDoor(void) const;

	virtual bool GetBaskable(void) const;
	virtual bool GetCaseable(void) const;
	virtual bool SetCaseable(bool);
	virtual bool GetHoleable(void) const;
	virtual bool GetPCanable(void) const;
	virtual bool GetPresable(void) const;
	virtual bool GetSBoxable(void) const;
	virtual bool GetTBoxable(void) const;
	virtual bool GetClipable(void) const;
	virtual bool SetClipable(bool);
	virtual bool GetPhotable(void) const;
	virtual bool SetPhotable(bool);
	virtual bool GetPhysical(void) const;
	virtual bool SetPhysical(bool);
	virtual bool GetSaveable(void) const;
	virtual bool SetSaveable(bool);

	virtual CursorType GetGrabCurs(void) const;
	virtual CursorType SetGrabCurs(CursorType);

	virtual short GetClassID(void) const;

	virtual int GetAdjValue(EAdj) const;
	virtual int SetAdjValue(EAdj, int);
	virtual WordConceptIndex const GetWordConceptIndex(void) const;
	virtual void RunClicksClicked(void);
	virtual void RunClicksGrabbed(char const*);
	virtual void RunClicksDropped(char const*, char const*);
	virtual void RunUpdateGrabbed();
	virtual EDrop GetDropTest(AlpoSprite const&) const;
	virtual bool GetMoreRoom(void) const;

	virtual void FixRects(bool);
	virtual void FixSound(void);


	virtual bool GetIsBefore(XSprite const&, bool) const;
	virtual bool GetIsBehind(XSprite const&, bool) const;
	virtual bool GetIsInside(AlpoSprite const&) const;
	virtual bool GetIsInHere(void) const;

	virtual ECleanUpOrder GetCleanUpOrder(void) const;
	virtual ECleanUpOrder SetCleanUpOrder(ECleanUpOrder);

	virtual void PutStuffInShelf(void);
	virtual bool GetGrabbed(void) const;
	virtual bool GetDropped(void) const;
	virtual bool GetBounced(void) const;
	virtual bool SetBounced(bool);
	virtual bool GetFalling(void) const;
	virtual bool GetActive(void) const;
	virtual void FixLedgeMove(Ledge const&);


	virtual bool PatchDownloadedScripts(PetSprite*, char const*, bool);
	virtual void SpurtFromShelf(int, int);
	virtual void InitAlpoSprite(LoadInfo const&, EType);
	virtual void UpdateFilmstripAndRect(void);
	virtual void AddInHostExtraCode(Host&);
	virtual void RemInHostExtraCode(Host&, char const*, char const*);
	virtual XTPoint<int> GetHoldMagic(void) const;
	virtual void ClipToPlaypen(void);


	virtual void AddExtras(void);
	virtual bool GetContainsPet(void) const;
	virtual bool GetGrabable(void) const;
	virtual bool SetGrabable(bool);
	virtual AlpoSprite* GetGrabbing(void) const;
	virtual AlpoSprite* SetGrabbing(AlpoSprite*, AlpoSprite*);
	virtual void AttachedToGrabbing(void);
	virtual XTRect<int, long> const& GetGrabRect(void) const;
	virtual XTRect<int, long> const& SetGrabRect(XTRect<int, long> const&);
	virtual XTPoint<int> GetGrabPoint(void) const;
	virtual XTPoint<int> SetGrabPoint(XTPoint<int>&);
	virtual bool GetMoved(void) const;
	virtual bool SetMoved(bool);
	virtual bool IsBasketLike(void);
	virtual bool CanBeBasketLike(void);
	virtual XTPoint<int> GetInBasketPoint(void);
	virtual XTPoint<int> GetCenterLipPoint(void);
	virtual int GetEatenSize(void);
	virtual bool Eat(void);
	virtual XTPoint<int> GetEatOffset(int);
	virtual int GetFullyEatenSize(void);
	virtual bool GetRooted(void);
	virtual bool GetNonGrabbableFlyingSprite(void);
	virtual bool GetLove(void);
	virtual bool IsThisAPet(XSprite*) const;
	virtual bool IsThisAMouse(XSprite*) const;
	virtual void SetUsed(AlpoSprite*);
	virtual void SetMagicked(AlpoSprite*);
	virtual double GetSpeed(void);
	virtual double SetSpeed(double);
	virtual double GetAngle(void);
	virtual double SetAngle(double);
	virtual XTPoint<double> GetVelocity(void);
	virtual XTPoint<double> SetVelocity(XTPoint<int>);
	virtual XTPoint<double> SetVelocity(XTPoint<double>);
	virtual XTPoint<double> SetVelocity(double, double);
	virtual XTPoint<double> AddVelocity(XTPoint<double>);
	virtual XTPoint<double> AddVelocity(double, double);
	virtual DxSHandle PlaySoundIndex(int, bool, int, int, int) const;
	virtual void PlayFoleySound(EFoleySound sound, EFlavor flavor);
	virtual void PlaySurfaceContactSound(void);
	virtual void GetFreeBallToAttachTo(E3DToyAttach, int, int*, int*);
	virtual bool percentChance(int) const;
	virtual bool percentChance(int, char const*) const;
	virtual void DoPhysics(void);
	virtual void DoDefaultPhysics(bool);
	virtual void Do2DPhysics(void);
	virtual void SmoothPolarOffset(double, double);
	virtual void MoveAwayFrameTo(int, XTRect<int, long>&, XTPoint<int>&);
	virtual void MoreAwayFrameTo(short, XTRect<int, long>&, XTPoint<int>&);
	virtual void DrawAwayFrameTo(XDrawPort*);
	void Draw(XTRect<int, long>*, XTRect<int, long>*, XDrawPort*, EStackDraw) override;
	XLibraryList const* GetLibraryListForBanner(void) const override;
	virtual bool GetIsAlpo(void) const override;
	virtual XTRect<int, long> const& SetDrawRect(XTRect<int, long> const&) override;
	virtual XTPoint<int> SetDrawPoint(XTPoint<int>) override;
	virtual XTPoint<int> SetHoldPoint(XTPoint<int>) override;
	virtual XRegion const& SetDirty(XRegion const&, bool) override;
	virtual XTRect<int, long> const& SetDirty(XTRect<int, long> const&, bool) override;
	virtual bool SetDirty(bool) override;
	virtual bool SetShouldIBeDeleted(bool) override;
	virtual void RunClicks() override;
	virtual void AddAlpoExtraCode(AlpoSprite&) override;
	virtual void RemAlpoExtraCode(AlpoSprite&) override;
	virtual void RunAlways() override;
};