#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[i],a[min],min,t,i,j;
printf("enter the size of the array",a[i]);
scanf("%d"&n);
printf("enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(a[j]<a[min])
min=j;
t=a[i];
a[i]=a[min];
a[min]=t;
}
printf("the sorted array is");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
