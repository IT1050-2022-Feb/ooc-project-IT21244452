//IT21244452 _ D.G.N.U.S.Wijayasiri

#pragma once
#include <iostream>
#include <string>
#include "User.h"
using namespace std;


class Leaderboard{
  	private://declaring private attributes
		    string LeaderboardID;
    		int position;
      	float discount;
      	User *u1;

  	public://declaring public attributes
    		Leaderboard();//default constructor
    		Leaderboard(string pLeaderboardID,int pos);//overloaded constructor 
    		void setLeaderboardID(string LeaderboardID);
    	 	void setPosition(int pos);
    	 	string getLeaderboardID();
    	 	int getPosition();
    	 	float calcPositionDiscount();
    		void displayLPositionDiscount();
    	 ~Leaderboard();//destructor
};