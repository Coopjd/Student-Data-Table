#ifndef student_h
#define student_h
#include <string>

class Student {

    //Test these out before moving on and decide where to put the #include headers at on each file //

    private:
    int studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    string degreeProgram;

    
    int totalDays[3] = {-1, -1, -1};

    // Make sure to verify these functions before moving on //

    public:

    // Accessor Functions //
    int GetID() const;
    string GetFirstName() const;
    string GetLastName() const;
    string GetEmailAddress() const;
    int GetAge() const;
    string GetDegreeProgram() const;
    int GetTotalDays() const;

    //Mutator Functions //
    void SetID(int studentID);
    void SetFirstName(string firstName);
    void SetLastName(string lastName);
    void SetEmailAddress(string emailAddress);
    void SetAge(int age);
    // figure out how to construct this array in student.cpp //
    void SetTotalDays(int totalDays);

    void SetDegreeProgram(string degreeProgram);


    void PrintAllInfo() const;


};


#endif