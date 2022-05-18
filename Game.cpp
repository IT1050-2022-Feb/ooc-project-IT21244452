//IT21277054 _ M.S.Shiraz

#include "Game.h"
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

Game::Game(){//implementing the default constructor
    gameName = "";

  
}

Game::Game(string gName){//implementing the overloaded constructor
    gameName = gName;
  
}

float Game::sendGamePrice(){

  map<string,float> games {
  {"Mario Maths Runner",39.99},{"English with Sonic",29.99},{"Kirby's World Map",19.99}//mapping as assosiative array to declare prices to games
  };
  
  if(gameName == "Mario Maths Runner"){
      return games["Mario Maths Runner"];//returning the game price
    
  }
  else if(gameName == "English with Sonic"){
      return games["English with Sonic"];//returning the game price
    
  }
  else if(gameName == "Kirby's World Map"){
      return games["Kirby's World Map"];//returning the game price
    
  }
  else{
      cout<<"Invalid game name"<<endl;//returning that the value that was entered was invalid
    
  }
  
  return 0;
}


void Game::setGameName(string gName){
   gameName = gName;//assigning values to private attributes

  
}


string Game::getGameName(){
    return gameName;//getting values from private attributes


  
}


Game::~Game(){//implementing the destructor
  cout << "Destructor runs to Game class" << endl;//letting the user know that the destructor was initiated
}