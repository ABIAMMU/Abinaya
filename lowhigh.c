#include<stdio.h>
int main()
{
int a[100],i,n,high,low;
printf("How many elements:");
scanf("%d",&n);
printf("Enter the Array:");
scanf("%d",&a[i]);
{
for(i=0;i<n;++i)
high=low=a[0];
}
{
for(i=1;i<n;++i)
{
if(a[i]>high)
high=a[i];
if(a[i]<low)
low=a[i];
}
{
printf("The largest element is %d",high);
printf("\nThe smallest element is %d",low);
}
getch();
return 0;
}
