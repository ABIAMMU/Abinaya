#include <stdio.h>
#include<conio.h>
 int main() 
{
	int a,b,c,mod;
  clrscr();
  printf("enter the numbers\n");
	scanf("%d %d %d",&a,&b,&c);
	mod=((a*b)%c);
	printf("%d\n",mod);
  getch();
	return 0;
}
