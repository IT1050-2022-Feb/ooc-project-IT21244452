//IT21227554 _ A.K.S.Chandrajith

#pragma once
#include <iostream>
#include <cstring>
#include "Refund.h"
#include"Teacher.h"
#include <string>

using namespace std;

Refund::Refund()//implementing the default constructor
{
	refundID = "";
	amount = 0;
}

Refund::Refund( string prefundID , double pamount )//implementing the overloaded constructor
{
	refundID = prefundID;
	amount = pamount;
}

void Refund::setRefundID( string prefundID )//assigning values to private attributes
{
	refundID = prefundID;
}

void Refund::setAmount( double pamount )//assigning values to private attributes
{
	amount = pamount;
}

string Refund::getRefundID()//getting values from private attributes
{
	return refundID;
}

double Refund::getAmount()//getting values from private attributes
{
	return amount;
}

Refund::~Refund()//implementing the destructor
{
  cout << "Destructor runs to Refund class" << endl;//letting the user know that the destructor was initiated
}