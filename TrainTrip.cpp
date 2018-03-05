
/********************************************************
 * Created By Jacob Plaisted trainTrip
 * train trip uses arrays and loops, and allows user 
 * choose options, to 'manipulate' reservations, see
 * what is already booked, or has not been booked etc. 
 * ******************************************************/
#include <iostream>

using namespace std;

int main ()
{   //const in for the number of seats.
    const int NUM_SEATS = 20;
    //declaring seats array
    int seatStatus[NUM_SEATS];

    int optionChoice;

    int seatChoice;

    bool flag;                      //Checks the values of seat status. is changed from true or false depending on condition being looked for.
                                    // used as a tester to check conditions.
    do {                                                                    //user options for seating
        cout << "Welcome to train" << endl;
        cout << "1:  would you like to empty seats" << endl;
        cout << "2: would you like to reserve a particular seat" << endl;
        cout << "3: reserve seat farthest from the front" << endl;
        cout << "4: reserve seat farthest from the back" << endl;
        cout << "5: cancel a reservation" << endl;
        cout << "6: Check status of seats on the train" << endl;
        cout << "7: check if seat is full " << endl;
        cout << "8: check if seats are empty" << endl;
        cout << "9: To exit" << endl;
        cin >> optionChoice;


        switch(optionChoice) {              
            case 1:                                                  // loop through seats to and sets status to 0 
                for(int i=0;i<NUM_SEATS;i++){
                    seatStatus[i] = 0;
                }
                cout<<"All Seats Emptied"<<endl;
            break;

            case 2:

                cout << "where would you like to sit" << endl;
                cin >> seatChoice;                                  //checks input for invalid seat options
                if(seatChoice < 0 || seatChoice>=NUM_SEATS) {
                    cout<<"Wrong Number of seats entered"<<endl;
                }
                else if(seatStatus[seatChoice] == 0) {              //checks that seat is vacant if yes, changes status to booked.
                    seatStatus[seatChoice] = 1;
                    cout << "Your seat has been booked" << endl;
                }
                else{
                    cout << "This seat is already booked" << endl;
                }
            break;

            case 3:
                flag = false; 
                for(int i=NUM_SEATS-1;i>=0;i--) {                   // loops to check for the farthest seat from the last seat booked
                    if(seatStatus[i] == 0) {                        //checks that seat is available.
                        cout<<"Seat Booked at " << i << endl;
                        seatStatus[i] = 1;
                        flag = true;
                        break;
                    }
                }
                if(!flag)
                    cout<<"No seat is empty"<<endl;
            break;

            case 4:
                flag = false;                  
                for(int i=0;i<NUM_SEATS;i++) {                      // checks through all seats, to see if the flag stays false. 
                    if(seatStatus[i] == 0) {
                        cout<<"Seat Booked at" << i << endl;
                        seatStatus[i] = 1;
                        flag = true;
                        break;
                    }
                }
                if(!flag)
                    cout<<"No seat is empty"<<endl;
            break;

            case 5:

                cout << "which seat would you like to cancel" << endl;
                cin >> seatChoice;
                if(seatChoice < 0 || seatChoice>=NUM_SEATS) {
                    cout<<"Wrong choice of seat entered"<<endl;
                }
                else if(seatStatus[seatChoice] == 1) {              // condition to cancel reservation
                    seatStatus[seatChoice] = 0;
                    cout << "Your seat has been cancelled" << endl;
                }
                else{
                    cout << "This seat is already vacant" << endl;
                }
            break;

            case 6:
                for(int i=0;i<NUM_SEATS;i++) {                      // loops checking there status. if 0; it's available. if 1 it's booked.
                    if(seatStatus[i]==0) {
                        cout<<"Seat "<<i<<" - Vacant"<<endl;
                    }
                    else{
                        cout<<"Seat "<<i<<" - Booked"<<endl;
                    }
                }
            break;

            case 7:
                flag = true;                                         //checks from index that aall seat status are 0. changes flag to true.
                for(int i=0;i<NUM_SEATS;i++){ 
                    if(seatStatus[i] == 0) {
                        cout<<"Train is not full"<<endl;
                        flag = false;
                        break;
                    }
                }
                if(flag)                    //condition if flag is not changed to false. 
                    cout<<"Train is full"<<endl;
            break;

            case 8:
                flag = true;
                for(int i=0;i<NUM_SEATS;i++){  // checks if all seats status are 1; if they aren't flag is checked to false. "Train is not empty"
                    if(seatStatus[i] == 1) {
                        cout<<"Train is not empty"<<endl;
                        flag = false;
                        break;
                    }
                }
                if(flag)  // if statement checking  that flag is unchanged. if true "the train is empty"
                    cout<<"Train is empty"<<endl;
            break;

            case 9:
            break;

            default: // output for invalid inputs.
                cout<<"Wrong choice"<<endl;
            break;

            cout<<endl;
        }
   }while(optionChoice!=9); // do while loop to loop back through options
}


