#include <stdio.h>
int main()
{
	int fib1=0,fib2=1,fib3,num,count=0;
	printf("enter the values");
	scanf("first %d fibonocci numbers are \n",num);
	printf("%d",fib1);
	printf("%d",fib2);
	count =2;
	while(count<num)
	{
		fib3=fib1+fib2;
		count++;
		printf("%d",fib3);
		fib1=fib2;
		fib2=fib3;
	}
  return 0;
}
