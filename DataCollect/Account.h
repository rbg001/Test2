#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "AccountConfig.pb.h"


class Account
{
public:
	AccountConfig * ReadAccountConfig();
	void SaveAccountConfig();
	
protected:
private:
	AccountConfig * accountConfig=NULL;
	
};

#endif
