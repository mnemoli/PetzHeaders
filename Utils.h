#pragma once
class __declspec(dllimport) LoadInfo {
public:
	unsigned int vars[205];
};

class XLibraryList;

enum class __declspec(dllimport) ELoadType;

struct __declspec(dllimport) Banner;

template <class T, class X>
class __declspec(dllimport) pfvector {
	void* ptr;
	unsigned int size;
	unsigned int capacity;
};

class __declspec(dllimport)Filmstrip;

struct __declspec(dllimport) SOldDLLEntry;

__declspec(dllimport) void* PetzNew(UINT32 amt);
__declspec(dllimport) void PetzDelete(void* ptr);

template<class T, class X>
struct XTRect;

template<class T>
struct XTPoint;

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

enum __declspec(dllimport) EAdj;

enum __declspec(dllimport) EDrop;

enum __declspec(dllimport) ERunMode;

enum __declspec(dllimport) CursorType;

enum __declspec(dllimport) ECleanUpOrder;

class __declspec(dllimport) PetSprite;

class __declspec(dllimport) Ledge;

class __declspec(dllimport) DxSHandle;

enum __declspec(dllimport) WordConceptIndex;

enum __declspec(dllimport) PetBiorhythm;

enum __declspec(dllimport) BehaviorTrait;

enum __declspec(dllimport) EChrz;

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

enum __declspec(dllimport) TraitLevel;

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
class __declspec(dllimport) Genome;
class __declspec(dllimport) Match;

enum __declspec(dllimport) LookMode;
enum __declspec(dllimport) BasketPeekType;
enum __declspec(dllimport) TargetHeight;
enum __declspec(dllimport) ScreenArea;
enum __declspec(dllimport) ScriptDialogState;

struct __declspec(dllimport) TrickMemoryType;

class __declspec(dllimport) Personality;