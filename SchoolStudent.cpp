//IT21298080 _ B.M.V.B.B.Gurusinghe

#include <iostream>
#include <cstring>
#include "SchoolStudent.h"
using namespace std;

SchoolStudent::SchoolStudent()//implementing the default constructor
{
	sID = "";
}

SchoolStudent::SchoolStudent (int UID , string UName  ,string stdID,string stdName , string psID) : Student (UID , UName ,stdID, stdName)//implementing the overloaded constructor
{
	sID = psID;
}

void SchoolStudent::setSID(string psID)//assigning values to private attributes
{
	sID = psID;
}

string SchoolStudent::getSID()//getting values from private attributes
{
	return sID;
}

SchoolStudent::~SchoolStudent()//implementing the destructor
{
	cout << "Destructor runs to School Student class" << endl;//letting the user know that the destructor was initiated
  
}


