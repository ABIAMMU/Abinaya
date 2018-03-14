#include <stdio.h>
#include<conio.h>
int main() 
{
int a,b,r,lcm,gcd,i,j;
clrscr();
printf("\n enter the first number:");
scanf("%d",&a);
printf("\n enter the second number:");
scanf("%d",&b);
i=a;
j=b;
do
{
r=a%b;
if(r==0)
break;
i=j;
j=r;
}
while(r!=0);
gcd=b;
lcm=(i*j)/gcd;
printf("\n the lcm of the given number is: %d",lcm);
getch();
return 0;
}
