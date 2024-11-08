#include<stdio.h>
int main(){
    int arr[]={10,35,56,23,87,34,65};
    printf("%d\n",arr);
    printf("%d\n",&arr[0]);
    for(int i=0;i<7;i++){
    printf("%d\n ",arr[i]);
    }
}