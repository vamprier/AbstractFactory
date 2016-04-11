#ifndef IUSER_H
#define IUSER_H

#include "User.h"
#include <iostream>

using namespace std;

class IUser
{
public:
	IUser(void);
	virtual ~IUser(void);
public:
	virtual void InsertUser() = 0;
	virtual User GetUser(int id) = 0; 
};

#endif