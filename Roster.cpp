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

void add(int index, string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse, DegreeProgram degreeProgram);



void remove(string studentID){
	if (studentID == "A3") {
		classRosterArray.remove(studentID);
	}
}



void printAll();



void printInvalidEmails() {
	
}



void printAverageDaysInCourse();



void printByDegreeProgram(DegreeProgram degreeProgram);



void Roster::parseandadd(string studentData) {
	
	string studentData[5];


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