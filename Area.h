#pragma once
#include "XSmartObject.h"
#include "Host.h"
#include "Utils.h"

class Area : public Host {
public:
	void AddLedge(Ledge*);
	void RemoveLedge(Ledge*);
	virtual void InitArea();
	virtual Area* CreateSiblingArea(char const*);
	virtual bool GetIsNeeded();
	virtual bool GetIsIndoor();
	virtual bool UsesBackground();
	virtual void LoadBackground();
	virtual XRegion const& GetAdjRegion(EAreaAdj) const;
	virtual void SetAdjRegion(void);
	virtual void GetLedgeList(pfvector<XTSmartPtr<Ledge*>>&, bool, bool);
	virtual pfvector_safe<Sprite_Lair*> const& GetLairList() const;
	virtual void SeeAdjRegion(void);
	virtual void SeeAllLedges(void);
	virtual void SeeAllSurfaces(void);
	virtual ESurface GetSurfaceAt(XTPoint<int> const&);
	virtual ESurfaceAdj GetSurfaceAdjAt(XTPoint<int> const&) const;
	virtual int GetHorizonAt(XTPoint<int> const&);
	virtual int GetLowestHorizonAt(int, int);
	virtual int GetSmoothHorizonAt(XTPoint<int> const&);
	virtual int GetTheWallAt(XTPoint<int> const&);
	virtual double GetBounceyAt(XTPoint<int> const&, double);
	virtual void PlayFootstep(XTPoint<int> const&, bool, EFoot, bool);
	virtual Sprite_Hole* MakeHoleHere(XTPoint<int> const&);
	virtual Sprite_Dirt* MakeDirtHere(XTPoint<int> const&);
	virtual bool GetPetzMenuEnabled(void);
	virtual void ShowMyWindow(void);
	virtual int GetLoveMood(void);
	virtual bool GetHasCockroaches(void);
	virtual bool GetHasMice(void);
	virtual bool GetHasClimbableWalls(void);
	virtual void GetWorldBoundary(XTRect<int, long>&);
	virtual bool PatchDownloadedScripts(PetSprite*, char const*, bool);
	virtual void DoPhysics(AlpoSprite*);
	virtual void AdjustNormalOrigin(AreaLocationData const&);
	virtual void AdjustNormalOrigin(void);
	virtual char* LoadAreaAboutText(char const*, char*, int);
	virtual void SetHostCharacterInfo(PetSprite*);
	virtual XLibraryList const* GetAreaLibraryList(void);
	virtual void RealInitArea(void);
	virtual bool GetMoveCase(void);
	virtual bool GetMovePetz(void);
	virtual bool GetShowWind(void);
	virtual void MoveMyWindow(bool);
	virtual void MoveMice(void);
	virtual AreaLocationData& LoadAreaLoc(char const*, AreaLocationData&);
	virtual bool RealCheckForWindowChanges(AreaLocationData&, HWND__*, unsigned int, unsigned int, long);
	virtual EShlMode GetShlMode(void);
	virtual void GetMinWindowSize(long&, long&);
	virtual void GetMaxWindowSize(long&, long&);
	virtual void AdjustMaximizedOrigin(long&, long&, long, long);
	virtual void GetMinWindowSizeAbsolute(long&, long&);
	virtual void GoToArea(void);
	virtual void ExitArea(void);
	virtual void RealGoToArea(void);
	virtual void RealExitArea(void);
	virtual void HidePetz(void);
	virtual void MovePetz(void);
	virtual void InitTempAlpo(void);
	virtual void KillTempAlpo(void);
	virtual HBITMAP__* LoadAreaIcon(char const*);
	virtual int HandleWindozMessage(HWND__*, unsigned int, unsigned int, long, long&);
	virtual bool GetIsTravelEnv(void);
	virtual bool GetHoleTypeName(XTPoint<int> const&, char*);
	virtual DxSHandle PlaySoundIndex(int, bool, int, int, int);
	virtual DxSHandle PlaySoundIndexMaybe(int, bool, int, int, int);
	virtual PetSprite* CreateHostCharacter(char*, short, char*, char*, char*, bool, short, char*, char*, char*, bool);
	virtual void MakeHostCharacter(void);
	virtual void KillHostCharacter(void);
	virtual void RunUpdate() override;
	virtual void RemAlpoExtraCode(AlpoSprite&) override;
	virtual void RealFillOnce(ERunMode, bool) override;
	virtual ~Area();
};