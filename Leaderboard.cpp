//IT21244452 _ D.G.N.U.S.Wijayasiri

#pragma once
#include <iostream>
#include <string>
#include "Leaderboard.h"
#include "User.h"

using namespace std;

Leaderboard::Leaderboard()//implementing the default constructor
{
   LeaderboardID = "";
}

Leaderboard::Leaderboard(string pLeaderboardID,int pos)//implementing the overloaded constructor
{
	LeaderboardID = pLeaderboardID; 
  position = pos;
}

void Leaderboard::setLeaderboardID(string pLeaderboardID)// assign a value to leaderboardID
{
	 LeaderboardID = pLeaderboardID ;
}

string Leaderboard::getLeaderboardID()// take value from leaderboardID
{
	return LeaderboardID;
}
void Leaderboard::setPosition(int pos)// assign a value to position
{
  position = pos;
}
int Leaderboard::getPosition()// take value from position
{
  return position;
}

float Leaderboard::calcPositionDiscount()// calculating discount according to the leaderboard position
{
  
  if (position <= 3)
  {
     return 40 * 0.05; 
  }

  else if (position <= 10)
  {
    return 40 * 0.03; 
  }
    
  else if (position <= 20)
  {
    return 40 * 0.02; 

  }
}


void Leaderboard::displayLPositionDiscount()// display discount
{
    cout << "Leader Board Discount : " << discount << endl;
   
}


Leaderboard::~Leaderboard() // destructor to the leaderboard class 
{
	  cout<<"Destructor runs to Leaderboard class"<<endl;//letting the user know that the destructor was initiated
}
