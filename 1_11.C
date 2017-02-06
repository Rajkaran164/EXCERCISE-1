//Program to print its input one word per line
#include<stdio.h>
#include<conio.h>
int main()
{
	int c;
	printf("\nEnter a Text:");
	while((c=getchar())!=EOF)
	{

		if(c==' '||c=='\n'||c=='\t')
		{
			printf("\n");
		}
		else
		{
			putchar(c);
		}
	}
	return 0;
}