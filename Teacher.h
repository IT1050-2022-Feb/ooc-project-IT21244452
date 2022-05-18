//IT21298080 _ B.M.V.B.B.Gurusinghe

#ifndef TEACHER
#define TEACHER

#pragma once
#include <iostream>
#include <bits/stdc++.h>
#include "User.h"
// #include "Refund.h"

class Refund;

class Teacher : public User{
	private://declaring private attributes
	  	string tID;
      Refund *ref;

	public://declaring public attributes
	 	Teacher();//default constructor
	  	Teacher(int UID , string UName , string ptID);//overloaded constructor
    	string sendGameCode();
	  	void setTeacherID(string ptID);
	  	string getTeacherID();
	  	~Teacher();//destructor
};

#endif