#pragma once

class __declspec(dllimport) BannerAble {
public:
	virtual ~BannerAble();	
	virtual XLibraryList const* GetLibraryListForBanner(void) const;
	virtual void GetBannerDataFromFile(char const*, pfvector<Banner, char const*>&) const;
	pfvector<Banner, const char*> banners;
};