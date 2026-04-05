#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{
protected:
    std::string first_name;
    std::string last_name;
    double gpa;
    int graduation_year;
    std::string graduation_semester;
    int enrolled_year;
    std::string enrolled_semester;
    std::string degree_level;

public:
    Student();
    virtual ~Student();

    void setName(const std::string& first, const std::string& last);
    void setGPA(double value);
    void setGraduationYear(int year);
    void setGraduationSemester(const std::string& semester);
    void setEnrolledYear(int year);
    void setEnrolledSemester(const std::string& semester);
    void setDegreeLevel(const std::string& level);

    std::string getFirstName() const;
    std::string getLastName() const;
    double getGPA() const;
};

class Art_Student : public Student
{
private:
    std::string art_emphasis;

public:
    Art_Student();
    ~Art_Student();

    void setArtEmphasis(const std::string& emphasis);
};

class Physics_Student : public Student
{
private:
    std::string concentration;

public:
    Physics_Student();
    ~Physics_Student();

    void setConcentration(const std::string& value);
};

#endif
