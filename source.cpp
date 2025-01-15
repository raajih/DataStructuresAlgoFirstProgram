#include <iostream>
#include "Student.h"
using namespace std;



int main()
{
	Student s1("Josh", "Math", 25);
	Student s2("Raajih", "CS", 24);


	s1.displayInfo();
	s2.displayInfo();



	return 0;
}