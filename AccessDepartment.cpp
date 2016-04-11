#include "AccessDepartment.h"


AccessDepartment::AccessDepartment(void)
{
}


AccessDepartment::~AccessDepartment(void)
{
}

void AccessDepartment::InsertDepartment()
{
	cout<<"Insert into table Department On Access DB"<<endl;
}

Department AccessDepartment::GetDepartment(int id)
{
	cout<<"Select a Data From Department Where Id = id On  Access DB"<<endl;
	Department u(1,"");
	return u;
}