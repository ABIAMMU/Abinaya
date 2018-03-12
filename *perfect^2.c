#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,i,p,flag=0;
    clrscr();
    printf("enter the two numbers\n");
    scanf("%d%d",&n1,&n2);
    p=n1*n2;
    for(i=1;i<=p/2;i++)
    {
        if(i*i==p)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
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
