#include<stdio.h>
#include<string.h>
int main()
{
	char m[50],n[50],i,j;
	scanf("%s",&m);
	scanf("%s",&n);
	for(i=0;m[i]!='\0';++i)
	{
		for(i=0;n[j]!='\0';++j,++i)
		{
			m[i]=n[j];
		}
		m[i]='\0';
	}
	printf("%s",m);
  return 0;
  getch();
}
