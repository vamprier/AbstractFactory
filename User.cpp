#include "User.h"


User::User(int id,string n):Id(id),Name(n)
{
}


User::~User(void)
{
}

void User::SetId(int id)
{
	Id = id;
}

void User::SetName(string n)
{
	Name = n;
}

int User::GetId()
{
	return Id;
}

string User::GetName()
{
	return Name;
}