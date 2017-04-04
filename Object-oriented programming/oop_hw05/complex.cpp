#include <cstdlib>
#include <iostream>
//Using cin, cout and endl directive.
using std::cin;
using std::cout;
using std::endl;
//Complex class, that members include realpart and imaginarypart that are private.
class complex
{
  private:
//Complex two members.
    double realpart, imaginarypart;
  public:
//Initial class function, magnitude is 0.
    complex();
//This class function can set the complex data.
    void set_complex( double, double);
//This class function can get the complex data by reference indirectly.
    void get_complex( double&, double&);
//Print out the "a+bi" type complex data.
    void print_complex( void);
//Complex addition operator.
    complex operator+( complex&);
//Complex subtraction operator.
    complex operator-( complex&);
//Complex multiplication operator.
    complex operator*( complex&);
//Complex division operator.
    complex operator/( complex&);
};
//Initial class function.
complex::complex()
{
  realpart= imaginarypart= 0; //Magnitude is 0.
}
//Set the complex data.
void complex::set_complex( double r, double i)
{
  realpart= r; //Set real part.
  imaginarypart= i; //Set imaginary part.
}
//Get the complex data by reference indirectly.
void complex::get_complex( double& r, double& i)
{
  r= realpart;//Get real part. 
  i= imaginarypart;//Get imaginary part. 
}
//Print out the "a+bi" type complex data.
void complex::print_complex( void)
{
  cout<< realpart;
  if( imaginarypart< 0) //If imaginary is negative, need not to print "+".
  {
    cout<< imaginarypart<< 'i'<< endl;
  }
  else //If imaginary is positive, need add to print "+".
  {
    cout<< '+'<< imaginarypart<< 'i'<< endl;
  }
}
//Complex addition operator.
complex complex::operator+( complex& c)
{ //( a+ ib)+( c+ id)=( a+ c)+ i( b+ d)
  complex result; //Create a complex class to save the result.
  result.realpart= realpart+ c.realpart;
  result.imaginarypart= imaginarypart+ c.imaginarypart;
  return result; //Return this result. 
}
//Complex subtraction operator.
complex complex::operator-( complex& c)
{ //( a+ ib)-( c+ id) = ( a- c)+ i( b- d)
  complex result; //Create a complex class to save the result.
  result.realpart= realpart- c.realpart;
  result.imaginarypart= imaginarypart- c.imaginarypart;
  return result; //Return this result. 
}
//Complex multiplication operator.
complex complex::operator*( complex& c)
{ //( a+ ib)*( c+ id)=( a* c- b* d+ i( b* c+ a* d))
  complex result; //Create a complex class to save the result.
  result.realpart= (realpart*c.realpart)- (imaginarypart*c.imaginarypart);
  result.imaginarypart=( realpart* c.imaginarypart)+( imaginarypart* c.realpart);
  return result; //Return this result.
}
//Complex division operator.
complex complex::operator/( complex& c)
{ //( a+ ib)/( c+ id)=(( a* c+ b* d)/ denominator+ i( b* c- a* d)/ denominator ); denominator= c* c+ d* d.
  complex result; //Create a complex class to save the result.
  double denominator; //Declare complex register of denominator.
  denominator= (c.realpart* c.realpart)+( c.imaginarypart* c.imaginarypart); //Save denominator result. 
  if( denominator== 0) //Denominator is invalid. So result will use initial value! 
  {
    cout<< "Can not calculate, because denominator is 0. Rusult will be initial!\n";
  }
  else //Calculate complex division.
  {
    result.realpart= (realpart* c.realpart+ imaginarypart* c.imaginarypart)/ denominator;
    result.imaginarypart= (imaginarypart* c.realpart- realpart* c.imaginarypart)/ denominator;
  }
  return result; //Return this result.
}
//Main program.
int main( void)
{
  cout<< "\n---------------¡íThis program is-¡¹-B9502028-¡¹-³¯·qµ¾-create¡í---------------\n\nThis program can calculate\nthe four fundamental operations of arithmetic of two complexes!\n--------------------\nPlease enter those magnitude of two complexes a and b!\n\n";
  double a_r, a_i, b_r, b_i;
//Declare three complax class,"a" and "b" are two complex, "calculate" is save calculate result.
  complex a, b, calculate;
  cout<< "Real part of a = ";
  cin>> a_r; //Set real part of complex a.
  cout<< "Imaginarypart part of a = ";
  cin>> a_i; //Set imaginary part of complex a.
  cout<< "Real part of b = ";
  cin>> b_r; //Set real part of complex b.
  cout<< "Imaginarypart part of b = ";
  cin>> b_i; //Set imaginary part of complex b.
  a.set_complex( a_r, a_i); //Set complex a. 
  b.set_complex( b_r, b_i); //Set complex b. 
  cout<< "--------------------\nResult of output:\n\nComplex a = ";
  a.print_complex(); //Print complex a. 
  cout<< "Complex b = ";
  b.print_complex(); //Print complex b. 
  cout<< "a + b = ";
  calculate= a+ b; //Complex addition operator and save to "calculate".
  calculate.print_complex(); //Print out the "a+bi" type complex "calculate".
  cout<< "a - b = ";
  calculate= a- b; //Complex subtraction operator and save to "calculate".
  calculate.print_complex(); //Print out the "a+bi" type complex "calculate".
  cout<<"a ¡Ñ b = ";
  calculate= a* b; //Complex multiplication operator and save to "calculate".
  calculate.print_complex(); //Print out the "a+bi" type complex "calculate".
  cout<<"a ¡Ò b = ";
  calculate= a/ b; //Complex division operator and save to "calculate".
  calculate.print_complex(); //Print out the "a+bi" type complex "calculate".
  getchar();
  getchar();
  return 0;
}
