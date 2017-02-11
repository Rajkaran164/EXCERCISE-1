//Print the Longest String Enter
#include<stdio.h>
#define MAXLENGTH 1000
int getLine(char [],int);
void copy(char[],char[]);
int main()
{

	char line[MAXLENGTH],maxlength[MAXLENGTH];
	int l,max;
	max=0;
	while((l=getLine(line,MAXLENGTH))>0)
	{
		if(max<l)
		{
			max=l;
			copy(maxlength,line);
		}

	}
	printf("Longest String is:%s",maxlength);
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
void copy(char arr1[],char arr2[])
{
	int i=0;
	while((arr1[i]=arr2[i])!='\0')
		i++;
}