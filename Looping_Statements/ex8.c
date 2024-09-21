//8.write a Program to find sum of all odd numbers betweem 1 to n.
#include<stdio.h>
void main()
{
	int i;
	int n;
	int sum=0;
	printf("Enter the number n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			sum=sum+i;	
		}
	}
	printf("Sum of all odd numbers between 1 to %d = %d",n,sum);
}