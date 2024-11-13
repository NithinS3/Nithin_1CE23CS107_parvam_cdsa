#include<stdio.h>
int main(){
    int n;
    printf("Enter the size: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array elements:  ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){                   //iterations
        for(int j=0;j<n-i-1;j++){
                if(arr[j+1]<arr[j]){        //condition
                    int temp=arr[j];      //swap
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
 }





// temp=arr[j];
// arr[j]=arr[j+1];
// arr[j+1]=temp;