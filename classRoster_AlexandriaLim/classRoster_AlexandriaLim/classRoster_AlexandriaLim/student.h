//
//  student.h
//  classRoster_AlexandriaLim
//
//  Created by Alexandria Lim on 2/1/22.
//
#pragma once
#ifndef student_h
#define student_h
#include "degree.h"


class student{
    //define private and public variables
private:
    //student ID
    string studentID;
    
    //student first name
    string fname;
    
    //student last name
    string lname;
    
    //student email
    string email;
    
    //student age
    int age;
    
    //array of 3 that contains total number of days required for each of the 3 courses
    int daycourse[3];
    
    //student degree program
    DegreeProgram program;
    
public:
    //constructors
    student();
    student(string ID, string firstName, string lastName, string electronicmail, int studentAge, int daysofProgram[], DegreeProgram programType);
    
    //create setters
    void setID(string studentID);
    void setfname(string fname);
    void setlname(string lname);
    void setemail(string electronicmail);
    void setage(int age);
    void setdays(int daysofProgram[]);
    void setprogram(DegreeProgram program);
    void print();
    
    //create getters
    string getID();
    string getfname();
    string getlname();
    string getemail();
    int getage();
    int* getdays();
    DegreeProgram getProgram();
    
    //deconstruct
    ~student();
    
};

#endif /* student_h */
