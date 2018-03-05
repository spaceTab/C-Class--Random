//Train reservation code file.

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
// Declare the seats array:
  //int seats[NUM_SEATS];
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



  switch (optionChoice)
    {

    case 1:
      cout << "Would you like to empy all seats? " << endl;
      cin >> emptySeats;

      if (emptySeats == 'y')
	{
	  cout << "Seats will be made empty" << endl;
	  SEAT_TAKEN = SEAT_TAKEN - 1;
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
	      seatChoice = SEAT_TAKEN;	// This will overwrite the seat number they chose

	      seats[seatChoice] = SEAT_TAKEN;	// This will choose the correct seat in the array
	    }
	  else
	    {

	      cout << "Seat has already been reserved." << endl;
	    }
	}

      break;
    case 3:

      break;

    case 4:

      break;

    case 5:

      break;

    case 6:
      // checking if the seats are reserved & taken
      if (seats[SEAT_TAKEN] > 0)
	{
	  cout << SEAT_TAKEN << endl;
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

    while ( done == 'y');
   

     if ( done != 'y')  
     cout << " GoodBye" << endl;




  return 0;
}
