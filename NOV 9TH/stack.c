#include<stdio.h>
#define n 5
int top=-1;
int stack[n];
void push(){
    int data;
    printf("Enter the element: ");
    scanf("%d",&data);
    if(top==n-1){
        printf("Stack Overflow");
    }
    else{
        top++;
        stack[top]=data;
    }
}
void pop(){
    if(n==-1){
        printf("Stack Underflow");
    }
    else{
        top--;
    }
}
void peek(){
    if(n==-1){
        printf("Stack is empty");
    }
    else{
        printf("PEEK OPn element: %d ", stack[top]);
    }
}
void display(){
    if(n==-1){
        printf("Stack Underflow");
    }
    else{
        printf("Elements in stack:\n");
        for(int i=top; i>=0;i--){
            printf("%d  ", stack[i]);
        }
    }
    
}
int main(){
    int choice;
    
    do{
        printf("Enter the choice: ");
        scanf("%d", &choice);
            switch(choice){
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:peek();
            break;
            case 4:display();
            break;
            default:printf("Invalid");
        }
    }while(choice!=0);
}