#include <stdio.h>
#include <conio.h>
int main()
{
  int num1,num2,num3,sum;
  clrscr();
  printf ("enter any 3 number");
  scanf ("%d %d %d",&num1,&num2,&num3);
  sum=num1+num2+num3;
  printf ("%d+%d+%d=%d",num1,num2,num3,sum);
  return 0;
}
