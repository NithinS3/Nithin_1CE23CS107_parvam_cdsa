#include<stdio.h>
void nat(int n){
    if(n<=0){
        return;
    }
    nat(n-1);
    printf("%d\n",n);
}
int main(){
    int n;
    printf("Enter the value: ");
    scanf("%d",&n);
    nat(n);
}