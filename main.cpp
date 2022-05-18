#include <iostream>
#include <cstring>

#include "Friend.h"
#include "Game.h"
#include "Leaderboard.h"
#include "PaymentHistory.h"
#include "Refund.h"
#include "Student.h"
#include "Subscription.h"
#include "Teacher.h"
#include "User.h"
#include "InstituteStudent.h"
#include "SchoolStudent.h"

using namespace std;

int main() {

  //create objects
  
  //IT21244452 _ D.G.N.U.S.Wijayasiri
  Subscription sb1(30.00 , 2);
  Leaderboard* lead1 = new Leaderboard();
  
  //IT21277054 _ M.S.Shiraz
  	User Us1 (123 , "Shamry Shiraz");
  	Game* gm1 = new Game(); 
  
  //IT21271182 _ R.M.U.V.Rathnayake
  	Student stu1(234 , "Vihang123" , "S234", "Vihangi Rathnayake");
  	InstituteStudent* intstd1 = new InstituteStudent();
  
  //IT21227554 _ A.K.S.Chandrajith
  	Friend frd1("f123", "Umayangana Wijayasiri");
  	Refund* ref1 = new Refund(); 
  
  //IT21298080 _ B.M.V.B.B.Gurusinghe
  	PaymentHistory payHis1(30);
  	Teacher* tech1 =  new Teacher();
  	SchoolStudent schstd1( 123 , "Vishwa123" , "S123" , "Vishwa Gurusinghe" , "Ss123") ;


  
  //create variables
  	int uid;
  	string uName,fid,fName,gname, insName, tID;
	  string stuTy , sclIns , gamecode;
	  char temp ;
  	int Smonth , institute , game , noOfFriends ;
  	float insDis , billForSubscription;

   	string lid , fID ;
  	int lposition;
  	double lDisk1;




  
  //Implementation of the program
	
  
  	cout << "\n\t Welcome to PIXXEL!\tツ\n\n" << endl;
	
  //get user details
  
	cout << " ---  Enter your details  --- \n" << endl;
  	cout<<"Enter User ID : ";
  	cin>>uid;

  	cout<<"Enter User Name : ";
 	  cin.ignore();
  	getline(cin ,uName);
  
  	cout<<"Enter Friend ID : ";
  	cin>>fid;

  	cout<<"Enter Friend Name : ";
  	cin.ignore();
  	getline(cin ,fName);

  	User* u1 = new User(uid,uName);
  	u1->setFriendDetails(fid,fName);
	
	u1->print();



  cout << "-------------------------------------------"<< endl;
	
  //End of user details

	

  //selection of a game
  //IT21277054 _ M.S.Shiraz
	
	cout << "\n ---  Select a Game  --- \n" << endl;
	
  	cout <<"1 - Mario Maths Runner \n2 - English with Sonic \n3 - Kirby's World Ma\t\n\nSelect one : ";
    cin >> game;
  while(true){  
    if(game == 1 ){
      	gname = "Mario Maths Runner";
      	break;
    }
    else if(game == 2 ){
      	gname = "English with Sonic";
      	break;
      
    }
    else if(game == 3 ){
      	gname = "Kirby's World Ma";
      	break;
    }
    else{
      	cout<< "\nInvalid Enter again : ";
      	cin >> game;
      	continue;
    }
    
  }
  
  	Game* g1 = new Game(gname);
  	g1->sendGamePrice();

  	cout<<"Price of the selected game : $"<<g1->sendGamePrice()<<endl;

  cout << "-------------------------------------------"<< endl;
  
  //End game 


	
  //select the subscription
  //IT21244452 _ D.G.N.U.S.Wijayasiri
	
	cout << "\n ---  Subscription  --- \n" << endl;
	
    cout << "Enter the No of months : ";
  	cin >> Smonth;

    float gprice = g1->sendGamePrice();


  	Subscription sub1(45.00 , 3);
  	billForSubscription = sub1.calcSubscriptionBill();
	cout << "Bill for Subscription : " << billForSubscription << endl;

    cout << "-------------------------------------------"<< endl;
  
  //End of the subscription


  
  
  // get details of friends
  //IT21227554 _ A.K.S.Chandrajith
	
  	cout << "\n ---  Enter friend details  --- \n" << endl;

  	cout << "Enter number of Friends : ";
  	cin >> noOfFriends ;
    cout << endl;
  	Friend * f[noOfFriends];

  	for ( int i = 0 ; i < noOfFriends ; i++ ){
    	cout << "Enter Friend ID : ";
    	cin >> fID;

    	cout << "Enter Friend Name : ";
    	cin >> fName;
      cout << endl << endl;

    	f[i] = new Friend(fID , fName);
  	}	

  	cout << "You have "<< noOfFriends ;
  
  	if(noOfFriends > 0 ) { 
    
  		cout << " Friends. Their names : \n";
		
  		for ( int i = 0 ; i < noOfFriends ; i++ ){
    		cout << "\t" << f[i]->getFriendName() << endl;
  		}
  	} 
  
  	cout << "\n Based on your number of friends ";
  
  	if (noOfFriends == 0 ){
    	cout << "you get 0% discount ! \n"<< endl;
  	}
  	else if (noOfFriends >= 5){
    	cout << "you get "<< noOfFriends*1 << "% discount ! \n"<< endl;
  	}
  	else {
    	cout << "you get "<< noOfFriends*1 << "% discount ! \n"<< endl;
  	}



    cout << "-------------------------------------------"<< endl;

  //End of Friend

  
	
  //Selection of the user type
  //IT21271182 _ R.M.U.V.Rathnayake
	
	cout << "\n ---  Select your user type  --- \n" << endl;
	
	cout<< "Are you an academic student?(yes/no)   " ;
	cin.ignore();
	getline(cin ,stuTy);

	if (stuTy == "yes" ){
		
		cout<< "Are you a School student or Institute student (school/institute) : " ;
		getline(cin ,sclIns );
		
		if (sclIns == "school" ){
			cout << "Enter your teacher's ID : " ;
		  	getline(cin ,tID);

			//get the releveant game ID of the teacher
			Teacher* teach1 = new Teacher(uid , uName ,tID);
	
			gamecode = teach1 -> sendGameCode();

			cout << "Your game code is : " << gamecode << endl;
		}
		else if (sclIns == "institute" ){
			
			//selection of the institute
			InstituteStudent* instStd1;
			insDis = instStd1 -> selectInstitute();

			if ( insDis == 100 ){
				cout << "Institute discount = 100% " << endl;
			}
			else{
				cout<< "No institute discount !" << endl;
			}
		}
	}
	else{
		cout<< "Not continuing as a student! " << endl;
	}

    cout << "-------------------------------------------"<< endl;
  
  //End student type


	
  //Leaderboard
  //IT21244452 _ D.G.N.U.S.Wijayasiri
	
	cout << "\n ---  Select leaderboad details  --- \n" << endl;
  	cout << "Enter Leaderboard ID :";
  	cin >> lid;

  	cout << "Enter the position of Leaderboard :";
  	cin >> lposition;

  	Leaderboard *l1 =new Leaderboard(lid , lposition);
  	l1-> setLeaderboardID(lid);
  	l1-> setPosition(lposition);

  	l1->getLeaderboardID();
  	l1->getPosition();
  
  	cout << "Position Discount : $" << l1->calcPositionDiscount() << endl;


    cout << "-------------------------------------------"<< endl;
  
  //End of leaderboad

  
  //calculate the refund
  //IT21244452 _ D.G.N.U.S.Wijayasiri
	
  	Refund r1("f123" , 5);
  	cout << "Refund amount : $" << r1.getAmount() << endl;


	
  //History of the payments
  //IT21298080 _ B.M.V.B.B.Gurusinghe
    
    cout << "\n ---  Select the number of game (Every 10 purchases gives a 1$ discount)  --- \n" << endl;
  
    int nofp;
    
    cout<<"Enter Number of Purchases :";
    cin>> nofp;
  
    PaymentHistory* ph = new PaymentHistory(nofp);
    cout<<"Discount Due to Purchasing many Games :"<<ph->caldiscount ()<<"%"<<endl;

    cout << "-------------------------------------------"<< endl;
  
  //end payment history
    

  //delete dynamic objects
	delete lead1; 
	delete gm1; 
	delete intstd1; 
	delete ref1; 
	delete tech1;
  	for ( int i = 0 ; i < noOfFriends ; i++ ){
  		delete f[i];
  	}

  
}	//end of the program

