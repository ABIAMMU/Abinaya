#include <stdio.h>
int main()
{
int i,flag=0;
char a[6]="101100";
for(i=0;i<=10;i++)
if((a[i]==0)||(a[i]==1))
{
flag++;
}
}
if(flag==4)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
