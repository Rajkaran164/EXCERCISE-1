 //Program to print the histogram of word
#include<stdio.h>
int main()
{
	int c,count=0;
	printf("Enter a Text:");
	while((c=getchar())!=EOF)
	{
		if(c==' '&&count==0)
		{
			printf("\n");
			count=1;
		}
		if(c!=' '&&c!='\n')
		{
			putchar('*');
			count=0;
		}
	}
	return 0;

}
