//16. Write a C program to find frequency of each digit in a given integer.
#include<stdio.h>
void main()
{
	int n,temp1,temp2,rem1,rem2,count=0;
	temp1=n;
	printf("the enter the number");
	scanf("%d",&n);
	while(temp1>0)
	{
		rem1=temp1%10;
		count=0;
		temp2=n;
		while(temp2>0)
		{
			rem2=temp2%10;
			if(rem1==rem2)
			{
				count++;
			}
			temp2=temp2/10;
		}
		printf("frequency of %d is=%d\n",rem1,count);
		temp1=temp1/10;
	}
}
