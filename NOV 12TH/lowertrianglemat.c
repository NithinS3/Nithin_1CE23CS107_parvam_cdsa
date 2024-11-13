#include<stdio.h>
int isLower(int a,int arr[][a]){
    for(int i=0;i<a;i++){
        for(int j=i+1;j<a;j++){
            if(arr[i][j]!=0){
                return 0;
            }
        }
    }
    return 1;
}
int main(){
    int a;
    printf("enter the size: ");
    scanf("%d",&a);
    int arr[a][a];
    printf("enter the matrix elements: ");
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("lower trianglur matirx : ");
printf("%d",isLower(a,arr));

}