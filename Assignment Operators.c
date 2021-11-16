#include <stdio.h>
int main()
{
int a=7,b=11;
printf("%d==%d is %d\n",a,b,a==b);
printf("%d<%d is %d\n",a,b,a<b);
printf("%d>%d is %d\n",a,b,a>b);
printf("%d!=%d is %d\n",b,a,b!=a);
printf("%d<=%d is %d\n",a,b,a<=b);
printf("%d>=%d is %d\n",b,a,b>=a);
return 0;
}