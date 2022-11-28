#pragma once

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
	~pfvector() { delete[] ptr; };
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

template<class T>
struct XTPoint {
	T x;
	T y;
};

template<class T>
class XTSmartPtr;

class __declspec(dllimport) XRegion;

class __declspec(dllimport) XDrawPort;

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