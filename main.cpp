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

	Physics_Student* p1 = new Physics_Student();

	p1->setName("Gabe", "Ignacio");
	p1->setGPA(4.0);
	p1->setGraduationYear(2024);
	p1->setGraduationSemester("Spring");
	p1->setEnrolledYear(2020);
	p1->setEnrolledSemester("Fall");
	p1->setDegreeLevel("Grad");
	p1->setConcentration("Biophysics");

physics_students.push_back(p1);

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

std::cout << "\nPhysics Students:\n";

for (int i = 0; i < physics_students.size(); i++)
{
    std::cout << physics_students[i]->getFirstName() << " "
              << physics_students[i]->getLastName() << " GPA: "
              << physics_students[i]->getGPA() << std::endl;
}



	return 0;
}
