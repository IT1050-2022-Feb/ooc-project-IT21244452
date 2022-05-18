//IT21271182 _ R.M.U.V.Rathnayake

#include <iostream>
#include "Student.h"
#include <cstring>
using namespace std;

Student::Student(){//implementing the default constructor
  	studentID = "";
	studentName = "";
}

Student::Student(int UID , string UName ,string stdID,string stdName) : User(UID , UName){//implementing the overloaded constructor
  	studentID = stdID;
  	studentName = stdName;
}


void Student::setStudentID(string stdID){//assigning values to private attribute 
	studentID = stdID;
}

void Student::setStudentName(string stdName){//assigning values to private attribute
	studentName = stdName;
}

string Student::getStudentID(){//getting values from private attribute
	return studentID;
}

string Student::getStudentName(){//getting values from private attribute
	return studentName;
}

Student::~Student(){//implementing the destructor
  
   cout << "Destructor runs to Student class" << endl;//letting the user know that the destructor was initiated
	
}
