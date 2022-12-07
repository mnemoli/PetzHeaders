#pragma once
#include "XDLink.h"
class __declspec(dllimport) XSmartObject: public XDLink {
public:
	virtual ~XSmartObject();
};

class __declspec(dllimport) XRefCountSmartPtr : public XSmartObject {
	int refcountiguess;
};