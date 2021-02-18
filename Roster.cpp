#pragma once
#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"
#include "Roster.h"

using namespace std;




Roster::Roster() {}

Roster::Roster() {
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int daysInCourse1;
	int daysInCourse2;
	int daysInCourse3;
	DegreeProgram degreeProgram;

}



//Student students[5];

Roster classRosterArray[];

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int *daysInCourse, DegreeProgram degreeProgram) {
	int i;
	for (i = 0; i < 5; i++) {
		classRosterArray[i] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeProgram);

	}
	
}



void Roster::remove(string studentID) {
	int i;
	bool found = false;
	for (i = 0; i < 5; i++){
		if(this->classRosterArray[i]->GetStudentID() == "A3") {
			found = true;
			delete this->classRosterArray[i];

		}
	}
};



void Roster::printAll() {
	int i;
	for (i = 0; i < 5; i++) {
		(this->classRosterArray)[i]->print();
	}


}



void Roster::printInvalidEmails() {
	int i;
	for (i = 0; i < 5; i++) {
		string emailAddress = (this->classRosterArray[i])->GetEmailAddress();
		if (emailAddress.find('@') == string::npos)
		{
			cout << emailAddress << endl;
		}
		else if (emailAddress.find(".") == string::npos)
		{
			cout << emailAddress << endl;
		}

		else if (emailAddress.find(" ") != string::npos)
		{
			cout << emailAddress << endl;
		}



	}
	
}



void Roster::printAverageDaysInCourse() {
	int i;
	for (i = 0; i < 5; i++) {
		this->classRosterArray[i]->Student::average();
	}
	
}



void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
	int i;
	for (i = 0; i < 5; i++) {
		if (classRosterArray[i]->degreeProgram == 0) {
			cout << "Security Students: " << classRosterArray[i];
		}
		else if (classRosterArray[i]->degreeProgram == 1) {
			cout << "Network Students: " << classRosterArray[i];
		}
		else if (classRosterArray[i]->degreeProgram == 2) {
			cout << "Software Students: " << classRosterArray[i];
		}
	}
}




void Roster::parseandadd(string studentData) {
	
	for (int i = 0; i < 5; i++)
	{
		size_t rhs = studentData[i].find(",");
		classRosterArray[i].studentID = studentData[i].substr(0, rhs);

		size_t lhs = rhs + 1;
		rhs = studentData[i].find(",");
		classRosterArray[i].firstName = studentData[i].substr(lhs, rhs - lhs);

		lhs = rhs + 1;
		rhs = studentData[i].find(",");
		classRosterArray[i].lastName = studentData[i].substr(lhs, rhs - lhs);

		lhs = rhs + 1;
		rhs = studentData[i].find(",");
		classRosterArray[i].emailAddress = studentData[i].substr(lhs, rhs - lhs);

		lhs = rhs + 1;
		rhs = studentData[i].find(",");
		classRosterArray[i].age = studentData[i].substr(lhs, rhs - lhs);

		lhs = rhs + 1;
		rhs = studentData[i].find(",");
		classRosterArray[i].daysInCourse1 = studentData[i].substr(lhs, rhs - lhs);

		lhs = rhs + 1;
		rhs = studentData[i].find(",");
		classRosterArray[i].daysInCourse2 = studentData[i].substr(lhs, rhs - lhs);

		lhs = rhs + 1;
		rhs = studentData[i].find(",");
		classRosterArray[i].daysInCourse3 = studentData[i].substr(lhs, rhs - lhs);

		lhs = rhs + 1;
		rhs = studentData[i].find("\0");
		classRosterArray[i].degreeProgram = studentData[i].substr(lhs, rhs - lhs);


	}
}