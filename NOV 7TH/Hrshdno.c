#include<stdio.h>
int main(){
    int length=0, n;
    printf("Enter a value: ");
    scanf("%d", &n);
    int temp=n;
    int s=0;
    while(n!=0){
        int rem=n%10;
        s=s+rem;
        n=n/10;
    }
    if(temp%s==0){
        printf("Harshad number");
}
else{
    printf("Not a Harshad number");
}
}