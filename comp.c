#include<stdio.h>
int main()
{
  int n,i,f=0;
  clrscr();
  printf("enter the number\n");
  scanf("%d",&n);
  for(i=2;i<=n/2;i++)
  {
     if(n%i==0)
     {
         f=1;
         break;
     }
  }
  if(f==0)
  {
      printf("no\n");
  }
  else
  {
      printf("yes\n");
  }
  getch();
  return 0;
}
