#ifndef ACCESSU_H
#define ACCESSU_H

#include "iuser.h"

class AccessUser : public IUser
{
public:
	AccessUser(void);
	~AccessUser(void);
public:
	virtual void InsertUser();
	virtual User GetUser(int id);
};

#endif