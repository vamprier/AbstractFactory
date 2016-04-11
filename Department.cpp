#include "Department.h"


Department::Department(int id,string n):Id(id),Name(n)
{
}


Department::~Department(void)
{
}

void Department::SetId(int id)
{
	Id = id;
}

void Department::SetName(string n)
{
	Name = n;
}

int Department::GetId()
{
	return Id;
}

string Department::GetName()
{
	return Name;
}