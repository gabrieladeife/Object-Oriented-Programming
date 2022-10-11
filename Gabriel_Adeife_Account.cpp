#include <iostream>

//creating new class named Account.
class Account{
public:
  int id;
  double balance;
  double annualInterestRate;


//no arg constructor to default the variables.
Account(){
  id = 0;
  balance = 0.0;
  annualInterestRate = 0.0;

}

//setting the class variables to the input values.
Account(int newId, double newBalance, double newAnnualInterestRate){
id = newId;
balance = newBalance;
annualInterestRate = newAnnualInterestRate;
}

//class functions
double getMonthlyInterestRate(){
  return annualInterestRate / 12;
}

void withdraw(double amount){
 balance = balance - amount;
}

void deposit(double amount){
  balance = balance + amount;
}
};


int main() {
  //declaring new account, account1.
  Account account1(1122,20000.0,(4.5));

//using class functions.
  account1.withdraw(2500);
  account1.deposit(3000);

//printing results.
  std::cout << "The balance for the account is "<< account1.balance << std::endl << "The monthly interest rate is " << account1.getMonthlyInterestRate();
}