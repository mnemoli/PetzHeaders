#pragma once
#include "Area.h"

class __declspec(dllimport) DownloadArea : public Area, public Host, public Bannerable {
	virtual void SetHostCharacterInfo(PetSprite*) override;
	virtual bool GetIsNeeded(void) override;
	virtual void LoadBackground(void) override;
	virtual void SeeAllSurfaces(void) override;
	virtual ESurface GetSurfaceAt(XTPoint<int> const&) override;
	virtual ESurfaceAdj GetSurfaceAdjAt(XTPoint<int> const&) override;
	virtual int GetHorizonAt(XTPoint<int> const&) override;
	virtual int GetLowestHorizonAt(int, int) override;
	virtual int GetSmoothHorizonAt(XTPoint<int> const&) override;
	virtual int GetTheWallAt(XTPoint<int> const&) override;
	virtual double GetBounceyAt(XTPoint<int> const&, double) override;
	virtual void PlayFootstep(XTPoint<int> const&, bool, EFoot, bool) override;
	virtual Sprite_Hole* MakeHoleHere(XTPoint<int> const&) override;
	virtual Sprite_Dirt* MakeDirtHere(XTPoint<int> const&) override;
	virtual void ShowMyWindow(void) override;
	virtual void AdjustNormalOrigin(void) override;
	virtual char* LoadAreaAboutText(char const*, char*, int) override;
	virtual void SetHostCharacterInfo(PetSprite*) override;
	virtual XLibraryList const* GetAreaLibraryList(void) override;
	virtual void RealInitArea(void) override;
	virtual void MoveMyWindow(bool) override;
	virtual void RealExitArea(void) override;
	virtual HBITMAP__* LoadAreaIcon(char const*) override;
	virtual int HandleWindozMessage(HWND__*, uint, uint, long, long&) override;
	virtual bool GetIsTravelEnv(void) override;
	virtual bool GetHoleTypeName(XTPoint<int> const&, char*) override;
	virtual DxSHandle PlaySoundIndex(int, bool, int, int, int) override;
	virtual DxSHandle PlaySoundIndexMaybe(int, bool, int, int, int) override;
	virtual PetSprite* CreateHostCharacter(char*, short, char*, char*, char*, bool, short, char*, char*, char*, bool) override;
	virtual XLibraryList const* GetLibraryListForBanner(void) override;
	virtual void DoInitDownload(LoadInfo const&, XLibraryList*) override;
};