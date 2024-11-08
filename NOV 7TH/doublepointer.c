#include<stdio.h>
int main(){
    int a=10;
    int *ptr=&a;
    int **ptr2=&ptr;
    printf("%X\n", **ptr2);
}