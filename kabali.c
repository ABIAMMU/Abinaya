#include<stdio.h>
int main()
{
    int n1,n2,a,b,i;
    printf("enter the two numbers\n");
    scanf("%d%d",&n1,&n2);
    if(n1>n2)
    {
        a=n1-n2;
        printf("%d",a);
    }
    else
    {
        b=n2-n1;
        printf("%d",b);
    }
    return 0;
}
