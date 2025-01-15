#include <iostream>
#include "Student.h"

using namespace std;

Student::Student(string n, string m, int a)
{
	name = n;
	major = m;
	age = a;
}

Student::Student(string n, int a)
{
	name = n;
	major = "undecided";
	age = a;
}

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
	if (a < 14 || a > 120)
		cout << "Invalid age." << endl;
	else
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