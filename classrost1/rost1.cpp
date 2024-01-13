#include <iostream>
#include <string>
#include "student.h"
#include "degree.h"
#include "roster.h"
using namespace std;

void roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram rostprogram){
    
    int courseDays[3];
    courseDays[0] = daysInCourse1;
    courseDays[1] = daysInCourse2;
    courseDays[2] = daysInCourse3;

    int arrSize = sizeof(classRosterArray); // 5/9
    for(int k = 0; k < arrSize; k++){
        classRosterArray[k] = student(studentID, firstName, lastName, emailAddress, age, courseDays, rostprogram);
    }
}