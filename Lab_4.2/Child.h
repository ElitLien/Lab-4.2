///////////
// Child.h
///////////

#pragma once
#include"Father.h"
#include <iostream>
#include <string>

using namespace std;

class Child : public Father
{
private:
	string f_name, name;

public:
	Child() :name("Name"), f_name("f_name") {}
	Child(string n, string f);

	virtual void PrintName();

};

