//3.Write a C program to print all alphabets from a to z.
//--Ussing while loop
#include<stdio.h>
void main()
{
	char ch;
	ch='a';
	printf("Alphabets from a to z are: \n");
	while(ch<='z')
	{
		printf("%c\n",ch);
		ch++;
	}
}