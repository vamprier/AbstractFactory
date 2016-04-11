#ifndef SQLSQ_H
#define SQLSQ_H

#include "idepartment.h"


class SqlserverDepartment : public IDepartment
{
public:
	SqlserverDepartment(void);
	~SqlserverDepartment(void);
public:
	virtual void InsertDepartment();
	virtual Department GetDepartment(int id); 
};

#endif