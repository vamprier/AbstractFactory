#include "SqlserverDepartment.h"


SqlserverDepartment::SqlserverDepartment(void)
{
}


SqlserverDepartment::~SqlserverDepartment(void)
{
}

void SqlserverDepartment::InsertDepartment()
{
	cout<<"Insert into table Department On SQL Server DB"<<endl;
}

Department SqlserverDepartment::GetDepartment(int id)
{
	cout<<"Select a Data From Department Where Id = id On  SQL Server DB"<<endl;
	Department u(1,"");
	return u;
}