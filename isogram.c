#include <stdio.h>
#include<conio.h>
#include<string.h>
int main() 
{
	char s[50];
	int i,flag=0;
  clrscr();
	printf("\nenter the string:");
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==s[i+1])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("\nno");
	}
	else
	{
		printf("\nyes");
	}
  getch();
	return 0;
}
