#ifndef USER_H
#define USER_H

#include <string>

using namespace std;

class User
{
public:
	User(int id,string n);
	~User(void);
public:
	void SetId(int id);
	void SetName(string n);
	int GetId();
	string GetName();
private:
	int Id;
	string Name;
};

#endif