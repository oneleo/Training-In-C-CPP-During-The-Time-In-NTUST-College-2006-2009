#include<iostream>

//Using directive.
using std::cin;
using std::cout;
using std::endl;

/****************************************/
/**************Main function*************/
/****************************************/
int main()
{
  cout << endl << "---------------¡íThis program is-¡¹-B9502028-¡¹-³¯·qµ¾-create¡í---------------" << endl << endl;
//Declare an integer type variable "intnumber".
  int intnumber;
//Declare a double type variable "doublenumber".
  double doublenumber;
  cout << "Please enter an integer type number : ";
  cin >> intnumber;
  cout << "Please enter a double type number : ";
  cin >> doublenumber;
  cout << endl;
//Try block contains code that might throw exception,
//and code that should not execute if an exception occurs.
  try
  {
    throw(( (intnumber > doublenumber)? intnumber : doublenumber));
//If it do not generat a excution, print out "They are equal!". 
    cout << "They are equal!";
  }
//Exception handler handles a "get integer type" exception.
  catch(int bignumber)
  {
    cout << "\"Interger\" type big number is : " << bignumber;
  }
//Exception handler handles a "get double type" exception.
  catch(double bignumber)
  {
    cout << "\"Double\" type big number is : " << bignumber;
  }
  getchar();
  getchar();
  return 0;
}
