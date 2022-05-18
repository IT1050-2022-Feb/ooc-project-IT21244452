//IT21227554 _ A.K.S.Chandrajith

#pragma once
#include <iostream>
#include <cstring>
#include <string>
#include "Friend.h"
using namespace std;


Friend::Friend(){//implementing the default constructor
  	fID = "";
  	fName = "";
  
}

Friend::Friend(string pfID , string pFriendName){//implementing the overloaded constructor
  fID = pfID;
  fName = pFriendName;
  
}

void Friend::printFrd(){
  cout << "Friend ID : "<<fID<<"\tName : "<<fName;//printing friend name
}

void Friend::setFriendID(string pfID){
  fID = pfID;//assigning values to private attributes
}

void Friend::setFriendName(string pFriendName){
   fName = pFriendName;//assigning values to private attributes
}

string Friend::getFriendID(){
  return fID;//getting values from private attributes
}

string Friend::getFriendName(){
  return fName ;//getting values from private attributes
}


Friend::~Friend(){//implementing the destructor
  cout << "Destructor runs to Friend class"<< endl;
}