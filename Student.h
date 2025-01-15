#pragma once
#include<string>
using namespace std;

class Student
{
private:
	string name;
	string major;
	int age;

public:
	void setName(string);
	string getName();
	void setMajor(string);
	string getMajor();
	void setAge(int);
	int getAge();
	void displayInfo();
};