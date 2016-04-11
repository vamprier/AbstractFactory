#include "SqlserverUser.h"


SqlserverUser::SqlserverUser(void)
{
}


SqlserverUser::~SqlserverUser(void)
{
}

void SqlserverUser::InsertUser()
{
	cout<<"Insert into table User On SQL Server DB"<<endl;
}

User SqlserverUser::GetUser(int id)
{
	cout<<"Select a Data From User Where Id = id On  SQL Server DB"<<endl;
	User u(1,"");
	return u;
}