#include <iostream>
#include "Student.h"
using namespace std;



int main()
{
	Student s[25];

	Student s1;
	s[0].setName("Josh");
	s[0].setMajor("Math");
	s[1].setName("Raajih");
	s[1].setMajor("CS");
	s[1].setAge(-84);

	for (Student x : s)
	{
		if (!(x.getName().empty()))
		{
			x.displayInfo();
		}
	}
	



	return 0;
}