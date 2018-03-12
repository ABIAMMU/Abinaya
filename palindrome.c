#include <stdio.h>
#include<conio.h>
#include<string.h>
int main() 
{
	char s[50],t[10];
	int i,j,n,k;
  clrscr();
	printf("enter the string:");
	scanf("%s",s);
	n=strlen(s);
	while(i<j)
	{
		for(i=0;i<n;i++)
		{
			for(j=n;j>=1;j--)
			{
				t[k]=s[i];
				s[i]=s[j];
				s[j]=s[i];
			}
		}
	}
	printf("\nyes");
  getch();
	return 0;
}
