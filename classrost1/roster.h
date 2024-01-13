#pragma once
#ifndef roster_h
#define roster_h
#include <iostream>
#include "student.h"
class roster{
private:
    int stuIndex;
public:
    
    student* classRosterArray;
    
    //modifying functions
    void parse(string row);
    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram rostprogram);
    void remove(string studentID); //prints an error message indicating that the student was not found.
    void printAll();
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram rostprogram);
    
    roster();
    
    ~roster();
};

#endif /* roster_h */