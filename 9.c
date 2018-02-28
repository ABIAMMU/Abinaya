#include<stdio.h>
int main()
{
int a,b=0,x=1,p=2,i;
printf("\nEnetr the number:");
scanf("%d",&a);
while(a!=1)
{
a=a/2;
b++;
}
for(i=0;i<b+1;i++)
{
x=x*p;
}
printf("The nearest greater power of 2 is:%d",x);
return 0;
}
