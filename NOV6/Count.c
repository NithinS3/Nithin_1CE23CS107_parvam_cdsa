#include<stdio.h>
int main(){
    int length=0, n;
    printf("Enter a value: ");
    scanf("%d", &n);
    while(n!=0){
        n=n/10;
        length++;
    }
    printf("Length: %d", length);
}