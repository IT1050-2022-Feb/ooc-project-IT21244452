//IT21227554 _ A.K.S.Chandrajith

#pragma once
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Friend{
  private://declaring private attributes
    string fID;
    string fName;

  public://declaring public functions
    Friend();//default constructor
    Friend(string pfID,string pFriendName);//overloaded constructor
    void printFrd();
    void setFriendID(string pfID);
    void setFriendName(string pFriendName);
    string getFriendID();
    string getFriendName();
    double getDiscount();
    ~Friend();//destructor 
  };

