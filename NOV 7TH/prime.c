#include<stdio.h>
int main(){
    int n;
    printf("Enter n value:");
    scanf("%d", &n);
    int c=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }    
    }
    if(c==2){
        printf("Prime number\n");
    }
    else{
        printf("Not a prime number\n");
    }
}