#pragma once
#include "XDownload.h"
class __declspec(dllimport) XSound: public XDownload {
public:
	virtual ~XSound();
	_int32 xsoundVars[9];
	_int32 unusedsoundvars[65];
};