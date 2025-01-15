#include <iostream>
#include "Student.h"

using namespace std;

template<class ItemType>
 Student<ItemType>::Student(string n, string m, int a, ItemType fav)
{
	name = n;
	major = m;
	age = a;
	favoriteThing = fav;
}

template<class ItemType>
Student<ItemType>::Student(string n, int a)
{
	name = n;
	major = "undecided";
	age = a;
}

template<class ItemType>
void Student<ItemType>::setName(string n)
{
	name = n;
}

template<class ItemType>
string Student<ItemType>::getName()
{
	return name;
}

template<class ItemType>
void Student<ItemType>::setMajor(string m)
{
	major = m;
}

template<class ItemType>
string Student<ItemType>::getMajor()
{
	return major;
}


template<class ItemType>
int Student<ItemType>::getAge()
{
	return age;
}

template<class ItemType>
void Student<ItemType>::displayInfo()
{
	cout << "Student " << name << " is a " << major << " major." << endl;
}