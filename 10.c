#include<stdio.h>
int main()
{
  int a;
  printf("enter the number");
  scanf("%d",&a);
  if(a%7==0)
  {
    printf("the number is multiple of seven");
  }
  else
  {
    printf("the number is not  multiple of seven");
  }
  return 0;
}
