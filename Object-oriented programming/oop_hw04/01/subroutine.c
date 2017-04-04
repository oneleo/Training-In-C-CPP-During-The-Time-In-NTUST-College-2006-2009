void find_value(int* number)
{
  short i,j,temp;    /*"i" and "j" are used when loop, and "Temp" is used when two variable change.*/
  for(i=0;i<2;i++)
  {
    for(j=i+1;j<=2;j++)
    {
      if(*(number+i)>*(number+j))
      {
        temp=*(number+i);
        *(number+i)=*(number+j);
        *(number+j)=temp;
      }
    }
  }
}
