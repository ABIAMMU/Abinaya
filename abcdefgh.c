#include <stdio.h>
int main()
{
    int n,r,count=0;
    printf("enter any number");
    scanf("%d",&n);
    while(n>0)
    {
        n=n/10;
        count=count++;
    }
    printf("number of digits in a given number",count);
    return 0;
    }
}
