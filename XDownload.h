#pragma once
#include "Utils.h"
#include <windows.h>

class __declspec(dllimport) XDownload
{
	__int32 xdownload1;
public:
	virtual ~XDownload();
	XDownload();
	static XDownload* DLLNew(ELoadType loadType, char const* dllString, int something);
	virtual void DoInitDownload(LoadInfo const &loadInfo, XLibraryList* xLibraryList);
	static bool GetDefaultLoadInfoFromDLL(pfvector<LoadInfo> &listy, ELoadType loadType, char const* dllString, XLibraryList* xLibraryList);
	static Filmstrip* GetFilmstripFromDLL(char const* dllString, XLibraryList* xLibraryList);
	static void GetLoadInfoFromDLL(pfvector<LoadInfo>& listy, ELoadType loadType, char const* dllString);
	void InitDownload(LoadInfo const &loadInfo, XLibraryList* xLibraryList);
	static char* s_GetResourceTag(HINSTANCE hInstance, char* dllString, unsigned int loadType);
	static SOldDLLEntry const* GetOldEntry(char const* dllString);

	static HINSTANCE__* s_NullLibInstance;
	static char const** s_ProcName;
};

