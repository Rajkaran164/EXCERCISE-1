#include<stdio.h>
int main()
{
	int c;
	printf("\nEnter a Text:");
	while((c=getchar())!=EOF)
	{
		if(c==' ')
		{
			printf("\\b");
		}
		else if(c=='\t')
		{
			printf("\\t");
		}
		else if(c==92)
		{
			printf("\\");
			printf("\\");
		}
		else
		{
			putchar(c);
		}
	}
	return 0;
}