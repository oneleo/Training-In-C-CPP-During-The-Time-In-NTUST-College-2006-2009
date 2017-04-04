#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>

int main()
{
  int delay; 
  double sum; 
  float x,dx=0.001;
  printf("\n---------------∮四電子一甲-★-B9502028-★-陳敬翔〈星晴小羽〉製∮---------------\n本程式使用梯形法求出　√(4-x^2)，0≦x≦2　的面積〈略近似於π〉！\n\n按任意鍵開始計算！\n\n");
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
  printf("\n\n計算完畢～！所得到的值為：%f\n\n",sum);
  system("PAUSE");
  return 0;
}
