#pragma once
#include "XDLink.h"
class __declspec(dllimport) XSmartObject: public XDLink {
public:
	unsigned int vars[725];
	virtual ~XSmartObject();
};