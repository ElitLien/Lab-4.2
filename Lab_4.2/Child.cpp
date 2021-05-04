/////////////
// Child.cpp
/////////////

#include "Child.h"

Child::Child(string n, string f)
{
	name = n;
	f_name = f;
}

void Child::PrintName()
{
	cout << "Father : " << name << " Child :" << f_name << endl;
}
