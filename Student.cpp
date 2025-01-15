#include <iostream>
#include "Student.h"

using namespace std;

void Student::setName(string n)
{
	name = n;
}

string Student::getName()
{
	return name;
}

void Student::setMajor(string m)
{
	major = m;
}

string Student::getMajor()
{
	return major;
}

void Student::setAge(int a)
{
	age = a;
}

int Student::getAge()
{
	return age;
}

void Student::displayInfo()
{
	cout << "Student " << name << " is a " << major << " major." << endl;
}