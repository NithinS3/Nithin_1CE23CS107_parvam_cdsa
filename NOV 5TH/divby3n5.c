#include<stdio.h>
int main(){
    int i;
    printf("Enter a number:");
    scanf("%d",i);
    if((i%3==0)&&(i%5==0)){
        printf("true");
    }
    else{
        printf("False");
    }
    return 0;
}
