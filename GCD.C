#include <stdio.h>
#include<conio.h>
int main() 
{
int a,b,r,gcd;
clrscr(0;
printf("\n enter the first number:");
scanf("%d",&a);
printf("\n enter the second number:");
scanf("%d",&b);
do
{
r=a%b;
if(r==0)
break;
a=b;
b=r;
}
while(r!=0);
gcd=b;
printf("\n the gcd of the given number is: %d",gcd);
getch();
return 0;
}
