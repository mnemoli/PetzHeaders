#pragma once
#include "XDLink.h"

class __declspec(dllimport) LoadInfo {
public:
	unsigned int vars[205];
};

class XLibraryList;

enum class __declspec(dllimport) ELoadType;

struct __declspec(dllimport) Banner;

// pfvector is not equivalent to std::vector
// as it stores size/capacity rather than start/end ptrs
// sizeof is 12 rather than 24
// this version is super basic and can't do anything other than access
template <class T, class X = char const*>
class pfvector {
private:
	T* ptr;
	unsigned int size;
	unsigned int capacity;
public:
	inline T& operator[](int a) { return ptr[a]; };
	inline T& operator[](int a) const { return ptr[a]; };
	~pfvector() { delete[] ptr; };
};

template <class T, int I>
class pfarray {
private:
	T ar[I];
};

class __declspec(dllimport)Filmstrip;

struct __declspec(dllimport) SOldDLLEntry;

__declspec(dllimport) void* PetzNew(UINT32 amt);
__declspec(dllimport) void PetzDelete(void* ptr);

template<class T = int, class X = long>
struct XTRect {
	T x1;
	T y1;
	X x2;
	X y2;
};

template<class T = int, class X = long>
struct XTSize {
	T rows;
	X cols;
};

template<class T>
struct XTPoint {
public:
	T x;
	T y;
};

#pragma pack(1)
class __declspec(dllimport) XPointRot3_16 {
public:
	short x;
	short y;
	short z;
	BYTE rotz;
	BYTE rotx;
	BYTE roty;
	BYTE pad;
};
#pragma pack(4)

template<class T, class X>
class XTVector3 {
public:
	T x;
	T y;
	T z;
	/*XTVector3 operator+(const XTVector3& other) const { return XTVector3{ this.x + other.x, this.y + other.y, this.z + other.z }; };
	XTVector3 operator-(const XTVector3& other) const {
		return XTVector3{ this.x - other.x, this.y - other.y, this.z - other.z };
	};*/
};

// dangerous empty implementations
template<class T>
class __declspec(dllimport) XTSmartPtr : public XDLink {
};

class __declspec(dllimport) XRegion;

class __declspec(dllimport) XAbstractDraw {
public:
	virtual ~XAbstractDraw();
	virtual unsigned char* GetBits() = 0;
	virtual void CloseBits() = 0;
	virtual XTRect<> GetBounds() const = 0;
	virtual int GetRowBytes() const = 0;
	virtual XTPoint<int> GetOrigin() const;
	virtual void XFillRect(XTRect<> const&, int);
};

enum __declspec(dllimport) BrushType;

enum RenderMode;

class __declspec(dllimport) RenderBlock {
public:
	RenderMode rendermode;
	int colorindex;
	int outlinecolor;
	int fuzz;
	int textureinfo1 = 0;
	int tex2;
	int tex3;
	RenderBlock(RenderMode);
};

class  CircleRenderBlock : public RenderBlock {
public:
	int outlinetype;
	XTRect<> rect;
	int clipcircleangle = 0;
	int eyelidangle = 0;
	int eyelidheight = 0 ;
	const CircleRenderBlock* clipwithin = 0;
	__declspec(dllimport) CircleRenderBlock& operator=(CircleRenderBlock const&);
	CircleRenderBlock(RenderMode rm) : RenderBlock(rm) { };
};

class __declspec(dllimport) XDrawPort: public XAbstractDraw {
public:
	int vars[42];
	virtual unsigned char* GetBits() override;
	virtual void CloseBits() override;
	virtual XTRect<> GetBounds() const override;
	virtual int GetRowBytes() const override;
	virtual XTPoint<int> GetOrigin() const override;
	virtual void XFillRect(XTRect<> const&, int) override;
	virtual void SetOrigin(XTPoint<int>);
	virtual void SetOrigin(int, int);
	virtual unsigned char* GetHiColorBits();
	void XInitPort(XTRect<> const*, int, bool, bool, bool);
	void XCopyBits(XDrawPort*, XTRect<> const*, XTRect<> const*, BrushType);
	bool XFillCircleEx(CircleRenderBlock*);
	XTSize<int, long> GetSize();
	virtual ~XDrawPort() override;
};

enum __declspec(dllimport) EStackDraw;

enum __declspec(dllimport) CallbackType;

enum __declspec(dllimport) EScriptSpriteToken;

enum __declspec(dllimport) EStackMode;

enum __declspec(dllimport) EShiftMode;

enum __declspec(dllimport) EBFF;

enum __declspec(dllimport) UBall;

enum __declspec(dllimport) HeadTrackMode;

enum __declspec(dllimport) ResetType;

class __declspec(dllimport) Stack;

enum __declspec(dllimport) EFoleySound;

enum __declspec(dllimport) EFlavor;

