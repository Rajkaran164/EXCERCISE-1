//Program to print the Coressponding Celcius to Fahrenheit
#include<stdio.h>
int main()
{
	int celc,n;
	printf("\nEnter the number upto which you want to print the table:\n");
	scanf("%d",&n);
	celc=0;
	printf("Celsius\tFahrenite\n");
	while(celc<=n)
	{
		printf("%d\t%.2f\n",celc,(celc*9.0)/5.0+32.0);
		celc+=10;
	}
	return 0;
}
