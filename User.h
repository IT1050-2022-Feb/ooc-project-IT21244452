//IT21277054 _ M.S.Shiraz

#pragma once
#include <iostream>
#include <string>
#include "Friend.h"
// #include "PaymentHistory.h"
using namespace std;

class PaymentHistory;

class User{
  	protected:
	  	int userID;
	  	string userName;
      PaymentHistory *payHis1;

    private://declaring private attributes
    	Friend *frd1;

  	public://declaring public attributes
      	User();//default constructor
	  	User(int UID , string UName);
      	void print();
      	void setFriendDetails(string pfID,string pFriendName);//overloaded constructor
	  	void setUserId(int UID);
	  	void setUserName(string UName);
		int getUserId();
	  	string getUserName();
	 	~User();//destructor

};

