#pragma once
class __declspec(dllimport) XDLink {
public:
	XDLink* primary;
	XDLink* secondary;
	virtual void Detach();
	virtual void AttachTo(XDLink& other);
	virtual ~XDLink();
};