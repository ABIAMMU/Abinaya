#include <stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s[50];
	int i,n;
	clrscr();
	printf("\nenter the alphanumeric string");
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			printf("%c",s[i]);
		}
	}
	getch();
	return 0;
}
