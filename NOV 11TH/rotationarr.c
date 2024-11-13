#include<stdio.h>
int main(){
    int n;
    printf("enter the size: ");
    scanf("%d",&n);
    int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }int k;
        scanf("%d",&k);
        for(int j=0;j<k;j++){
            int ptr=arr[n-1];
        for(int i=n-1;i>0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=ptr;
     }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}