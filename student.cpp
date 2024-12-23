#include <iostream>
using namespace std;
#include "student.h"


Student::Student() {
    studentID = -1;
    firstName = "No Name";
    lastName = "No Name";
    emailAddress = "No Email";
    age = -1;

// Find a way to initialize this array //

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
    return degreeProgram;
}


// Figure out how to construct an array this way
int Student::GetTotalDays() const {
    return totalDays[3];
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

void Student::SetTotalDays(int totalDays) {
    
}

void Student::SetDegreeProgram(string degreeProgram) {
    this->degreeProgram = degreeProgram;
}


void Student::PrintAllInfo() const {
    cout << "Student ID: " << studentID << endl;
    cout << "First Name: " << firstName << endl;
    cout << "Last Name:" << lastName << endl;
    cout << "Email: " << emailAddress << endl;
    cout << "Age: " << age << endl;
    cout << "Degree Program: " << degreeProgram << endl;
}

