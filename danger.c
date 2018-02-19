#include<stdio.h>
int main()
{
   int n,rem=0,sum=0,count=0,i;
   scanf("%d",&n);
   while(n!='\0')
   {
       rem=n%10;
       
       sum=(sum*10)+rem;
       n=n/10;
}
n=sum;

while(n!='\0')
{
    rem=n%10;
    printf("%d ",rem);
    n=n/10;
}
return 0;
}
