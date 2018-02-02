#include<stdio.h>
int main()
{
int i=25;
int k=50;
printf("before swapping",i,k);
i=i^k;
k=i^k;
i=i^k;
printf("after swapping");
return 0;
}