enum __declspec(dllimport) E3DToyAttach;

enum __declspec(dllimport) EType;

enum __declspec(dllimport) EAdj {
	Type,
	Chrz,
	Toyz,
	Prop,
	Part,
	ThreeD,
	Color,
	Flavor,
	Size,
	Mass,
	Friction,
	Tasty,
	Edible,
	Fatty,
	Liquid,
	Drug,
	Medicine,
	Aphrodisiac,
	Discipline,
	Chew,
	Tug,
	Density,
	Thickness,
	Soft,
	Fuzzy,
	Round,
	Bounce,
	Swatty,
	Pretty,
	Vain,
	Paint,
	Groom,
	BadNoisy,
	NiceNoisy,
	Flies,
	Rideable,
	Mouselike
};

enum __declspec(dllimport) EDrop;

enum __declspec(dllimport) ERunMode;

enum __declspec(dllimport) CursorType;

enum __declspec(dllimport) ECleanUpOrder;

class __declspec(dllimport) DxSHandle {
private:
	DxSHandle();
	int vars[5];
};

enum __declspec(dllimport) WordConceptIndex;

enum __declspec(dllimport) PetBiorhythm;

enum __declspec(dllimport) BehaviorTrait {
	Liveliness,
	Playfulness,
	Independence,
	Confidence,
	Naughtiness,
	Acrobaticness,
	Patience,
	Kindness,
	Nurturing,
	Finickiness,
	Intelligence,
	Messiness,
	Quirkiness,
	Insanity,
	Constitution,
	Metabolism,
	Dogginess,
	LoveDestiny,
	Fertility,
	LoveLoyalty,
	Libido,
	OffspringSex
};

enum __declspec(dllimport) EChrz {
	None = -1,
	Cat = 0,
	Dog
};

enum __declspec(dllimport) FacingDirection;

enum __declspec(dllimport) ColorTypes;

enum __declspec(dllimport) ETrait;

enum __declspec(dllimport) PetState;

enum __declspec(dllimport) EdgeName;

enum __declspec(dllimport) UAction;

enum __declspec(dllimport) PettingRegion;

enum __declspec(dllimport) PettingMode;

struct __declspec(dllimport) RelationshipType;

enum __declspec(dllimport) GoalSearchContext;

enum __declspec(dllimport) PetSoundType;

enum __declspec(dllimport) PurrLevel;

enum __declspec(dllimport) GestureType;

enum __declspec(dllimport) UNeutral;

enum __declspec(dllimport) TraitLevel {
	Zero,
	Low,
	Medium,
	High,
	Fifty,
	Hundred,
	Random
};

enum __declspec(dllimport) PetReaction;

enum __declspec(dllimport) EventName;
enum __declspec(dllimport) PetGoalName;
enum __declspec(dllimport) PetPlanName;

class __declspec(dllimport) GoalToken;
class __declspec(dllimport) PlanToken;
class __declspec(dllimport) EmotionToken;
class __declspec(dllimport) EventToken;
struct __declspec(dllimport) RelationshipRange;
class __declspec(dllimport) Goal;
class __declspec(dllimport) Plan;
class __declspec(dllimport) XBrain;

class __declspec(dllimport) LnzInfo;
class __declspec(dllimport) XPhenotype;
class __declspec(dllimport) Match; // is an xsmartobject

enum __declspec(dllimport) LookMode;
enum __declspec(dllimport) BasketPeekType;
enum __declspec(dllimport) TargetHeight;
enum __declspec(dllimport) ScreenArea;
enum __declspec(dllimport) ScriptDialogState;

struct __declspec(dllimport) TrickMemoryType;

class __declspec(dllimport) Personality;

namespace Petz {
	enum Flavors {
		Chicken,
		Beef,
		Fish,
		Turkey,
		Milk,
		Sweets,
		Catnip,
		Cheese,
		Plastic,
		Rubber,
		Soft,
		Bone,
		Wood,
		Metal,
		Water,
		ShellsRocks,
		HairballFleaspray = 17,
		Chemicals = 23,
		Garbage,
		Fleabottle = 26,
		Plants,
		HealthyTreat
	};

	enum Colors {
		White,
		Black,
		Red,
		Green,
		Yellow,
		Blue,
		Purple,
		Pink,
		Orange,
		Brown,
		Grey,
		Clear
	};
}

class Sprite_Hole;
class Sprite_Dirt;
template <class T>
class pfvector_safe;
enum ESurfaceAdj;
enum ESurface;
class AreaLocationData;
enum EShlMode;
enum EFoot;
class Sprite_Lair;
enum EAreaAdj;

class __declspec(dllimport) CShlGlobals {
public:
	CShlGlobals();
	~CShlGlobals();
	bool vars[1768];
};

__declspec(dllimport) extern CShlGlobals* g_ShlGlobals;