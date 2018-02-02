#include<stdio.h>
void swap(int *a,int *b)
{
int t=*a;
*a=*b;
*b=t;
}
int main()
{
int c,d;
printf("enter the values of c");
scanf("%d",&c);
printf("enter the value of d");
scanf("%d",&d);
swap(&c,&d);
printf("after swapping : c=%d,d=%d,c,d);
return 0;
}
