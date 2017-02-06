//Program is to calculate the number of blank,tabs,and newLine
#include<stdio.h>
int main()
{
	int c,nl,nb,nt;
	nt=nb=nl=0;
	printf("\nEnter the Text:\n");
	while((c=getchar())!=EOF)
	{
		if(c=='\n')
			nl++;     //Calculate Number of Line
		if(c=='\t')       //Calculate Number of tabs
			nt++;
		if(c==' ')        //Calculate Number of Blank
			nb++;
	}
	printf("\nNumer of blank=%d\nNumber of tabs=%d\nNumber of new Line=%d\n",nb,nt,nl);
	return 0;
}