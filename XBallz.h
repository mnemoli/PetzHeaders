#pragma once
#include "Utils.h"
#include "XDLink.h"
#include "XSmartObject.h"
#include "Linez.h"

class __declspec(dllimport) BallFrameEx {
public:
	short x1;
	short y1;
	int vars1[80];
	short ballsize[512];
	pfvector<XPointRot3_16> posrotinfo;
};
class XBallzDataBase;

class __declspec(dllimport) XBallzData : public XDLink {
public:
	XBallzData(XBallzDataBase*, XLibraryList);
	virtual ~XBallzData();
	virtual bool _AmIChild();
};

class __declspec(dllimport) XBallzDataBase : public XBallzData, XRefCountSmartPtr {
	//vars are inaccurate - who cares
public:
	XBallzDataBase* db;
	int vars1[76];
	int numballz;
	int vars2[6];
};

class __declspec(dllimport) XBallz : public XBallzDataBase {
public:
	//vars are inaccurate - who cares
	int vars1[6];
	Linez* linez;
	short someval;
	short vars2[1023];
	int sixteenarray[16];
	bool linedrawcheck2;
	int addballarray[445];
	int addballcount;
	int vars3[6665];
	bool zorderflag;
	bool coloroverrides[512];
	int vars4[1354];
	bool renderedarray[512];
	int vars5[515];
	int ballnoarray[512];
	int zscale[512];
	// more vars here...
	XBallz(XLibraryList*);
	void DrawPaintBallz(XDrawPort&, int, CircleRenderBlock const&, BallState const&, pfvector<XPointRot3_16> const&);
	void DrawAllLines(XDrawPort*, BallState const*, BallFrameEx const*, pfarray<bool, 512>&, int, XTPoint<int> const&);
	void DrawAllWhiskers(XDrawPort*, BallState const&, BallFrameEx const*, int, XTPoint<int> const&);
	void DrawEyeball(XDrawPort*, BallFrameEx const*, BallState const*, int, CircleRenderBlock const&, int, XTPoint<int> const&);
	void DisplayBallzFrame(XDrawPort*, XTRect<> const*, BallState*);
	void SetBallTextureInfo(CircleRenderBlock&, BallState const&, pfvector<XPointRot3_16> const&, int);
	BallFrameEx const* GetCartesianCoordinates(BallState*);
	void ZOrder(BallFrameEx const*, int);
	void Clip(BallState&, XTRect<int, long> const&, XDrawPort&, XDrawPort&) const;
	void SetIndivBallColor(int ballno, int color);
	void SetGroupBallColor(int ballno, int color);
	void SetGroupColor(int group, int color);
	void RotateBallPoint(XTVector3<long, long>&, BallState const&, int, XPointRot3_16 const&) const;
};