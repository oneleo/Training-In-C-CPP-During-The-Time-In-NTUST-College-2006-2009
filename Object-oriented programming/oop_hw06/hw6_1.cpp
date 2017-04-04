#include<iostream>
#include <conio.h>
//Using cin, cout and endl directive.
using std::cin;
using std::cout;
using std::endl;
/*---------------------------------*/
/*----------Class account----------*/
/*---------------------------------*/
class account
{
//Private member of account.
  private:
//One data member of type double to represent the account balance.
    double balance;
//Public member function of account.
  public:
//Initial class member function, let magnitude of balance is 0.
    account();
//This member function can save money to balance here.
    void credit(double);
//This member function can get money from balance here.
    short debit(double);
//This member function can return magnitude of balance.
    double get_balance();
};
//Initial account class member function.
account::account()
{
  balance = 0.0; //Magnitude is 0.
}
//Credit of account member function.
void account::credit(double money)
{
  balance = balance + money; //Add to balance.
}
//Debit of account member function.
short account::debit(double money)
{
//Ensure that the debit amount does not exceed the  balance.
  if(balance < money)
  {
    cout << "Debit amount exceeded account balance.";
    return 0; //If does not, return 0.
  }
  else
  {
    balance = balance - money; //If does, balance minus magnitude of money.
    return 1; //If does, return 1.
  }
}
//Get balance of account member function.
double account::get_balance()
{
  return balance; //Return magnitude of balance.
}
/*----------------------------------------*/
/*----------Class saving_account----------*/
/*----------------------------------------*/
class saving_account:public account
{
//Private member of account.
  private:
//Data member of type double indicating the interest rate.
    double interest_rate;
//Public member function of account.
  public:
//Initial class member function, let magnitude of interest rate is 0.
    saving_account();
//This member function can change interest rate here.
    void change_interest_rate(double);
//This member function can print out interest rate here.
    void print_interest_rate();
//This member function can calculate interest and add to balance of account class.
    double calculate_interest();
};
//Initial saving account class member function.
saving_account::saving_account()
{
  interest_rate = 0; //Magnitude is 0.
}
//Change interest rate member function.
void saving_account::change_interest_rate(double rate)
{
  interest_rate = rate; //Change interest rate.
}
//Print interest ratemember function.
void saving_account::print_interest_rate()
{
  cout << "Now interest rate is " << interest_rate << " ¡Á"; //Print out interest rate.
}
//Calculate interest member function.
double saving_account::calculate_interest()
{
  double interest; //Interest register.
  interest = (get_balance()) * interest_rate / 100; //Calculate now interest,
  credit(interest); //and add to balance of account class.
  return interest; //Final, return interest.
}
/*-------------------------------*/
/*---------Main program----------*/
/*-------------------------------*/
int main()
{
  cout << "\n---------------¡íThis program is-¡¹-B9502028-¡¹-³¯·qµ¾-create¡í---------------\n";
//Declare a person account.
  saving_account person;
//Key register.
  char key;
//Money or interest or interest rate register.
  double number_register;
//Infinite loop.
  while(1)
  {
//print out operation instructions.
    cout << "\nUsers operate¡G"  << endl
         << "¡]1¡^Save money."
         << "¡]2¡^Get money."
         << "¡]3¡^Amount of balance." << endl
         << "Bank operates¡G" << endl
         << "¡]4¡^Settle account in interest rate."
         << "¡]5¡^Alter the interest rate." << endl
         << "Else operates¡G" << endl
         << "¡]6¡^Exit system." << endl
         << "--------------------" << endl
         << "You want to... ";
//Get the key from keyboard, to select mode.
    do
    {
      key=getch();
    }
    while((key != '1') && (key != '2') && (key != '3') && (key != '4') && (key != '5') && (key != '6'));
//Mode one, save money.
    if(key == '1')
    {
      cout << "save money¡I\nHow much¡H¡÷¢C";
      cin >> number_register;
      person. credit(number_register);
      cout << "You already save ¢C" << number_register << "¡Â to your account¡I";
    }
//Mode two, get money.
    else if(key == '2')
    {
      cout << "get money¡I\nHow much¡H¡÷¢C";
      cin >> number_register;
      if(person.debit(number_register))
      {
      cout << "You already get ¢C" << number_register << "¡Â to your account¡I";
      }
    }
//Mode three, print out amount of balance.
    else if(key == '3')
    {
      cout << "know amount of balance¡I\n";
      number_register = person.get_balance();
      cout << "¢C" << number_register << "¡Â still left¡I\n";
      person. print_interest_rate();
    }
//Mode four, settle account in interest rate.
    else if(key == '4')
    {
      cout << "settle account in interest rate¡I\n";
      person. print_interest_rate();
      cout << "\nYour account can get ¢C" << person.calculate_interest() << "¡Â interest¡I";
    }
//Mode five, alter the interest rate.
    else if(key == '5')
    {
      cout << "alter the interest rate¡I\n";
      person.print_interest_rate();
      cout << "\nSir, do you want to change how much interest rate¡H¡÷";
      cin >> number_register;
      person. change_interest_rate(number_register);
      person. print_interest_rate();
    }
//Mode six, exit this system.
    else
    {
      cout << "\n\nPress the wanton key to exit¡I";
      getch();
      break;
    }
    getch();
    cout << "\n\n----------------------------------------";
  }
  return 0;
}
