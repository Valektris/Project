#pragma once
#include <iostream>
#include <string>
#include "degree.h"
using namespace std;

class Student {

private:

	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int daysInCourse[3];
	DegreeProgram degreeProgram;


public:

	//Mutators

	void SetStudentID(string studentID);
	void SetFirstName(string firstName);
	void SetLastName(string lastName);
	void SetEmailAddress(string emailAddress);
	void SetAge(int age);
	void SetDaysInCourse(int* daysInCourse[3]);
	void SetDegreeProgram(DegreeProgram degree);

	//Accessors

	string GetStudentID() const;
	string GetFirstName() const;
	string GetLastName() const;
	string GetEmailAddress() const;
	int GetAge() const;
	int GetDaysInCourse() const;
	DegreeProgram GetDegreeProgram() const;



	//Other required functions

	int average();

	const static int courseArray = 3;

	void print();

};



	//Default constructor;

	Student::Student() {}

	//Constructor

	Student::Student() {
		studentID = "";
		firstName = "";
		lastName = "";
		emailAddress = "";
		age = 0;
		for (int i = 0; i < courseArray; i++) {
			this->daysInCourse[i] = 0;
		}
		this->degreeProgram = DegreeProgram::NETWORK;
	}

