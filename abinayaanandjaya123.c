#include<stdio.h>
struct TIME
{
int min;
int hr;
);
void difference(struct TIME t1,struct TIME t2,struct TIME *diff);
int main()
{
struct TIME start time,stop time,diff;
printf("start time:\n");
printf("enter hr,min:");
scanf("%d%d",&start time.hr,&start time.min);
printf("stop time:\n");
printf("enter hr,min:");
scanf("%d%d",stop time.hr,stop time.min);
difference(start time,stop time,&diff);
printf("\n TIME DEIFFERENCE :%d%d",start time.hr,start time.min);
printf("%d%d%d",stop time.hr,stop time.min);
printf("=%d%d%d\n",diff.hr,diff.min);
return 0;
}

