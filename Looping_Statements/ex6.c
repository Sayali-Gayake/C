//6.Write a C program to find sum of all natural numbers between 1 to n.
#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=i;
    }
    printf("Sum of first %d natural numbers = %d",n,sum);
    return(0);
}