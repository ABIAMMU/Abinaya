#include<stdio.h>
#include<conio.h>
int main()
{
    int c,k;
    printf("enter the temperature in celcius\n");
    scanf("%d",&c);
    k=c+273;
    printf("the temperature in kelvin is %d\n",k);
    getch();
    return 0;
}
