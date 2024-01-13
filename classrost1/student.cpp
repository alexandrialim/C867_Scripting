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
    this->days = new int[3];
    for (int i = 0; i < 3; i++){
        this->days[i] = 0;
    }
    //this->program = DegreeProgram::NETWORK;
}