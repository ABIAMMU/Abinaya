#include <stdio.h>
#include<conio.h>
int sub();
void main()
{
   int a;
   a=sub();
   printf("the subtracted value is %d",a);

}

int sub()
{
    int x,y,z;
    x=10,y=5;
    z=x-y;
    return (z);
}
