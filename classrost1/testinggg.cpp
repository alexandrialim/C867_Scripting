//need to test 
void roster::remove(string studentID){
    for (int l = 0; l < 5; l++){
        if ((classRosterArray[l] != nullptr) && (classRosterArray[l]-> getID() == studentID)){
            delete classRosterArray[l];
            classRosterArray[l] = nullptr;
        }else{
            cout << "student data not found for " << studentID << endl;
        }
        // return;
    }
}

void roster::printAverageDaysInCourse(string studentID){
    double avgDays = 0.0;
    for (int n = 0; n < 5; n++){
        if (classRosterArray[n]-> getID() == studentID){
            int* tmpDays = classRosterArray[n]->getdays();
            cout << "Avg days in courses" << classRosterArray << " : " << (tmpDays[0] + tmpDays[1] + tmpDays[2])/3;
            for(int o = 0; o < 3; o++){
                double tmpAvgDays = 0.0;
                tmpAvgDays += tmpDays[o];
                avgDays = tmpAvgDays / 3;
            }
            cout << studentID << " Average course days: " << avgDays << endl;
            //n--;
        }else{
            cout << "student data not found for " << studentID << endl;
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
        if (classRosterArray[q]-> getProgram() == program){
            classRosterArray[q] -> student::print();
        }
    }
}

//extra
   for(int i = 0; i < 6; i++){
       vector<string> studentVector(9);
       DegreeProgram tempDegree;
       if(studentVector.at(8) == "SOFTWARE"){
           tempDegree = DegreeProgram::SOFTWARE;
       }else if(studentVector.at(8) == "SECURITY"){
           tempDegree = DegreeProgram::SECURITY;
       }else if(studentVector.at(8) == "NETWORK"){
           tempDegree = DegreeProgram::NETWORK;
       }else{
           tempDegree = DegreeProgram::NONE;
       }
       classRoster.add(studentVector.at(0), studentVector.at(1), studentVector.at(2), studentVector.at(3), stoi(studentVector.at(4)), stoi(studentVector.at(5)), stoi(studentVector.at(6)), stoi(studentVector.at(7)), tempDegree);
   }

int main(){
   //print program values
   DegreeProgram dp = DegreeProgram::NETWORK;
   cout << int(dp) << ' ' << degreeProgramString[int(dp)] << endl;
   cout << "all courses in order" << endl;
   for(int i = 0; i < 3; i++){
       cout << i << ' ' << degreeProgramString[i] << endl;
   }
   return 0;
}

    //cout << "print invalid emails" << endl;
    //classRoster.printInvalidEmails();
    //cout << endl;


    //DegreeProgram dp = DegreeProgram::NETWORK;
    //cout << int(dp) << ' ' << degreeProgramString[int(dp)] << endl;
//    for (int i = 0 ; i < 5; i++) {
//        cout << studentData[i] << endl;
//        //cout << i << ' ' << degreeProgramString[i] << endl;
//    }
