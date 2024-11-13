#include<stdio.h>
int main(){
    int n,r,c;
    printf("enter the size of row amd columns: ");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max=0;int index=-1;
        for(int i=0;i<r;i++){
            int ct=0;
            for(int j=0;j<c;j++){
                    if(arr[i][j]==1){
                    ct++;
                    }
        }
        if(ct>max){
            max=ct;
            index=i;
        }
     }
printf("%d ",index+1);
}