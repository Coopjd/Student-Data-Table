#include <iostream>
using namespace std;
#include "student.h"



Student::Student() {
    studentID = -1;
    firstName = "No Name";
    lastName = "No Name";
    emailAddress = "No Email";
    age = -1;



}

int Student::GetID() const {
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

string Student::GetDegreeProgram() const {
    if (degreeProgram == SECURITY) {
        return "Security";
    }
    else if (degreeProgram == NETWORK) {
        return "Network";
    }
    else if (degreeProgram == SOFTWARE) {
        return "Software";
    }
    else {
        return "No Program";
    }
}


// Figure out how to construct an array this way
int Student::GetTotalDays() const {
    return totalDays[0];
    return totalDays[1];
    return totalDays[2];
}


void Student::SetID(int studentID) {
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

void Student::SetDegreeProgram(DegreeProgram degreeProgram) {
    this->degreeProgram = degreeProgram;
}

void Student::SetTotalDays(int totalDays[]) {
    this->totalDays[0] = totalDays[0];
    this->totalDays[1] = totalDays[1];
    this->totalDays[2] = totalDays[2];
}

void Student::PrintAllInfo() const {
    cout << "Student ID: " << studentID << endl;
    cout << "First Name: " << firstName << endl;
    cout << "Last Name:" << lastName << endl;
    cout << "Email: " << emailAddress << endl;
    cout << "Age: " << age << endl;
    for (int i = 0; i < 3; ++i) {
        cout << totalDays[i] << " ";
    }
    cout << endl;
    cout << "Degree Program: " << degreeProgram << endl;
}

