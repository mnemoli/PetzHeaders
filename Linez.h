#pragma once
#include "BallState.h"

class __declspec(dllimport) XSpeciesInfo {

};

class __declspec(dllimport) LinezCache;
class __declspec(dllimport) TextureLookup;
class __declspec(dllimport) TextureInfo {
	int vars[5];
};
class __declspec(dllimport) ClothingAdjustment;
class __declspec(dllimport) XFurInfo;
class __declspec(dllimport) Clothing;

struct LineStruct {
	int start;
	int end;
	int fuzz;
	int sthick;
	int ethick;
	int col;
	int lfcol;
	int rtcol;
	int option1;
	int option2;
};

class XBallz;

class __declspec(dllimport) Linez: public XSpeciesInfo {
	// some of this belongs to XSpeciesInfo but who cares
public:
	char* somestruct;
	bool initted;
	int numballz;
	int addballcount;
	int ballcount3;
	int unknown1;
	int species;
	int whiskers[21];
	int unknown2;
	int bodyareas[512];
	int keyballz[10];
	int unknown3;
	int eye1ballno;
	int eye2ballno;
	int iris1ballno;
	int iris2ballno;
	LinezCache* cache;
	int unknown4;
	XLibraryList* liblist;
	int crud[3];
	XBallz* xballz;
	pfvector<TextureLookup> texturelookup;
	int numtextures;
	TextureInfo textureinfoarray[512];
	BallState ballstatevar;
	ClothingAdjustment* adjustment;
	XFurInfo* furinfo;
	Clothing* clothing;
	int unknown99;
	int unknown6;
	RenderMode rendermode;
	int crud2[96];
	char something;
	int crud3[133];
	int eyelidcolor1;
	int eyelidcolorfixed;
	int eyelidcolor2;
	bool omissions[512];
	int linezcount;
	int unknown7;
	LineStruct linezinfo[512];
	LineStruct linezinfo2[512];
	int colorindexarray[512];
	int idk[512];
	int outlinecolorarray[512];
	int outlinearray[512];
	int anotherarray[512];
	int crud4[1612];
	int thinarray[512];
	int fatarray[512];
	int movecount;
	int probablymovedata[2561];
	int count4;
	int notsure[4];
	int addballdata[6216];
	int crud5[11];
	int numprojections;
	int projectiondata[1536];
	int fuzzoverride[512];
	int ballsizeoverride[512];
	int fuzz[512];
	int final;
};