#include <iostream>

using namespace std;

int
main ()
{
  // global variable declaration.
  const int NUM_SEATS = 20;
  const int SEAT_TAKEN = 1;
  const int SEAT_FREE = 0;
  //declare the seats array.
  int seats[NUM_SEATS];

  char done;		// bool to loop program for multiple options

  char emptySeats;
  int seatChoice;
  int optionChoice;
  int i;
    //counter to store taken seats.  
  int counter[NUM_SEATS];     //FIX: possibley wrong arg.


do {
    
  cout << "Welcome to train" << endl;
  cout << "1:  would you like to empty seats" << endl;
  cout << "2: would you like to reserve a particular seat" << endl;
  cout << "3: reserve seat farthest from the front" << endl;
  cout << "4: reserve seat farthest from the back" << endl;
  cout << "5: cancel a reservation" << endl;
  cout << "6: Check status of seats on the train" << endl;
  cout << "7: check if seat is empty " << endl;
  cout << "8: check if seats are full" << endl;
  cin >> optionChoice;


// initialize all counter elements to zero. 
    for ( i = 0; i < NUM_SEATS; i++){
    counter[i] = 0;
}

  switch (optionChoice)
    {

    case 1:
      cout << "Would you like to empy all seats? " << endl;
      cin >> emptySeats;

      if (emptySeats == 'y')
	{
	  cout << "Seats will be made empty" << endl;
	  
	  //NUM_SEATS may be better option?
	}
      break;
    case 2:
      //option to reserve particular seat
      cout << "where would you like to sit" << endl;
      cin >> seatChoice;

      if (seatChoice < NUM_SEATS && seatChoice >= 0)
	{

	  if (seats[seatChoice] == SEAT_FREE)
	    {
	      //Reserve the seat
	      seatChoice = SEAT_TAKEN;	            // This will overwrite the seat number they chose

	      seats[seatChoice] = SEAT_TAKEN;	   // This will choose the correct seat in the array
	      
	      if (seats[seatChoice] == SEAT_TAKEN) {
	          
	       counter;
	      }                                 //add reserved seat to counter. 
	    }
	  else
	    {

	      cout << "Seat has already been reserved." << endl;
	    }
	}

      break;
    case 3:
    //counts up from 0- 19, doesn't account for input. doesn't print just 19. 
    for ( i = 0; i < NUM_SEATS ; ++i) {
        cout << i << endl;
    }
      break;

    case 4:
    // loop to check for seats farthest from the back (19).
	 for (i = NUM_SEATS - 1; i >= 0; --i) {
	     cout << i << endl;
        //FIX: doesn't account for user inputed values, counts down all values from 19-0 instead of just 0.
	     }
	 
  //}
      break;

    case 5:

      break;

    case 6:
      // checking if the seats are reserved & taken
      if (seats[seatChoice] != SEAT_FREE )
	{
	  cout << seats[seatChoice] << endl;
	}
      else
	{
	  cout << "seats not taken" << endl;
	}

      break;
    case 7:

      break;
        
    }
    // prompting for using to go through options again.
    cout << "Would you like to go again." << endl;
    cout <<  "('y' for yes & 'n' for no)" << endl;
    cin >> done;

}
    // while - do; to loop program ; checking input for yes/no 'play' again.
    while ( done == 'y');
   

     if ( done != 'y')  
     cout << "Goodbye" << endl;




  return 0;
}
