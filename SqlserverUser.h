#ifndef SQLSU_H
#define SQLSU_H

#include "iuser.h"

class SqlserverUser : public IUser
{
public:
	SqlserverUser(void);
	~SqlserverUser(void);
public:
	virtual void InsertUser();
	virtual User GetUser(int id);
};

#endif