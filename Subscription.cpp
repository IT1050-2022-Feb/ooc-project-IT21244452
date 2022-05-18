 //IT21244452 _ D.G.N.U.S.Wijayasiri

#include <iostream>
#include <cstring>
#include "Subscription.h"
#include "Game.h"
#include "PaymentHistory.h"
using namespace std;


Subscription::Subscription(){//implementing the default constructor
  BillForGames = 0;  
  noOfMonth = 0;
}

Subscription::Subscription(float bill , int pNoOfMonth){//implementing the overloaded constructor
    BillForGames = bill;
    noOfMonth = pNoOfMonth;
}


void Subscription::setNoOfMonth(int pNoOfMonth){//assigning values to private attributes
  noOfMonth = pNoOfMonth;
}

void Subscription::setGamePrice(Game *gm1){
  
}

void Subscription::setBillGames(float billGames)
{
  BillForGames = billGames;
}

int Subscription::getNoOfMonth(){//getting values from private attributes
  return noOfMonth;
}
  
float Subscription::getBillGames()
{
  return BillForGames;
}


  
int Subscription::calcSubscriptionBill() //Calculation
{
  return BillForGames * noOfMonth;
}

Subscription::~Subscription(){//implementing the destructor
  cout << "Destructor runs to Subscription class" << endl;//letting the user know that the destructor was initiated
}