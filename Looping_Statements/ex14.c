//14. Write a C program to enter a number and print its reverse.
#include<stdio.h>
int main(){
    int n, reverse=0,remainder,num;

    printf("Enter the number:");
    scanf("%d",&n);
    num=n;
    while(n!=0){
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }
    printf("Reverse number of %d = %d",num,reverse);

    return 0;
}