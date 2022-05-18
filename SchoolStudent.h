//IT21298080 _ B.M.V.B.B.Gurusinghe

#include <iostream>
using namespace std;
#include "Student.h"

class SchoolStudent : public Student{//inheritance
private://declaring private attributes
  string sID;

public://declaring public attributes
  SchoolStudent();//default constructor
  SchoolStudent (int UID , string UName  ,string stdID,string stdName , string psID);//overloaded constructor
  void setSID(string psID);
  string getSID();
  ~SchoolStudent();//destructor
};
