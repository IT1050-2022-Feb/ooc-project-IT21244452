//IT21298080 _ B.M.V.B.B.Gurusinghe

#pragma once
#include "PaymentHistory.h"
#include"Subscription.h"
#include<iostream>
using namespace std;


PaymentHistory::PaymentHistory(){//implementing the default constructor
     numOfPurchas = 0;
}

PaymentHistory::PaymentHistory(int pnumOfPurchas ){//implementing the overloaded constructor
     numOfPurchas = pnumOfPurchas;
}

float PaymentHistory::caldiscount(){

    int newdis = 10,disamount = 0;
  
    for(int i = 0; numOfPurchas >= i;i++){

    if(i == newdis){
      disamount += 1;
      newdis += 10;    
    }
  }

    return disamount;
  
}


void PaymentHistory::setNumOfPurchas(int NumofPurchas){//assigning values to private attributes
    numOfPurchas = numOfPurchas;
}


int PaymentHistory::getNumOfPurchas(){//getting values from private attributes
    return numOfPurchas;
}

PaymentHistory::~PaymentHistory(){//implementing the destructor
    cout << "Destructor runs to PaymentHistory class" << endl;//letting the user know that the destructor was initiated
}