#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>

int main()
{
  int delay; 
  double sum; 
  float x,dx=0.001;
  printf("\n---------------��|�q�l�@��-��-B9502028-��-���q���q�P���p�Сr�s��---------------\n���{���ϥα�Ϊk�D�X�@��(4-x^2)�A0��x��2�@�����n�q�������k�r�I\n\n�����N��}�l�p��I\n\n");
  getch();
  for(x=0.;x<2-dx;x=x+dx)
  {
    sum=sum+(sqrt(4-(x+dx)*(x+dx))+sqrt(4-x*x))*dx/2;
  for(delay=0;delay<750000;delay++)
  {
    ; 
  }
    printf("\r%.14f",sum);
  }   
  printf("\n\n�p�⧹����I�ұo�쪺�Ȭ��G%f\n\n",sum);
  system("PAUSE");
  return 0;
}
