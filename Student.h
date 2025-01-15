#pragma once
#include<string>
using namespace std;

template<class ItemType>
class Student
{
private:
	string name;
	string major;
	int age;
	ItemType favoriteThing;

public:
	Student(string, string, int, ItemType);
	Student(string, int);

	void setName(string);
	string getName();
	void setMajor(string);
	string getMajor();
	int getAge();

	
	void displayInfo();
};