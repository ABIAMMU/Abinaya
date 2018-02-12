#include<stdio.h>
int main()
{
	int a,b,c,d,e,average;
	printf("enter the numbers:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	average=(a+b+c+d+e)/5;
	printf("the number is %d",average);
	getch();
  return 0;
}
