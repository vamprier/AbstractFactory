#include "AccessUser.h"


AccessUser::AccessUser(void)
{
}


AccessUser::~AccessUser(void)
{
}

void AccessUser::InsertUser()
{
	cout<<"Insert into table User On Access DB"<<endl;
}

User AccessUser::GetUser(int id)
{
	cout<<"Select a Data From User Where Id = id On  Access DB"<<endl;
	User u(1,"");
	return u;
}