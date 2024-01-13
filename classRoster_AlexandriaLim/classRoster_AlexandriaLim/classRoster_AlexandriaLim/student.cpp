//
//  student.cpp
//  classRoster_AlexandriaLim
//
//  Created by Alexandria Lim on 2/1/22.
//
#include <iostream>
#include <iomanip>
#include <string>
#include "degree.h"
#include "student.h"
using namespace std;

//empty constructor
student::student(){

    this->studentID = "";
    this->fname = "";
    this->lname = "";
    this->email = "";
    this->age = 0;
    for (int i = 0; i < 3; i++){
       daycourse[i] = 0;
    }
    this->program = DegreeProgram::NETWORK;
}

//filled constructor
student::student(string ID, string firstName, string lastName, string electronicmail, int studentAge, int daysofProgram[], DegreeProgram programType){

     this->studentID = ID;
     this->fname = firstName;
     this->lname = lastName;
     this->email = electronicmail;
     this->age = studentAge;
     for (int i = 0; i < 3; i++){
         daycourse[i] = daysofProgram[i];
     }
     this->program = programType;
}

//setters
void student::setID(string ID){
    this->studentID = ID;
}
void student::setfname(string firstName){
    this->fname = firstName;
}

void student::setlname(string lastname){
    this->lname = lastname;
}
void student::setemail(string electronicmail){
    this->email = electronicmail;
}
void student::setage(int studentAge){
    this->age = studentAge;
}
void student::setdays(int daysofProgram[]){
    for (int j = 0; j < 3; j++){
        daycourse[j] = daysofProgram[j];
    }
}
void student::setprogram(DegreeProgram programType){
    this->program = programType;
}


//getters
string student::getID(){
    return studentID;
}
string student::getfname(){
    return fname;
}
string student::getlname(){
    return lname;
}
string student::getemail(){
    return email;
}
int student::getage(){
    return age;
}
int* student::getdays(){
    return daycourse;
}
DegreeProgram student::getProgram(){
    return program;
}


void student::print(){
    cout << right << getID() << "\t"  << getfname() << "\t" << getlname() << "\t" << getage() << "\t" << "{" << getdays()[0] << "," << getdays()[1] << "," << getdays()[2] << "}" << "\t" << degreeProgramString[(int)(getProgram())] << endl;
}

//deconstructor
student::~student(){
}
