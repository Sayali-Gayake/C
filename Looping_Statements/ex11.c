//11.Write a C program to find first and last digit of a number.
#include<stdio.h>
void main()
{

	int n, first,last;
	printf("Enter the number n\n");
	scanf("%d",&n);
	last=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	first = n;
	printf("The first number=%d\n",first);
	printf("The last number=%d\n",last);
}