#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <string>

using namespace std;

class Department
{
public:
	Department(int id,string n);
	~Department(void);
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