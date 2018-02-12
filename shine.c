#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char s1[50],s2[50];
int a,b,i,j;
clrscr();
scanf("%s %s",&s1,&s2);
i=strlen(s1);
j=strlen(s2);
if(a>b)
{
    printf("%s is greater",s1);
}
else
{
    printf("%s is lesser string",s2);
}
return 0;
getch();
}
