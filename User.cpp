//IT21277054 _ M.S.Shiraz

#pragma once
#include <iostream>
#include <string>
#include "User.h"
#include "Friend.h"
#include "Refund.h"
using namespace std;

User::User(){//implementing the default constructor
  userID = 0;
  userName = "";
  
}

User::User(int UID , string UName)//implementing the overloaded constructor
{
  userID = UID;
  userName = UName;
  frd1 = new Friend;
  
}

void User::setFriendDetails(string pfID,string pFriendName){//Implementing attributes in friends(composition)
  
  frd1->setFriendID(pfID);
  frd1->setFriendName(pFriendName);
}

void User::print(){
  cout<< "\nYour ID : " <<userID<< "\tName : " <<userName<<endl;//printing UserID and User name
  frd1->printFrd();
  cout<<endl;
}

void User::setUserId(int UID)//assigning values to private attributes
{
	userID=UID;
}

void User::setUserName(string UName)//assigning values to private attributes
{
	userName = UName;
}

int User::getUserId()//getting values from private attributes
{
	return userID;
}

string User::getUserName()//getting values from private attributes
{
	return userName;
}

User::~User()//implementing the destructor
{
    cout<<"Destructor runs to User class"<<endl;//letting the user know that the destructor was initiated
}




