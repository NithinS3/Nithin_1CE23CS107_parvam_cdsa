#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of stones: ");
    scanf("%d", &n);
    if(n%4!=0){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
}