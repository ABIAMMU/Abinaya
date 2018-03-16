#include<stdio.h>
#include<conio.h>
int main()
{
    int str[100];
    int n;
    printf("enter the string\n");
    scanf("%s",str);
    n=strlen(str);
    strrev(str);
    printf("the reverse string is %d",str);
    getch();
    return 0;
}
