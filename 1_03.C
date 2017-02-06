//Program to print the CorresPonding Fahrenheit to Celsius
#include<stdio.h>
int main()
{
	int farh,n;
	farh=0;
	printf("\nEnter number upto which you want to print the table :\n");
	scanf("%d",&n);
	printf("\nFahrenheit\tCelsius\n");
	while(farh<=n)
	{
		printf("%d\t%6.2f\n",farh,(5.0/9.0)*(farh-32));
		farh+=20;
	}
	return 0;
}
