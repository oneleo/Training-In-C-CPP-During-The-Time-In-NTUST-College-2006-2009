#include<iostream>
#include<iomanip>
#define max 20

//Using directive.
using namespace std;

/****************************************/
/****Original insert sorting function****/
/****************************************/
/*
void insertionSort(int array[],int length)
{
  int insert;
  int i; 
  int moveItem; 
  for(i=1 ; i<length ; i++)
  {
    moveItem=i; 
    insert=array[i];
    while(moveItem>0 && array[moveItem-1]>insert)
    {
      array[moveItem]=array[moveItem-1];
      --moveItem; 
    }
  array[moveItem]=insert;
  } 
}
*/

//Declare a template funtion called anytype, and anytype can include data type of "numeric".
template<class anytype>

/****************************************/
/*********Modified insert sorting********/
/****************************************/
void insertionSort(anytype array[],int length)
{
  anytype insert;
  int i;
  int moveItem; 
  for(i=1 ; i<length ; i++)
  {
    moveItem=i; 
    insert=array[i];
    while(moveItem>0 && array[moveItem-1]>insert)
    {
      array[moveItem]=array[moveItem-1];
      --moveItem; 
    }
    array[moveItem]=insert;
  } 
}

/****************************************/
/**************Main function*************/
/****************************************/
int main()
{
  cout << endl << "---------------¡íThis program is-¡¹-B9502028-¡¹-³¯·qµ¾-create¡í---------------" << endl << endl;
//Create an integer array and declare a loop variable of control i.
  int intarray[max],i;
//Creat a float array.
  float floatarray[max];
//Srand randomized with time.
  srand((unsigned)time(NULL));
//Generate random data for integer and float array.
  for(i = 0 ; i < max ; i++)
  {
//Generate integer random data for integer array.
    intarray[i] = rand()%max;
//Generate float random data for float array.
    floatarray[i] = (float) (rand()%max) / ((rand()%max) + 1);
  }
  cout << "--------------------Before insert sorting--------------------" << endl << endl << "Integer array:" << endl;
//Print out integer array data before insert sorting.
  for(i = 0 ; i < max ; i++)
  {
    if(i % 20 == 0)
    {
      cout << endl;
    }
    cout << setw(3) << intarray[i];
  }
  cout << endl << endl << "Float array:" << endl;
//Print out float array data before insert sorting.
  for(i = 0 ; i < max ; i++)
  {
    if(i % 7 == 0)
    {
      cout << endl;
    }
    cout << setw(10) << floatarray[i];
  }
//Start to integer array insert sorting by function template.
  insertionSort (intarray , max);
//Start to float array insert sorting by function template.
  insertionSort (floatarray , max);
  cout << endl << "\n--------------------After insort sorting--------------------\n" << endl << "Integer array:" << endl;
//Print out integer array after insert sorting.
  for(i = 0 ; i < max ; i++)
  {
    if(i % 20 == 0)
    {
      cout << endl;
    }
    cout << setw(3) << intarray[i];
  }
  cout << endl << endl << "Float array:" << endl;
//Print out float array after insert sorting.
  for(i = 0 ; i < max ; i++)
  {
    if(i % 7 == 0)
    {
      cout << endl;
    }
    cout << setw(10) << floatarray[i];
  }
  getchar();
  return 0;
}
