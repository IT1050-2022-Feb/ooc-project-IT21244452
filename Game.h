//IT21277054 _ M.S.Shiraz

#pragma once
#include <iostream>
#include <string>

using namespace std;

class Game{
  private://declaring private attributes
    string gameName;

  public://declaring public functions
    Game();//default constructor
    Game(string gName);//overloaded constructor
    float sendGamePrice();
    void setGameName(string gName);

    string getGameName();

    ~Game();//destructor 

};