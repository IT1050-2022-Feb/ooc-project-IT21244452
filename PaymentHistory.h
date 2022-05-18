//IT21298080 _ B.M.V.B.B.Gurusinghe

#ifndef NUMOFPURCHAS // Guards to prevent redeclaration
#define NUMOFPURCHAS

#pragma once
#include <iostream>
#define SIZE 10

class User;
class Subscription;

class PaymentHistory
{
	private://declaring private attributes
      int numOfPurchas;
      Subscription *subscrip;
      User *use1[SIZE];


	public://declaring public attributes
	    PaymentHistory();//default constructor
	    PaymentHistory( int pnumOfPurchas);  //overloaded constructor
	    void setNumOfPurchas(int pnumOfPurchas);
	    int getNumOfPurchas();
      	float caldiscount();
	    ~PaymentHistory();//destructor
};

#endif