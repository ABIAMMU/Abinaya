#include <stdio.h>
#include<string.h>
int main()
{
    char s[200];
    int count = 0,i;
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        count ++;
    }
    printf("%D",count);
    getch();
    }
