#include <stdio.h>
#include<conio.h>
int sub();
void main()
{
   int a,b,c;
   c=sub(a,b);
   printf("the subtracted value is %d",c);

}

int sub()
{
    int x,y,z;
    x=10,y=5;
    z=x-y;
    return (z);
}
