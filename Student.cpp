#pragma once
#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"
using namespace std;


int i = 0;

void Student::SetStudentID(string studentID) {
	this->studentID = studentID;
}
void Student::SetFirstName(string firstName) {
	this->firstName = firstName;
}
void Student::SetLastName(string lastName) {
	this->lastName = lastName;
}
void Student::SetEmailAddress(string emailAddress) {
	this->emailAddress = emailAddress;
}
void Student::SetAge(int age) {
	this->age = age;
}
void Student::SetDaysInCourse(int *daysInCourse[3]) {
	for (i = 0; i < 3; i++) {
		this->daysInCourse[i] = *daysInCourse[i];
	}
}
void Student::SetDegreeProgram(DegreeProgram degree) {
	this->degreeProgram = degree;
}

string Student::GetStudentID() const {
	return studentID;
}
string Student::GetFirstName() const {
	return firstName;
}
string Student::GetLastName() const {
	return lastName;
}
string Student::GetEmailAddress() const {
	return emailAddress;
}
int Student::GetAge() const {
	return age;
}
int Student::GetDaysInCourse() const {
	return daysInCourse[3];
}
DegreeProgram Student::GetDegreeProgram() const {
	return degreeProgram;
}

//Print function

void Student::print() {
	cout << GetStudentID() << "\t" << GetFirstName() << "\t" << GetLastName() << "\t" << GetEmailAddress() << "\t" << GetAge() << "\t" << GetDaysInCourse() << "\t" << GetDegreeProgram() << endl;
}

//Calculate the average
int Student::average() {
	int avg = 0;
	int total = 0;
	for (i = 0; i < 3; i++) {
		
		total = total + daysInCourse[i];
		
	}
	avg = total / 3;
	cout << "Student's average days in course: " << endl;
}

//Destructor

