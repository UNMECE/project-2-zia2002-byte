#include <iostream>
#include <vector>
#include <fstream>
#include "student.h"

int main()
{
    std::vector<Art_Student*> art_students;
    std::vector<Physics_Student*> physics_students;

    //Art Students
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

Art_Student* a3 = new Art_Student();
    a3->setName("Tito", "Hernandez");
    a3->setGPA(3.4);
    a3->setGraduationYear(2027);
    a3->setGraduationSemester("Spring");
    a3->setEnrolledYear(2023);
    a3->setEnrolledSemester("Fall");
    a3->setDegreeLevel("Undergrad");
    a3->setArtEmphasis("Art Education");
    art_students.push_back(a3);

Art_Student* a4 = new Art_Student();
    a4->setName("Josh", "Hernandez");
    a4->setGPA(3.7);
    a4->setGraduationYear(2026);
    a4->setGraduationSemester("Fall");
    a4->setEnrolledYear(2022);
    a4->setEnrolledSemester("Spring");
    a4->setDegreeLevel("Undergrad");
    a4->setArtEmphasis("Art History");
    art_students.push_back(a4);

Art_Student* a5 = new Art_Student();
    a5->setName("Jaden", "Stock");
    a5->setGPA(3.2);
    a5->setGraduationYear(2027);
    a5->setGraduationSemester("Fall");
    a5->setEnrolledYear(2023);
    a5->setEnrolledSemester("Spring");
    a5->setDegreeLevel("Undergrad");
    a5->setArtEmphasis("Art Studio");
    art_students.push_back(a5);

    //Physics Students
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

Physics_Student* p2 = new Physics_Student();
    p2->setName("Dylan", "Castillo");
    p2->setGPA(3.6);
    p2->setGraduationYear(2025);
    p2->setGraduationSemester("Fall");
    p2->setEnrolledYear(2021);
    p2->setEnrolledSemester("Spring");
    p2->setDegreeLevel("Grad");
    p2->setConcentration("Earth and Planetary Sciences");
    physics_students.push_back(p2);

Physics_Student* p3 = new Physics_Student();
    p3->setName("Bennett", "Zellner");
    p3->setGPA(3.9);
    p3->setGraduationYear(2024);
    p3->setGraduationSemester("Spring");
    p3->setEnrolledYear(2020);
    p3->setEnrolledSemester("Fall");
    p3->setDegreeLevel("Grad");
    p3->setConcentration("Biophysics");
    physics_students.push_back(p3);

Physics_Student* p4 = new Physics_Student();
    p4->setName("Jaiden", "Westlake");
    p4->setGPA(3.5);
    p4->setGraduationYear(2026);
    p4->setGraduationSemester("Fall");
    p4->setEnrolledYear(2022);
    p4->setEnrolledSemester("Spring");
    p4->setDegreeLevel("Grad");
    p4->setConcentration("Earth and Planetary Sciences");
    physics_students.push_back(p4);

Physics_Student* p5 = new Physics_Student();
    p5->setName("Ben", "Gannon");
    p5->setGPA(3.8);
    p5->setGraduationYear(2025);
    p5->setGraduationSemester("Spring");
    p5->setEnrolledYear(2021);
    p5->setEnrolledSemester("Fall");
    p5->setDegreeLevel("Grad");
    p5->setConcentration("Biophysics");
    physics_students.push_back(p5);

    	std::ofstream outfile("student_info.dat");

    	outfile << "Art Students:\n";
    	for (int i = 0; i < art_students.size(); i++)
{
        outfile << art_students[i]->getFirstName() << " "
                << art_students[i]->getLastName() << " GPA: "
                << art_students[i]->getGPA() << std::endl;
}

    outfile << "\nPhysics Students:\n";
    for (int i = 0; i < physics_students.size(); i++)
    {
        outfile << physics_students[i]->getFirstName() << " "
                << physics_students[i]->getLastName() << " GPA: "
                << physics_students[i]->getGPA() << std::endl;
    }

    outfile.close();

    // celar memory
    	for (int i = 0; i < art_students.size(); i++)
    {
        delete art_students[i];
    }

    for (int i = 0; i < physics_students.size(); i++)
    {
        delete physics_students[i];
    }

    return 0;
}
