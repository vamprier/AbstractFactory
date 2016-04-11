#ifndef IDEPARTMENT_H
#define IDEPARTMENT_H

#include "Department.h"
#include <iostream>

using namespace std;


class IDepartment
{
public:
	IDepartment(void);
	virtual ~IDepartment(void);
public:
	virtual void InsertDepartment() = 0;
	virtual Department GetDepartment(int id) = 0; 
};

#endif