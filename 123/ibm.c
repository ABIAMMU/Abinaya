#include <stdio.h>
#include<conio.h>
void sub(int x,int y );
void main()
{
    int a,b,z;
    scanf("%d%d",&a,&b);
    sub(a,b);

}

void sub(int x,int y)
{
    int z;
    z=x-y;
    printf("the subtracted value is %d",z);
}
