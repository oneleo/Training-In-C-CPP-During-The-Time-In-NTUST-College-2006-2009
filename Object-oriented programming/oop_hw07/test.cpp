#include<iostream>
#define max 10
using std::cout;
using std::endl;
void test(int* array)
{
  int i;
  for(i=0;i<max;i++)
    cout<<"  " << array[i];
}
int main()
{
  int a[max],i;
  for(i=0;i<max;i++)
    a[i]=i;
  test(a);
  getchar();
  return 0;
}
