#include<stdio.h>
#include<conio.h>
int checkString(char *Str)
{
    char *ptr = Str;

    while( *ptr )
    {
        

        if( ! (*ptr >= 0x30 && *ptr <= 0x39 ) )
        {
            return 0;
        }
        ptr++;
    }

    return 1;
}

int main(int argc,char *argv[])
{
    

    if( checkString(argv[1]) )
    {
       
        puts("success");
    }
    else
    {
       puts("failure");
    }

   
}
