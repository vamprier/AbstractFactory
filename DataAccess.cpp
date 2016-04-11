#include "DataAccess.h"


DataAccess::DataAccess(void)
{
	db = "sql server";
	funcUser.insert(make_pair("sql server",new SqlserverUser()));
	funcUser.insert(make_pair("access",new AccessUser()));
	funcDepartment.insert(make_pair("sql server",new SqlserverDepartment()));
	funcDepartment.insert(make_pair("access",new AccessDepartment()));
}


DataAccess::~DataAccess(void)
{
}

IUser* DataAccess::CreateUser()
{
	return funcUser[db];
}

IDepartment* DataAccess::CreateDepartment()
{
	return funcDepartment[db];
}