//17. Write a C program to find all factors of a number.
#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter number to find factorial:");
	scanf("%d",&n);
	printf("All factors of %d are :\n",n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d\n",i);
		}
	}
}