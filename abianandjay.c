#include<stdio.h>
#include<conio.h>
void main()
{
        int i=1, sum=0, n;
        printf ("Enter the number of terms":);
        scanf ("%d", &n);
        do
        {
            sum = sum+i;
            i=i+1;
        } while (i<=n);
        printf("The sum of first k numbers is %d", n, sum);
       
}
