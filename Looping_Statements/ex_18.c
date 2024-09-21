//18. Write a C program to find HCF(GCD) of two numbers.
#include<stdio.h>
void main()
{
	int n1,n2,gcd,i;
	printf("Enter the number n1");
	scanf("%d",&n1);
	printf("Enter the number n1");
	scanf("%d",&n2);
	for(i=1;i<=n1 && i<=n2;i++)
	{
		if(n1%i==0 && n2%i==0)
		{
			gcd=i;
		}

	}
	printf("gcd of %d and %d is:%d",n1,n2,gcd);
}
