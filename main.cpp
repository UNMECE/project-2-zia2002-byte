#include <iostream>
#include <vector>
#include "student.h"

int main()
{
	std::vector<Art_Student*> art_students;
	std::vector<Physics_Student*> physics_students;

	Art_Student* a1 = new Art_Student();

	a1->setName("John", "Doe");
 	a1->setGPA(3.8);
 	a1->setGraduationYear(2025);
 	a1->setGraduationSemester("Spring");
 	a1->setEnrolledYear(2021);
 	a1->setEnrolledSemester("Fall");
   	a1->setDegreeLevel("Undergrad");
	a1->setArtEmphasis("Art Studio");


 	art_students.push_back(a1);

	  Art_Student* a2 = new Art_Student();

        a2->setName("Jane", "Smith");
        a2->setGPA(3.6);
        a2->setGraduationYear(2026);
        a2->setGraduationSemester("Fall");
        a2->setEnrolledYear(2022);
        a2->setEnrolledSemester("Spring");
        a2->setDegreeLevel("Undergrad");
        a2->setArtEmphasis("Art History");

        art_students.push_back(a2);

	for (int i = 0; i < art_students.size(); i++)
{
    std::cout << art_students[i]->getFirstName() << " "
              << art_students[i]->getLastName() << " GPA: "
              << art_students[i]->getGPA() << std::endl;
}

	for (int i = 0; i < art_students.size(); i++)
{
    delete art_students[i];
}



	return 0;
}
