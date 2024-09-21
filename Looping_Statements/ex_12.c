//12. Write a C program to find sum of first and last digit of a number.
#include<stdio.h>
void main()
{

	int n, n1,nl,sum=0;
	printf("Enter the number n\n");
	scanf("%d",&n);
	nl=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	n1=n;
	sum=n1+nl;
	printf("The first number=%d\n",n1);
	printf("The last number=%d\n",nl);
	printf("sum =%d\n",sum);
}
