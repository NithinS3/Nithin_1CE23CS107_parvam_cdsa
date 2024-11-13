#include<stdio.h>
int isPresent(int n, int arr[], int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements\n");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int target;
    printf("Enter the target element to find\n");
    scanf("%d", &target);
    isPresent(n,arr,target);
    if(isPresent(n,arr,target)){
            printf("Element present in array\n");
        }else{
        printf("Element not present in array\n");
    }
}
