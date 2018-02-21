#include <stdio.h>
#include<conio.h>
void swap(int *x,int *y);
void main()
{
    int a=5,b=3;
    clrscr();
    swap(&a,&b);
    printf("%d%d",a,b);
    getch();
    
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("%d%d",*x,*y);
}
