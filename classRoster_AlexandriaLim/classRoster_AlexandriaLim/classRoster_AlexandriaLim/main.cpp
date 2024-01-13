//
//  main.cpp
//  classRoster_AlexandriaLim
//
//  Created by Alexandria Lim on 2/1/22.
//
//#pragma once
#include <iostream>
//#include <vector>
//#include <iomanip>
using namespace std;
#include "roster.h"
#include "degree.h"
#include "student.h"

string studentData[5] = {
   "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
   "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
   "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
   "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
   "A5,Alexandria,Lim,alim18@wgu.edu,20,34,29,29,SOFTWARE"
};

int main() {

    cout << "C867 - Scripting & Programming: Applications" << endl;
    cout << "Language: C++" << endl;
    cout << "Student ID: 001452263" << endl;
    cout << "Name: Alexandria Lim" << endl;

    // Create a roster named classRoster
    roster* classRoster;

    //parse and add data to student class roster array
    for (int i = 0; i < 5; i++){
        classRoster->parse(studentData[i]);
    }
    
    cout << endl;
    
    //print all student info
    cout << "print all students:" << endl;
    classRoster->printAll();
    
    cout << endl;
    
    //print invalid email addresses
    cout << "Display Invalid Emails:" << endl;
    classRoster->printInvalidEmails();
    
    cout << endl;
    
    //print avg days in course
    cout << "avg days" << endl;
    classRoster->printAverageDaysInCourse("A1");
    classRoster->printAverageDaysInCourse("A2");
    classRoster->printAverageDaysInCourse("A3");
    classRoster->printAverageDaysInCourse("A4");
    classRoster->printAverageDaysInCourse("A5");
    
    cout<< endl;
    
    cout << "showing students in degree program: SOFTWARE" << endl;
    classRoster->printByDegreeProgram(DegreeProgram::SOFTWARE);
    
    cout << endl;
    
    cout << "remove student" << endl;
    classRoster->remove("A3");
    
    cout << endl;

    cout << "print all without a3" << endl;
    classRoster->printAll();
    
    cout << endl;
    
    cout << "removing student A3 again..." << endl;
    classRoster->remove("A3");
    
    return 0;
}
