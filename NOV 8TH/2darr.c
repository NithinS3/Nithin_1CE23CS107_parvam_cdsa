#include<stdio.h>
int main(){ 
    int arr[3][3]={{12,75,23},{75,69,68},{20,30,10}};
    printf("Printing the values of 2D Array");
    for(int i=0;i<3;i++){
        for (int j = 0; j < 3; j++){
        printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
}