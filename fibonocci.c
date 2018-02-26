#include<stdio.h>

     int main()
     {
     int n,k;
     long int a=-1,b=1,f;

     printf("Enter the number range:\n");
     scanf("%d",&n);
     printf("\n FIBONACCI SERIES: \n");
     for(k=1;k<=n;k++){
     f=a+b;
     a=b;
     b=f;
     printf(" %ld",f);  //Here the FIBONACCI  Terms are printed one by one
     }
 return 0;
}
