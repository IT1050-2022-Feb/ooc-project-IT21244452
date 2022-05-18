//IT21271182 _ R.M.U.V.Rathnayake

#pragma once
#include <iostream>
#include "User.h"

class Student : public User{
 	protected:
    	string studentID;
    	string studentName;

  	public://declaring public attributes
   		Student();//default constructor
    	Student (int UID , string UName ,string stdID,string stdName);//overloaded constructor

    	void setStudentID(string stdID);
    	void setStudentName(string stdName);

    	string getStudentID();
    	string getStudentName();

    	~Student();//destructor


};