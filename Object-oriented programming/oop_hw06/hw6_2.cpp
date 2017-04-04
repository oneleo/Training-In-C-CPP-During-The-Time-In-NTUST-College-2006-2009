#include<iostream>
#include <conio.h>
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
//Declare three virtual function.
//This credit member function can save money to balance here.
    virtual void credit(double);
//This debit member function can get money from balance here.
    virtual short debit(double);
//This get_balance member function can return magnitude of balance.
    virtual double get_balance();
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
//Get_balance of account member function.
double account::get_balance()
{
  return balance; //Return magnitude of balance.
}
/*------------------------------------------*/
/*----------Class saving_account_1----------*/
/*------------------------------------------*/
//Use virtual inherit.
class saving_account_1:virtual public account
{
//Private member of account.
  private:
//Data member of type double indicating the interest rate.
    double interest_rate;
//Public member function of account.
  public:
//Initial class member function, let magnitude of interest rate is 0.
    saving_account_1();
//This member function can change interest rate here.
    void change_interest_rate(double);
//This member function can print out interest rate here.
    void print_interest_rate();
//This member function can calculate interest and add to balance of account class.
    double calculate_interest();
};
//Initial saving account class member function.
saving_account_1::saving_account_1()
{
  interest_rate = 0; //Magnitude is 0.
}
//Change interest rate member function.
void saving_account_1::change_interest_rate(double rate)
{
  interest_rate = rate; //Change interest rate.
}
//Print interest ratemember function.
void saving_account_1::print_interest_rate()
{
  cout << "Now interest rate is " << interest_rate << " ¡Á"; //Print out interest rate.
}
//Calculate interest member function.
double saving_account_1::calculate_interest()
{
  double interest; //Interest register.
  interest = (get_balance()) * interest_rate / 100; //Calculate now interest,
  credit(interest); //and add to balance of account class.
  return interest; //Final, return interest.
}
/*------------------------------------------*/
/*----------Class saving_account_2----------*/
/*------------------------------------------*/
//Use virtual inherit.
class saving_account_2:virtual public account
{
//Private member of account.
  private:
//Data member of type double indicating the interest rate.
    double interest_rate;
//Public member function of account.
  public:
//Initial class member function, let magnitude of interest rate is 0.
    saving_account_2();
//This member function can change interest rate here.
    void change_interest_rate(double);
//This member function can print out interest rate here.
    void print_interest_rate();
//This member function can calculate interest and add to balance of account class.
    double calculate_interest();
};
//Initial saving account class member function.
saving_account_2::saving_account_2()
{
  interest_rate = 0; //Magnitude is 0.
}
//Change interest rate member function.
void saving_account_2::change_interest_rate(double rate)
{
  interest_rate = rate; //Change interest rate.
}
//Print interest ratemember function.
void saving_account_2::print_interest_rate()
{
  cout << "Now interest rate is " << interest_rate << " ¡Á"; //Print out interest rate.
}
//Calculate interest member function.
double saving_account_2::calculate_interest()
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
  cout << "\n---------------¡íThis program is-¡¹-B9502028-¡¹-³¯·qµ¾-create¡í---------------\n\n";
//Declare two person account.
  saving_account_1 person_1;
  saving_account_2 person_2;
//Declare two father class pointers to assign.
  account *person[2]={&person_1, &person_2};
//Key register.
  char key;
//Which ones account pointer.
  short who;
//Money or interest or interest rate register.
  double number_register;
  cout << "First you want to operate which ones account¡H" << endl
       << "¡]1¡^Person one.¡]2¡^Person two." << endl;
//Get the key from keyboard, to determine which person first.
  do
  {
    key = getch();
  }
  while((key != '1') && (key != '2'));
  if(key == '1')
  {
    who = 0;
  }
  else
  {
    who = 1;
  }
  cout << "\n--------------------" << ((who == 0) ? "Person one account" : "Person two account") << "--------------------";
//Infinite loop.
  while(1)
  {
    cout << "\nUsers operate¡G"  << endl
         << "¡]1¡^Save money."
         << "¡]2¡^Get money."
         << "¡]3¡^Amount of balance." << endl
         << "Bank operates¡G" << endl
         << "¡]4¡^Settle account in interest rate."
         << "¡]5¡^Alter the interest rate." << endl
         << "Else operates¡G" << endl
         << "¡]6¡^Change user.¡]7¡^Exit system." << endl
         << "--------------------" << endl
         << "You want to... ";
//Get the key from keyboard, to select mode.
    do
    {
      key = getch();
    }
    while((key != '1') && (key != '2') && (key != '3') && (key != '4') && (key != '5') && (key != '6') && (key != '7'));
    switch(key)
    {
//Mode one, save money.
      case '1':
        cout << "save money¡I\nHow much¡H¡÷¢C";
        cin >> number_register;
        if(who==0)
        {
          person[who]->credit(number_register);
        }
        else
        {
          person[who]->credit(number_register);
        }
        cout << "You already save ¢C" << number_register << "¡Â to your account¡I";
        break;
//Mode two, get money.
      case '2':
        cout << "get money¡I\nHow much¡H¡÷¢C";
        cin >> number_register;
        if(who==0)
        {
          if(person[who]->debit(number_register))
          {
          cout << "You already get ¢C" << number_register << "¡Â to your account¡I";
          }
        }
        else
        {
          if(person[who]->debit(number_register))
          {
          cout << "You already get ¢C" << number_register << "¡Â to your account¡I";
          }
        }
        break;
//Mode three, print out amount of balance.
      case '3':
        cout << "know amount of balance¡I\n";
        if(who==0)
        {
          number_register = person[who]->get_balance();
        }
        else
        {
          number_register = person[who]->get_balance();
        }
        cout << "¢C" << number_register << "¡Â still left¡I\n";
        if(who==0)
        {
          person_1.print_interest_rate();
        }
        else
        {
          person_2.print_interest_rate();
        }
        break;
//Mode four, settle account in interest rate.
      case '4':
        cout << "settle account in interest rate¡I\n";
        if(who==0)
        {
          person_1.print_interest_rate();
        }
        else
        {
          person_2.print_interest_rate();
        }
        cout << "\nYour account can get ¢C"
             << ((who == 0) ? (person_1.calculate_interest()) : (person_2.calculate_interest()))
             << "¡Â interest¡I";
        break;
//Mode five, alter the interest rate.
      case '5':
        cout << "alter the interest rate¡I\n";
        if(who==0)
        {
          person_1.print_interest_rate();
        }
        else
        {
          person_2.print_interest_rate();
        }
        cout << "\nSir, do you want to change how much interest rate¡H¡÷";
        cin >> number_register;
        if(who==0)
        {
          person_1.change_interest_rate(number_register);
          person_1.print_interest_rate();
        }
        else
        {
          person_2.change_interest_rate(number_register);
          person_2.print_interest_rate();
        }
        break;
//Mode six, Change user.
      case '6':
        cout << "Change user¡I";
        if(who==0)
        {
          who=1;
        }
        else
        {
          who=0;
        }
        break;
//Mode seven, exit this system.
      case '7':
        cout << "\n\nPress the wanton key to exit¡I";
        getch();
        break;
      default:
        cout << "\n\nSystem error¡I";
        getch();
        break;
    }
    if(key=='7')
    {
      break;
    }
    getch();
    cout << "\n\n--------------------" << ((who == 0) ? "Person one account" : "Person two account") << "--------------------";
  }
  return 0;
}
