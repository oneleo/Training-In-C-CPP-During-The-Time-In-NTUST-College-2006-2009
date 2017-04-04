#include<iostream>
#include<iomanip>
//Using directive.
using namespace std;
char mon[12][10]={{"January"},{"February"},{"March"},{"April"},{"May"},{"June"},{"July"},{"August"},{"September"},{"October"},{"November"},{"December"}};
char mon_con[12][10]={{"jan"},{"feb"},{"mar"},{"apr"},{"may"},{"jun"},{"jul"},{"aug"},{"sep"},{"oct"},{"nov"},{"dec"}};
//Calculate days of that month.
int monthday(int month,int year)
{
//Because amounts to 31 days in August of July, it is a piece of intersection there.
  if(month<=7)
  {
//If bissextile, amounts to 29 days in February.
    if((month==2)&&((year%4)==0))
    {
      return 29;
    }
//If common, amounts to 28 days in February.
    else if((month==2)&&((year%4)!= 0))
    {
      return 28;
    }
//Amounts to 31 days in January, March, May and July.
    else if((month%2==1)&&(month!=2))
    {
      return 31;
    }
//Amounts to 30 days in April and June.
    else
    {
      return 30;
    }
  }
  else
  {
//Amounts to 31 days in August, October and December.
    if(month%2==0)
    {
      return 31;
    }
//Amounts to 30 days in September and November.
    else
	{
	  return 30;
	}
  }
}
//Date class, that members include day, month and year that are private.
class date
{
  private:
//Date three members.
    int day,month,year;
  public:
//Initial class function, magnitude is 1.
    date();
//Overloading 1, this class function can set DDD YYYY.
    void set_date(int,int);
//Overloading 2, this class function can set MM/DD/YYYY.
    void set_date(short,int,int);
//Overloading 3, this class function can set such as May 16, 2007.
    void set_date(char[],int,int);
//Print out the three type date data.
    void print_date();
//Get the date data by reference indirectly.
    void get_date(int&,int&,int&);
};
//Initial class function.
date::date()
{
  day=month=year=1; //magnitude is 1.
}
//Overloading 1, this class function can set DDD YYYY.
void date::set_date(int d,int y)
{
//There are 365 days in common year, there are 366 days in bissextile, and day and month must more than 1.
  if(((d>365)&&(y%4!=0))||((d>366)&&(y%4==0))||(d<1)||(y<1))
  {
    cout<<"Date is invalid! Initial this data!"<<endl;
    return; //Date is invalid, so function end.
  }
  int m=1; //Before function beginning, it is one to set up the month to count.
  while((d-monthday(m,y))>0) //Calculate which month and how many days?
  {
    d=d-monthday(m,y); //Call calculate days of that month function reduce for day.
    m++; //Enough reduce for day, next month.
  }
  day=d; //Set finish!
  month=m;
  year=y;
}
//Overloading 2, this class function can set MM/DD/YYYY.
void date::set_date(short m,int d,int y)
{
//Determine whether day invalid, and day and month must more than 1.
  if((d>monthday(m,y))||(d<1)||(m<1)||(m>12)||(y<1))
  {
    cout<<"Date is invalid! Initial this data!"<<endl;
    return; //Date is invalid, so function end.
  }
  day=d; //Set finish!
  month=m;
  year=y;
}
//Overloading 3, this class function can set such as May 16, 2007.
void date::set_date(char mon_in[],int d,int y)
{
  if((d<1)||(y<1)) //Day and month must more than 1. 
  {
    cout<<"Date is invalid! Initial this data!"<<endl;
    return;//Date is invalid, so function end.
  }
  int i=0,m=0; //Creat two variable, i is loop control, m is month register.
  while(mon_in[i]!='\0') //English is capitalized and changed into small letter, small letter is not changed.
  {
    if((mon_in[i]>='A')&&(mon_in[i]<='Z'))
    {
      mon_in[i]=mon_in[i]+32;
    }
    i++;
  }
  for(i=0;i<12;i++)
  {
    if(strcmp(mon_in,mon_con[i])==0) //Compare you enter string. If equal, return 0. Represent this month.
    {
      m=i+1; //Record this month.
    }
  }
  if((m==0)||(d>monthday(m,y))) //Month can not get, represent you enter invalid value. And Determine whether day is invalid.
  {
    cout<<"Date is invalid! Initial this data!"<<endl;
    return; //Date is invalid, so function end.
  }
  day=d; //Set finish!
  month=m;
  year=y;
}
//Print out the three type date data.
void date::print_date()
{
  int d=day,i;
  for(i=1;i<month;i++) //Use known day data calculate which days in one year. For print third type.
  {
    d=d+monthday(i,year);
  } //Print three type. And function "setfill('0')" determine use '0' fill space. Function "setw(2)" use two spaces.
  cout << setfill('0') << setw(3) << d << " " << setw(4) << year << endl
       << setw(2) << month << '/' << setw(2) << day << '/' << setw(2) << year << endl
       << mon[month-1] << " " << setw(2) << day << ", " << setw(4) << year << endl;
}
void date::get_date(int& d,int& m,int& y) //Get the date data by reference indirectly.
{
  d=day;
  m=month;
  y=year;
}
//Main program.
int main(void)
{
  cout<<"\n---------------¡íThis program is-¡¹-B9502028-¡¹-³¯·qµ¾-create¡í---------------\n\nThis program can output the date in multiple formats such as:\n(1)DDD YYYY\n(2)MM/DD/YYYY\n(3)May 16, 2007\n\nand can compare two dates you input!\nFirst, please choose the input way reference following,\nthen input two dates, use the space key to divide data of date!\n--------------------\nInput way:\n(1)DDD YYYY\n(2)MM/DD/YYYY\n(3)May 16, 2007\nChoose one:";
  date date_one,date_two; //Declare two date class.
  short cho=0;
  int m,d,y;
  char m_con[4];
  while((cho<1)||(cho>3)) //Choose enter type, if you enter invalid data, must be retry.
  {
    cin>>cho;
    if((cho<1)||(cho>3))
    {
      cout<<"Date is invalid! Try again!\nchoose one:";
    }
  }
  cout<<"--------------------\nMode"<<cho<<"!\nPlease enter first date data:";
  if(cho==1) //Overload 1, and set two date data.
  {
    cin>>d>>y;
    date_one.set_date(d,y);
    cout<<"Please enter second date data:";
    cin>>d>>y;
    date_two.set_date(d,y);
  }
  else if(cho==2) //Overload 2, and set two date data.
  {
    cin>>m>>d>>y;
    date_one.set_date(m,d,y);
    cout<<"Please enter second date data:";
    cin>>m>>d>>y;
    date_two.set_date(m,d,y);
  }
  else if(cho==3) //Overload 3, and set two date data.
  {
    cin>>m_con>>d>>y;
    date_one.set_date(m_con,d,y);
    cout<<"Please enter second date data:";
    cin>>m_con>>d>>y;
    date_two.set_date(m_con,d,y);
  }
  cout<<"--------------------\nResult of utput:\n\nDate one:\n";
  date_one.print_date(); //Print out date one.
  cout<<"\nDate two:\n";
  date_two.print_date(); //Print out date two.
  int d1,m1,y1,d2,m2,y2; //Star to compare these two date size. First create six variable to save these two date data.
  date_one.get_date(d1,m1,y1); //Save first date.
  date_two.get_date(d2,m2,y2); //Save second date.
  if(y1<y2) //Comepare year, month and year.
  {
    cout<<"\nFirst date is prior!";
  }
  else if(y1==y2)
  {
    if(m1<m2)
    {
      cout<<"\nFirst date is prior!";
    }
    else if(m1==m2)
    {
      if(d1<d2)
      {
        cout<<"\nFirst date is prior!";
      }
      else if(d1==d2)
      {
        cout<<"\nFirst and second date are same!";
      }
      else if(d1>d2)
      {
        cout<<"\nSecond date is prior!";
      }
    }
    else if(m1>m2)
    {
      cout<<"\nSecond date is prior!";
    }
  }
  else if(y1>y2)
  {
    cout<<"\nSecond date is prior!";
  }
  getchar();
  getchar();
  return 0;
}
