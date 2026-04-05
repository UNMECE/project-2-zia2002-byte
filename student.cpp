#include "student.h"

Student::Student()
{
    first_name = "Unknown";
    last_name = "Unknown";
    gpa = 0.0;
    graduation_year = 0;
    graduation_semester = "Unknown";
    enrolled_year = 0;
    enrolled_semester = "Unknown";
    degree_level = "Unknown";
}

Student::~Student()
{
}

void Student::setName(const std::string& first, const std::string& last)
{
    first_name = first;
    last_name = last;
}

void Student::setGPA(double value)
{
    gpa = value;
}

void Student::setGraduationYear(int year)
{
    graduation_year = year;
}

void Student::setGraduationSemester(const std::string& semester)
{
    graduation_semester = semester;
}

void Student::setEnrolledYear(int year)
{
    enrolled_year = year;
}

void Student::setEnrolledSemester(const std::string& semester)
{
    enrolled_semester = semester;
}

void Student::setDegreeLevel(const std::string& level)
{
    degree_level = level;
}

std::string Student::getFirstName() const
{
    return first_name;
}

std::string Student::getLastName() const
{
    return last_name;
}

double Student::getGPA() const
{
    return gpa;
}

Art_Student::Art_Student()
{
    art_emphasis = "Art Studio";
}

Art_Student::~Art_Student()
{
}

void Art_Student::setArtEmphasis(const std::string& emphasis)
{
    art_emphasis = emphasis;
}

Physics_Student::Physics_Student()
{
    concentration = "Biophysics";
}

Physics_Student::~Physics_Student()
{
}

void Physics_Student::setConcentration(const std::string& value)
{
    concentration = value;
}
