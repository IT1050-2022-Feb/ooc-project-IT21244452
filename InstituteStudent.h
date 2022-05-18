//IT21271182 _ R.M.U.V.Rathnayake

#pragma once
#include "Student.h"
#include <iostream>
#include <string>
using namespace std;

class InstituteStudent : public Student
{
  	private://declaring private attributes
   		string sID;

  	public://declaring public functions
    	InstituteStudent();//default constructor
    	InstituteStudent(int UID , string UName  ,string stdID,string stdName , string pSID );//overloaded constructor

		void setSID( string pSID );
    	string getSID();

		int getDiscount();
		int selectInstitute();

    	~InstituteStudent();//destructor

};