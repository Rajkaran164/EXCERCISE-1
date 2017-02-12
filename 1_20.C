#include<stdio.h>
int main()
{
	int c,flag=0,count=0;
	printf("\nEnter a Text:");
	while((c=getchar())!=EOF)
	{
		if(c==92)
		{
			flag=1;
			count++;
			if(count>1)
			{
				printf("%c",92);
			}
			continue;
		}
		if(count>=2&&c!='t')
		{
			printf("%c",92);
			count=0;
			flag=0;
		}
		if(flag!=1)
		{
			putchar(c);
		}
		if(flag==1&&c=='t')
		{
			printf("\t");
			flag=0;
			count=0;
		}
	}
	return 0;
}