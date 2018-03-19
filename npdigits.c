#include <stdio.h>
#include<Conio.h>
 int main() 
{
	int n,r,p=1;
  clrscr();
  printf("enter the number\n");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		p=p*r;
		n=n/10;
	}
	printf("\n%d",p);
  getch();
	return 0;
}
