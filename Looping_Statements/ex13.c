//13. Write a C program to calculate sum of digits of a number.
#include<stdio.h>
void main()
{
	int n,rem,sum=0;
	printf("Enter thr number n\n");
	scanf("%d",&n);
	while(n>0)
	{
		n=n%10;
		rem=n;
		sum=sum+rem;
		n=n/10;
	}
	
	printf("sum is=%d",sum);
}