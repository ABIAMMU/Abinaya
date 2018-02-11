#include <stdio.h>
void add();
void add1();
void sub();
void sub1();
void mul();
void mul1();
void div();
void div1();
int a1[20];
void main()
{
    char a;
    printf("enter your choice");
    scanf("%c"&a);
    switch(a);
    {
        case '+':add();
        add1();
        break;
        case '-':sub();
        sub1();
        break;
        case '*':mul();
        mul1();
        break;
        case '/':div();
        div1();
        break;
    }
}
    void add()
    {
        int a,b,c;
        scanf("%d",&a,&b);
        c=a+b;
        printf("the addition value is %d",c);
        
    }
    void add1()
    {
        int b,c1;
        scanf("%d",&b);
        c1=a1+b;
        printf("the addition value is %d",c1);
    }
    void sub()
    {
        int a,b,c2;
        scanf("%d",&a,&b);
        c2=a-b;
        printf("the subtraction value is %d",c2);
    }
    void sub1()
    {
        int b,c3;
        scanf("%d",&b);
        c3=a1-b;
        printf("the subtraction value is %d",c3);
    }
    void mul()
    {
        int a,b,c4;
        scanf("%d",&a,&b);
        c4=a*b;
        printf("the multiplication value is %d",c4);
    }
    void mul1()
    {
        int b,c5;
        scanf("%d",&b);
        c5=a1*b;
        printf("the multipliction value is %d",c5);
    }
    void div()
    {
        int a,b,c6;
        scanf("%d",&a,&b);
        c6=a/b;
        printf("the division value is %d",c6);
    }
    void div1()
    {
        int b,c7;
        scanf("%d",&b);
        c7=a1/b;
        printf("the division value is %d",c7);
        
        
    }
    
        
