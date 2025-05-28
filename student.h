#ifndef student_h
#define student_h
#include <string>
#include "degree.h"
using namespace std;

class Student
{
private:
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysToComplete[3];
    DegreeProgram degreeProgram;

public:
    Student()
    {
        studentID = "Invalid";
        firstName = "Invalid";
        lastName = "Invalid";
        emailAddress = "Invalid";
        age = 0;
        daysToComplete[0] = -1;
        daysToComplete[1] = -1;
        daysToComplete[2] = -1;
        degreeProgram = DegreeProgram::SOFTWARE;
    }

    Student(string sID, string fName, string lName, string eAddress, int a, int* dtc, DegreeProgram dp)
    {
        studentID = sID;
        firstName = fName;
        lastName = lName;
        emailAddress = eAddress;
        age = a;
        daysToComplete[0] = dtc[0];
        daysToComplete[1] = dtc[1];
        daysToComplete[2] = dtc[2];
        degreeProgram = dp;
    }

    string getStudentID()
    {
        return studentID;
    }
    string getFirstName()
    {
        return firstName;
    }
    string getLastName()
    {
        return lastName;
    }
    string getEmailAddress()
    {
        return emailAddress;
    }
    int getAge()
    {
        return age;
    }
    int* getDaysToComplete()
    {
        return daysToComplete;
    }
    DegreeProgram getDegreeProgram()
    {
        return degreeProgram;
    }

    void setStudentID(string sID)
    {
        studentID = sID;
    }
    void setFirstName(string fName)
    {
        firstName = fName;
    }
    void setLastName(string lName)
    {
        lastName = lName;
    }
    void setEmailAddress(string eAddress)
    {
        emailAddress = eAddress;
    }
    void setAge(int a)
    {
        age = a;
    }

    void setDaysToComplete(int* dtc)
    {
        daysToComplete[0] = dtc[0];
        daysToComplete[1] = dtc[1];
        daysToComplete[2] = dtc[2];
    }

    void setDegreeProgram(DegreeProgram dp)
    {
        degreeProgram = dp;
    }

    void print();
    string printDegree(DegreeProgram dp);

};

#endif
