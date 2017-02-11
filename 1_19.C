//REVERSE THE STRING USING REVERSE FUNCTION
#include<stdio.h>
#define LENGTH 1000
void reverse(char[]);
int main()
{
	char str[LENGTH],c;
	int i=0;
	printf("\nEnter the text:");
	while((c=getchar())!=EOF)
	{
		if(c=='\n'&&i!=0)
		{
			str[i]='\0';
			reverse(str);
			i=0;
		}
		if(c!='\n')
			str[i++]=c;
	}
	return 0;
}
void reverse(char str[])
{
	int i=0;
	while(str[i++]!='\0');
	i-=2;
	while(i>=0)
	{
		printf("%c",str[i]);
		i--;
	}
}
