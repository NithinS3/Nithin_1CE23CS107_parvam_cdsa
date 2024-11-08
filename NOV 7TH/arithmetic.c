#include<stdio.h>
int main(){
    int a=12;
    int *ptr=&a;
    printf("%d\n  ", ptr);
    ptr++;
    printf("%d" , ptr);
}