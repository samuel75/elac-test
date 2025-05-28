#include <iostream>  
#include "degree.h" 
#include "student.h"
using namespace std;

// print() has been modified just to make the presentation of a single student
// It will change back to what the professor did when we include the roster files.
void Student::print()
{
	cout << studentID << "\t";
	cout << "First Name: " << firstName << "\t";
	cout << "Last Name: " << lastName << "\t";
	cout << "Email address: " << emailAddress << "\t";
	cout << "Age: " << age << "\t";
	cout << "Days in Course: {" << daysToComplete[0] << ", " << daysToComplete[1] << ", " <<
		daysToComplete[2] << "} ";
	cout << "Degree Program: " << printDegree(this->getDegreeProgram()) << endl;
}

string Student::printDegree(DegreeProgram dp)
{
	if (dp == SECURITY)
	{
		return "Security";
	}
	else if (dp == NETWORK)
	{
		return "Networking";
	}
	else if (dp == SOFTWARE)
	{
		return "Software";
	}
	else
	{
		return "Unknown";
	}
}

/*
void Student::print()
{
	cout << "STUDENT INFORMATION" << endl;
	cout << "===================" << endl;
	cout << "Student ID: \t" << studentID << endl;
	cout << "First Name: \t" << firstName << endl;
	cout << "Lasst Name: \t" << lastName << endl;
	cout << "Email address: \t" << emailAddress << endl;
	cout << "Age: \t\t" << age << endl;
	cout << "Days in Course: " << daysToComplete[0] << ", " << daysToComplete[1] << ", " <<
		daysToComplete[2] << endl;
	cout << "Degree Program: " << printDegree(this->getDegreeProgram()) << endl;
}

*/

