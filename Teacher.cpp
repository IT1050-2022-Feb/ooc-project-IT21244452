//IT21298080 _ B.M.V.B.B.Gurusinghe

#pragma once
#include <iostream>
#include <cstring>
#include <string>
#include "Teacher.h"
using namespace std;

Teacher::Teacher()//implementing the default constructor
{
	tID = " ";
}

Teacher::Teacher(int UID , string UName , string ptID) : User(UID , UName)
{//implementing the overloaded constructor
	tID =  ptID;
}

string Teacher::sendGameCode()
{
    map<string,string>gameCode{{"T001","AB16"}, {"T002","BC25"},{"T003","CD34"}};//mapping as assosiative array to declare code to game 
	
  	if(tID == "T001" ){
		  return gameCode["T001"];//returning the TeacherID
      
  	}
      
  	else if(tID == "T002"){
      return gameCode["T002"];//returning the TeacherID
      
  	}
      
  	else if(tID == "T003"){
		  return gameCode["T003"];//returning the TeacherID
      
  	}
      
  	else{
		  return "Invaid TeacherID";//returning that the value that was entered was invalid
  	}

}

void Teacher::setTeacherID(string ptID)//assigning values to private attributes
{
	tID = ptID;
}

string Teacher::getTeacherID()//getting values from private attributes
{
	return tID;
}

Teacher::~Teacher()//implementing the destructor
{
	cout<<"Destructor runs to Teacher class"<<endl;//letting the user know that the destructor was initiated
}