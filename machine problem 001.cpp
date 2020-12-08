#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>
using namespace std;

int main() {

	string name;
	string course;
	int Ylevel;
	double NoUnit;
	string yearName;
	float RUnit;
	float tuition;
	float downP;
	float balance;

	cout << "Student Name: ";
	getline(cin, name);
	cout << "Program/Course: ";
	getline(cin, course);
	cout << "Year Level: ";
	cin >> Ylevel;
	cout << "No. of Units: ";
	cin >> NoUnit;

	switch (Ylevel) {
		case 1:
		yearName = "Freshman";
		RUnit = 1500;
		break;
		case 2:
		yearName = "Sophomore";
		RUnit = 1800;
		break;
		case 3:
		yearName = "Junior";
		RUnit = 2000;
		break;
		case 4:
		yearName = "Senior";
		RUnit = 2300;
		break;
		case 5:
		yearName = "Senior";
		RUnit = 2300;
		break;
	}

	tuition = NoUnit * RUnit;
	downP = tuition * 0.3;
	balance = tuition - downP;

	cout<<"\n";
    Sleep(1000);
		cout << "ENROLLMENT SLIP" << endl;
		cout<<"\n";
		cout << "Student Name:" << name << endl;
		cout << "Program/Course: " << course << endl;
		cout << "Year Name: " << yearName << endl;
		cout << "No. of Units: " << NoUnit << endl;
		cout << "Tuition Fee: " << tuition << endl;
		cout << "Down Payment: " << downP << endl;
		cout << "Balance: " << balance << endl;

	return 0;
}
