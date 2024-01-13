//
//  roster.h
//  classRoster_AlexandriaLim
//
//  Created by Alexandria Lim on 2/1/22.
//
#pragma once
#ifndef roster_h
#define roster_h
#include <iostream>
#include "student.h"

class roster{
private:
    //student index position in array
    int stuIndex = 0;
    
    //array size of the class roster
    int arrSize = sizeof(classRosterArray);
public:
    
    //student class roster array
    student* classRosterArray[5];
    
    //modifying functions
    void parse(string row);
    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram rostprogram);
    void remove(string studentID);
    void printAll();
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram rostprogram);
    
    //constructor
    roster();
    
    //destructor
    ~roster();
};

#endif /* roster_h */
