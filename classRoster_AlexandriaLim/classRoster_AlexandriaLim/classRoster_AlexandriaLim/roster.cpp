//
//  roster.cpp
//  classRoster_AlexandriaLim
//
//  Created by Alexandria Lim on 2/1/22.
//
#include <iostream>
#include <string>
#include "student.h"
#include "degree.h"
#include "roster.h"
using namespace std;

roster::roster(){
    cout << "roster constructor" << endl;
}

void roster::parse(string row){
    int stuIndex = -1;
    if (stuIndex < 4){
        stuIndex++;
    }
    int parseID = row.find(",");
    string parsestudentID = row.substr(0, parseID);
    
    int parsefname = parseID + 1;
    parsefname = row.find(",", parsefname);
    string parsefirstname = row.substr(parseID, parsefname - parseID);
    parsefirstname.erase(0,1);
    
    int parselname = parsefname + 1;
    parselname = row.find(",", parselname);
    string parselastname = row.substr(parsefname, parselname - parsefname);
    parselastname.erase(0,1);
    
    int parsemail = parselname + 1;
    parsemail = row.find(",", parsemail);
    string parseemail = row.substr(parselname, parsemail - parselname);
    parseemail.erase(0,1);
    
    int parsestuAge = parsemail + 1;
    parsestuAge = row.find(",", parsestuAge);
    //string parsestrAge = to_string(parsestuAge);
    string stringage = row.substr(parsemail, parsestuAge - parsemail);
    stringage.erase(0,1);
    int parseage = stoi(stringage); //stringage
    
    int parsemajor1 = parsestuAge + 1;
    parsemajor1 = row.find(",", parsemajor1);
    string stringcourse1 = row.substr(parsestuAge, parsemajor1 - parsestuAge);
    stringcourse1.erase(0,1);
    int parsecourse1 = stoi(stringcourse1); //stringcourse1
    
    int parsemajor2 = parsemajor1 + 1;
    parsemajor2 = row.find(",", parsemajor2);
    string stringcourse2 = row.substr(parsemajor1, parsemajor2 - parsemajor1);
    stringcourse2.erase(0,1);
    int parsecourse2 = stoi(stringcourse2);//stringcourse2
    
    int parsemajor3 = parsemajor2 + 1;
    parsemajor3 = row.find(",", parsemajor3);
    string stringcourse3 = row.substr(parsemajor2, parsemajor3 - parsemajor2);
    stringcourse3.erase(0,1);
    int parsecourse3 = stoi(stringcourse3);//stringcourse3
    
    int parsedegree = parsemajor3 + 1;
    parsedegree = row.find(",", parsedegree);
    DegreeProgram parseprogram;
    string parseprg1 = row.substr(parsemajor3, parsedegree - parsemajor3);
    parseprg1.erase(0,1);
    if (parseprg1 == "SOFTWARE"){
        parseprogram = DegreeProgram::SOFTWARE;
    }else if(parseprg1 == "SECURITY"){
        parseprogram = DegreeProgram::SECURITY;
    }else if(parseprg1 == "NETWORK"){
        parseprogram = DegreeProgram::NETWORK;
    }
    else{
        cout << "program not found..." << endl;
        exit(-1);
    }
    add(parsestudentID, parsefirstname, parselastname, parseemail, parseage, parsecourse1, parsecourse2, parsecourse3, parseprogram);
}

void roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram rostprogram){
    
    int courseDays[3];
    courseDays[0] = daysInCourse1;
    courseDays[1] = daysInCourse2;
    courseDays[2] = daysInCourse3;
    
    classRosterArray[stuIndex++] = new student(studentID, firstName, lastName, emailAddress, age, courseDays, rostprogram);

}

void roster::remove(string studentID){
    int tempsize = sizeof(arrSize);
    for (int l = 0; l < tempsize; l++){
        if (classRosterArray[l] != nullptr){
            if (classRosterArray[l]->getID() == studentID) {
                delete classRosterArray[l];
                classRosterArray[l] = nullptr;
                tempsize--;
            }
        }else{
            cout << "student data not found for " << studentID << endl;
        }
    }
}

void roster::printAll(){
    for (int m = 0; m < 5; m++){
        if(classRosterArray[m] != nullptr){
            classRosterArray[m]->print();
        }
    }
}

void roster::printAverageDaysInCourse(string studentID){
    int avgDays = 0;
    for (int n = 0; n < 5; n++){
        if (classRosterArray[n]-> getID() == studentID){
            avgDays = (classRosterArray[n]->getdays()[0] + classRosterArray[n]->getdays()[1] + classRosterArray[n]->getdays()[2]) / 3;
            cout << "Student ID: " << studentID << ", Average course days: " << avgDays << endl;
        }
    }
}

void roster::printInvalidEmails(){
    string tempemail;
    for (int p = 0; p < 5; p++){
        tempemail = classRosterArray[p]->getemail();
        if(tempemail.find("@") == string::npos or tempemail.find(".") == string::npos or tempemail.find(" ") != string::npos){
            cout << tempemail << " is an invalid email" << endl;
        }
   }
}



void roster::printByDegreeProgram(DegreeProgram rostprogram){
    for (int q = 0; q < 5; q++){
        if (classRosterArray[q]-> getProgram() == rostprogram){
            classRosterArray[q] -> student::print();
        }
    }
}

roster::~roster(){
    delete *classRosterArray;
 }
