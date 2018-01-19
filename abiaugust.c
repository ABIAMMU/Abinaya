#include <stdio.h>
#include<conio.h>
void main()
{
    int b, e;
    long long power = 1;
    int i;
    printf("Enter base:");
    scanf("%d", &b);
    printf("Enter exponent: ");
    scanf("%d",&e);
    for(i=1; i<=exponent; i++)
    {
        power = power * base;
    }

    printf("%d ^ %d = %lld", base, exponent, power);
}
