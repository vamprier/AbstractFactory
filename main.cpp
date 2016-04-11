// AbstractFactory.cpp : 定义控制台应用程序的入口点。
//
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "DataAccess.h"

int main(int argc, char* argv[])
{
	DataAccess db;
	//
	User u(1,"");
	IUser* user = db.CreateUser();
	user->InsertUser();
	User t = user->GetUser(1);
	//
	Department d(1,"");
	IDepartment* dt = db.CreateDepartment();
	dt->InsertDepartment();
	Department tt = dt->GetDepartment(1);

	cin.ignore();
	return 0;
}

