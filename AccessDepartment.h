#ifndef ACCESSSQ_H
#define ACCESSSQ_H

#include "idepartment.h"

class AccessDepartment : public IDepartment
{
public:
	AccessDepartment(void);
	~AccessDepartment(void);
public:
	virtual void InsertDepartment();
	virtual Department GetDepartment(int id); 
};

#endif