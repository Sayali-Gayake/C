//9. Write a C program to print multiplication table of any number.
#include<stdio.h>
void main()
{
	int n,i,ans;
	printf("Enter tne number n");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		ans=n*i;
		printf("%d*%d=%d\n",n,i,ans);
	}
}