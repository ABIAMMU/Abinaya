#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    clrscr();
    printf("enter the number\n");
    scanf("%d",&n);
    if(n%13==0)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    getch();
    return 0;
    
}
