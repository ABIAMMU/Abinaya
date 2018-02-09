#include <stdio.h>

int main()
{
    int n,t,flag;
    printf("enter an integer");
    scanf("%d",&n);
    t=n;
    flag=0;
    while(t!=1);
    {
        if(t%2!=1)
        {
            flag=1;
            break;
        }
        t=t/2;
    }
    if(flag==0)
    printf("%d is a number that is a power of 2",n);
    else
    printf("%d is not a power of 2",n);
    return 0;
}
    
        
    


