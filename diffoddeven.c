#include<stdio.h>
int main()
{
int a,n;
scanf("%d%d",&a,&n);
printf("/n%d %d",a,n);
int i=a-n;
printf("\n the difference is %d",i);
if(i%2==0)
{
printf("\neven");
}
else
{
printf("\nodd");
}
return 0;
}
