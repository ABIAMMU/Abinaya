#include<stdio.h>
#include<conio.h>

int main()
{
    float l,b,h,a,v;
    clrscr();
    printf("enter the length breadth height\n");
    scanf("%f%f%f",&l,&b,&h);
    a=(l*b+b*h+l*h);
    v=l*b*h;
    printf("the total surface area is %f\n",a);
    printf("the volume is %f\n",v);
    getch();
    return 0;
}
