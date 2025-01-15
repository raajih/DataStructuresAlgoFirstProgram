#include <iostream>
#include "Student.h"

using namespace std;


void Student::displayInfo()
{
	cout << "Student " << name << " is a " << major << " major." << endl;
}