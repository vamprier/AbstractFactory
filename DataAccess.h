#ifndef DATAACCESS_H
#define DATAACCESS_H

#include <map>

#include "IUser.h"
#include "IDepartment.h"
#include "SqlserverUser.h"
#include "AccessUser.h"
#include "SqlserverDepartment.h"
#include "AccessDepartment.h"

class DataAccess
{
public:
	DataAccess(void);
	~DataAccess(void);
public:
	IUser* CreateUser();
	IDepartment* CreateDepartment();
private:
	string db;
	map<string,IUser*> funcUser;
	map<string,IDepartment*> funcDepartment;
};

#endif