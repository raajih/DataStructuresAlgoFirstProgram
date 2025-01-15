#include <iostream>
#include "Student.h"
using namespace std;



int main()
{
	Student<string> s1("Josh", "Math", 25, "kittens");
	Student<bool> s2("Raajih", "CS", 24, true);


	s1.displayInfo();
	s2.displayInfo();



	return 0;
}