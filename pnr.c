#include<stdio.h>
#include<conio.h>
int main()
{
    float p,t;
    int n,result,si;
    printf("enter the elements");
    scanf("%f%d%f",&p,&n,&t);
    result=((p*n*t)/100);
    si=floor(result);
    printf("the value is %f",si);
    getch();
    return 0;
    }
