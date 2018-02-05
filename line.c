#include<stdio.h>
int main()
{
	int count;
	char ch;
	FILE *fptr;
	clrscr();
	fp=fopen("test.cpp","r");
	if(fp==EOF)
	{
		perror("error");
	}
	else
	{
		while(ch!=EOF)
		{
			ch=fgetc(fptr);
			if(ch=='\\')
			count++;
			if(ch=='\\')
			count--;
			if(ch=='\*')
			{
	                        while(ch!='\*')
	                        {
	                        	ch=fgetc(fptr);
	                        }
			}
		}
	printf("{the lines in the paragraph are%d",count);
	fclose(fptr)
	}
	getchar();
	return 0;

}
