#include<stdio.h>
int main(){
            int n;
            printf("enter the size: ");
            scanf("%d",&n);
            int arr[n];
            printf("enter the number:");
            for(int i=0;i<n;i++){
                scanf("%d",&arr[i]);
            }
            int min1=__INT_MAX__;
            int min2=__INT_MAX__;
            for(int i=0;i<n;i++){
                if(arr[i]<min1){
                    min2=min1;
                    min1=arr[i];
                }
                 else if (arr[i]<min2)
                 {
                    min2=arr[i];
                 }
                }
                printf("second smallest no: %d ",min2); 
            }