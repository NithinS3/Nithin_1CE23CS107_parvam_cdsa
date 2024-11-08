#include<stdio.h>
int main(){
    int op;
    printf("enter the day:\n\n");
    scanf("%d",&op);
    switch (op){
        case 1:printf("monday");
        break;
         case 2:printf("tuesday");
        break;
        
         case 3:printf("wed");
        break;
        
         case 4:printf("thursday");
        break;
        
         case 5:printf("friday");
        break;
        
         case 6:printf("sa=         t");
        break;
         case 7:printf("sunday");
        break;
        
        default:
        printf("invalid day!! enter a valid ip");

    }
    return 0;
}