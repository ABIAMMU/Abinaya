#include<stdio.h>
int main()
{
	int count_words=0,i;
	int count_char=0;
	char str[20];
	printf("enter the string:");
	gets(str)'
	for(i=0;str[i]!=NULL;i++)
	{
		count_char++;
		if(str[i]=='')
		count_words++;
	}
	printf("\n number of characters in a string:%d",count_char);
	printf("\n nuber of words in string:%d,count words+1);
	getch();
	return 0;
}



