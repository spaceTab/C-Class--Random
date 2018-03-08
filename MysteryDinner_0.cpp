#include <iostream>
#include <vector>
#include <string>


using namespace std;

int main() {
//Constant int for the number of seats. 
const int NUM_SEATS = 50;
// vector ints for seats
vector<int> seatList = {NUM_SEATS};
vector<int> reservedList = {NUM_SEATS};
//unsigned int for i. to error is !positive

unsigned int i;

int userChoice;
int seatChoice;

string inputName;
// bool to test conditions
bool flag;

// printed greeting
cout << "---------------------------------" << endl;
cout << "| Welcome To The Mystery Dinner |" << endl;
cout << "---------------------------------" << endl;
cout << endl;
// prompts user for one of 4 choices
cout << "1: Would you like to add your name to the reservation list?" << endl;
cout << "2: Shall, I check your name for an existing reservation" << endl;
cout << "3: Check the names of existing reservations" << endl;
cout << "4: Check the names currently on the wait list" << endl;
cout << "5: Cancel Options and exit" << endl;


do {
    
  switch(userChoice) {
    case 1:
    cout << "What is your name?"
    getline (cin, stringName);
    
    for (i = 0; i < NUM_SEATS; i++) {
        if (seatList.at(i) > 0 && ReservedList.at(i) < 50)
        
        
        
    }
    
        
        
    break;
    
    case 2:
    
    
    
    break;
    
    
    
    
    
    
    } 
} while (userChoice != 5);


return 0;
}
