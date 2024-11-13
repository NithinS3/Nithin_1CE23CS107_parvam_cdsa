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
            int max1=__WINT_MIN__;
            int max2=__WINT_MIN__;
            for(int i=0;i<n;i++){
                if(arr[i]>max1){
                    max2=max1;
                    max1=arr[i];
                }
                 else if (arr[i]>max2){
                    max2=arr[i];
                }
        }
                printf("second largest no: %d ",max2);
}