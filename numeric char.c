#include <stdio.h>
int main()
{
    int count=0;
    int n;
    printf("enter the integers");
    scanf("%d",&n);
    while(n!=0)
    {
        n / = 10;
        ++count;
    }
    printf("number of digits %d",count);
    return 0;
}

