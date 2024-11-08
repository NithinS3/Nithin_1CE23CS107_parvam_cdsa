#include<stdio.h>
int a=5;
static int b=2;
void pop(){
    b--;
    printf("%d\n", b);
}
void sub(){
    a++;
    printf("%d\n", a);
}
void add(){
    static int c=1;
    c++;
    printf("%d\n",c);
}
int main(){
    pop();
    sub();
    add();
}