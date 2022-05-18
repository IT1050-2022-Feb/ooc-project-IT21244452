//IT21227554 _ A.K.S.Chandrajith

#ifndef REFUND// Guards to prevent redeclaration
#define REFUND

#pragma once
#include<iostream>
// #include"Teacher.h"

#define SIZE 10

class Teacher;

using namespace std;

class Refund{
	private://declaring private attributes
		string refundID;
		double amount;
    Teacher *t1[SIZE];
	public://declaring public attributes
		Refund();//default constructor
		Refund( string prefundID , double pamount);//overloaded constructor
		void setRefundID( string prefundID);
		void setAmount( double pamount );
		string getRefundID();
		double getAmount();
		~Refund();//destructor
};

#endif