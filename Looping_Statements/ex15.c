//15. Write a C program TO check whether a number is palindrom or not.
#include<stdio.h>
int main(){
    int n, num, rev = 0;
    printf("Enter any number to check palindrome");
    scanf("%d",&n);
    num = n;
    while(n != 0){
        rev = (rev * 10) + (n % 10);
        n /= 10;

    }
    if(rev == num){
        printf("%d is palindrom number.",num);
    }
    else{
        printf("%d is not palindrom number.",num);
    }
    return 0;
}