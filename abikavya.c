#include <stdio.h>
#include<conio.h>
void main()
{
   int n, reverse_num=0, r,t;
   printf("Enter an integer:");
   scanf("%d", &n);
   t=n;
   while(t!=0)
   {
      r=t%10;
      reverse_num=reverse_num*10+r;
      t/=10;
      }
      }
