//IT21271182 _ R.M.U.V.Rathnayake

#include "InstituteStudent.h"
#include <iostream>
#include <string>
using namespace std;

InstituteStudent::InstituteStudent(){//implementing the default constructor
    sID = "";
}

InstituteStudent::InstituteStudent(int UID , string UName  ,string stdID, string stdName , string pSID) : Student (UID , UName ,stdID , stdName) {//implementing the overloaded constructor
    sID = pSID;
}

void InstituteStudent::setSID( string pSID ){ //assigning values to private attribute called "SID"
	sID = pSID;
}

string InstituteStudent::getSID(){//getting values from private attributes
    return sID;
}

int InstituteStudent::getDiscount(){//method to return the discount value
	return 100;
}

int InstituteStudent::selectInstitute(){//method to get discounf for a specific institute
	string insName;
	int discount;
	
	cout<< "Enter your institute name : " ;
	getline(cin ,insName);

	if ( insName == "SLIIT" || insName == "NSBM" || insName == "ICBT" || insName=="NIBM"){
		discount =getDiscount();
	}
	return discount;
}



InstituteStudent::~InstituteStudent(){//implementing the destructor
      cout << "Destructor runs to Institute Student class" << endl;//letting the user know that the destructor was initiated
}