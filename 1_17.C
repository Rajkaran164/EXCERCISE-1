//Print ALL the strings having more than 80 character
#include<stdio.h>
#define MAXLENGTH 1000
int getLine(char [],int);
int main()
{

	char line[MAXLENGTH],maxlength[MAXLENGTH];
	int l;
	while((l=getLine(line,MAXLENGTH))>0)
	{
		if(l>80)
		{
			printf("String has More than 80 charcater%s\n",line);
		}

	}
	return 0;

}
int getLine(char arr[],int len)
{
	int i;
	char c;
	for(i=0;(i<len && (c=getchar())!=EOF && c!='\n');i++)
		arr[i]=c;
	if(c=='\n')
	{
		arr[i]=c;
		i++;
	}
	arr[i]='\0';
	return i;
}
