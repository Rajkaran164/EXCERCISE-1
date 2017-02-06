#include<stdio.h>
int main()
{
	int c,count=0;
	printf("Enter the Text:");
	while((c=getchar())!=EOF)
	{
		if(c==' '&&count==0)   //Use For Print the one space
		{
			putchar(c);
			count=1;
		}
		if(c!=' ')             //Use To print the character except space
		{
			count=0;
			putchar(c);
		}
	}
	getch();
}