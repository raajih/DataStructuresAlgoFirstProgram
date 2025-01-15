#include <iostream>
#include "Student.h"
using namespace std;



int main()
{
	Student s[25];

	Student s1;
	s[0].name = "Josh";
	s[0].major = "Math";
	s[1].name = "Raajih";
	s[1].major = "CS";
	s[1].age = -84;

	for (Student x : s)
	{
		if (!(x.name.empty()))
		{
			x.displayInfo();
		}
	}
	



	return 0;
}