//Program to print a histogram of the  freqency of different character in its input
#include<stdio.h>
#define MAX 128
int main()
{
	int c,charList[MAX]={0},i,j;
	while((c=getchar())!=EOF)
		++charList[c];
	for(i=0;i<MAX;++i)
	{
		putchar(i);
		for(j=0;j<charList[i];++j)
			putchar('*');
		putchar('\n');
	}
	return 0;
}

