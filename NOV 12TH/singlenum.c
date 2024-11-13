#include<stdio.h>
int main(){
    int n;
    printf("enter the number:  ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements:  ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }      
    int result=0;
    for(int i=0;i<n;i++){
        result=result^arr[i];
        }
        printf("%d",result);
    }






                //4 1 2 1 2                     
                            //4^1=5
                            // 5^2=7
                            // 7^1=6
                            // 6^2=4