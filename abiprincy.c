#include <stdio.h>
#include<conio.h>
 
void main()
{ 
    int a,b,c;
    int result;
 
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
 
    if(a>b && a>c)  
    
        result=a;
    else if(b>a && b>c)       
        result=b;
    else
        result=c;
 
    printf("Largest number is = %d",result);
 
    
}
