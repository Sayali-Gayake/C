//4. Write a C Program to print all even numbers between 1 to 100 .
//-- Using while loop
#include<stdio.h>
void main()
{
	int i;
	i=1;
	while(i<=100)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
		i++;
	}
}
	