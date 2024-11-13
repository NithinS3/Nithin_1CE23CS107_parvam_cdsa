#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter the elements: ");
    scanf("%d", &n);
    int *dynamic=(int *)malloc(n*sizeof(int));
    printf("enter the values: ");
    for(int i=0;i<n;i++){
        scanf("%d", &dynamic[i]);
    }
    int extra;
    printf("enter the extra values: ");
    scanf("%d", &extra);
    dynamic=realloc(dynamic,(n+extra)*sizeof(int));
    printf("enter the elements after realloc: ");
    for(int i=n;i<(n+extra);i++){
        scanf("%d", &dynamic[i]);
    }
    for(int i=0;i<(n+extra);i++){
        printf("%d ", dynamic[i]);
    }
}