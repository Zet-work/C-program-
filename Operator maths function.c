#include <stdio.h>
int main ()
{
int a=87,b=30,c;
c=a+b;
printf("Addition of a+b=%d\n",c);
c=a-b;
printf("Subraction of a-b=%d\n",c);
c=a*b;
printf("Multipication of a*b=%d\n",c);
c=a/b;
printf("Divisioin of a/b=%d\n",c);
c=a%b;
printf("Reminder of a%b=%d\n",c);
c=++a;
printf("Interment of ++a=%d\n",c);
c=--a;
printf("Derterment of --a=%d\n",c);
return 0;
}