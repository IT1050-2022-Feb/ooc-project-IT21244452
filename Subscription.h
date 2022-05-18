//IT21244452 _ D.G.N.U.S.Wijayasiri

#include <iostream>
#include "Game.h"

class Subscription{
  private://declaring private attributes
      int noOfMonth ;
      float BillForGames;

  public://declaring public attributes
      Subscription();//default constructor
      Subscription(float bill ,int pNoOfMonth);//overloaded constructor
      void setNoOfMonth(int pNoOfMonth);
      int getNoOfMonth();
      void setBillGames(float billGames);
      float getBillGames();
      void setGamePrice(Game *gm1);
      int calcSubscriptionBill();
      ~Subscription();//destructor
};

