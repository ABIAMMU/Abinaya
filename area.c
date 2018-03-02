#include<stdio.h>
int main()
{
   float length,breadth,area;
    printf("enter the length and breadth values");
    scanf("%f%f",&length,&breadth);
    area=length*breadth;
    printf("/n % 0.5f",area);
    return 0;
}
