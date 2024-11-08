#include<stdio.h>
int main(){
    int n;
    printf("Enter the string: ");
    scanf("%d", &n);
    int r=0;
    int temp=n;
    while(n!=0){
        int rem=n%10;
        r=r*10+rem;
        n=n/10; 
    }
    if(r==temp){
    printf("It is a Pallindrome");
    }
    else{
        printf("It is Not a Palindrome");
    }
}