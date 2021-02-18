#pragma once
#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"
#include "Roster.h"

int main() {

	cout << "Stephanie Young" << "\t" << "#001247223" << "WGU C867" << "\t" << "C++" << "\t" << endl;


	
		
	const string studentData[] = {

	"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",      "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",

	"A5,Stephanie,Young,syou342@wgu.edu,35,16,27,65,SOFTWARE"

	};

	Roster classRoster;

	classRoster.parseandadd(studentData);

	classRoster.printAll();

	classRoster.printInvalidEmails();

	classRoster.printAverageDaysInCourse();

	classRoster.printByDegreeProgram(SOFTWARE);

	classRoster.remove("A3");

	classRoster.printAll();

	classRoster.remove("A3");



}