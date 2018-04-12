/*
**Credit-Card Information Program. Using Classes
**By Jacob Plaisted
*/

#include <iostream>

using namespace std;

class Customer {

private:        //data members
	int accountNo;
	double creditLimit;
	double balance;

public:
    //Constructor
  	Customer() {			//default Constructor
      accountNo = -1;
      creditLimit = 0.00;
      balance = 0.00;
    }
  	//Paratmetrized Constructor
  	Customer(int a, double c, double b) {
      accountNo = a;
      creditLimit = c;
      balance = b;
    }

	void setAcct(int aNo) {
      accountNo = aNo;              //sets aNo to data member accountNo.
    }

  	void setCredit(double amount) {
      balance = amount;           //sets balance to amount.
    }
	int getAccNo() const{
      return accountNo;
    }
    double getCreditLimit() const{
  	  return creditLimit;
    }
  	double getBall() const{
      return balance;
    }
	double availCredit() const{
    	return balance + creditLimit;   //returns balance + credit limit
    }
  	void moreCredit(double amnt){
      	if(balance < 0)          //returns if balance is lower than 0.
          return;
    	creditLimit += amnt;   //adds amount to credit limit.
  	}
  	bool makePurchase(double amnt){
    	if(balance < 0 || amnt > creditLimit)
          return false;
    	if(creditLimit > amnt) {       //Checks that credit limit is > than amnt
          balance = balance - amnt;   //Removes amount from balance.
          return true;
        }

    }
    void makePayment(double amnt){
      	if(balance < 0)
          return;
  		balance = balance - amnt; //removes amount by balance.
   	}
    void display() const{
      //displays user-account infomation
      cout << "The account number is: " << accountNo << "\n";
      cout << "Your balance is: " << balance << "\n";
      cout << "Your credit limit is: " << creditLimit << "\n";
    }

};
int main() {

  int nMonths, totPurchase, totPayments;

  Customer jake(1234,100,500);
  //3 cout statements
  cout<<"Account No."<<jake.getAccNo()<< " \n";

  cin >> nMonths;
  //while loop for test condition. Number of months, input information per month.
  while(nMonths--) {
    cin >> totPurchase;
    jake.makePurchase(totPurchase);

    cin>>totPayments;
    jake.makePayment(totPayments);

    int bal = jake.getBall();

    jake.display();         //displays credit-info after inputs.

  }

 return 0;
}
