#pragma once
#include <iostream>
#include <string>
#include "student.h"
#include "Roster.h"
#include "degree.h"

class Roster {

private:

	Student* classRosterArray[5];
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int daysInCourse1;
	int daysInCourse2;
	int daysInCourse3;
	DegreeProgram degreeProgram;


public:

	//Mutators

	void add(int index, string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse, DegreeProgram degreeProgram);

	void remove(string studentID);

	//Accessors

	Student* getStudent(int i);

	//Print functions
	
	void printAll();
	void printInvalidEmails();
	void printAverageDaysInCourse();
	void printByDegreeProgram(DegreeProgram degreeProgram);
	void parseandadd(string studentData);

	//Constructors

	Roster();

	//Destructor

	Roster::~Roster() {};


};