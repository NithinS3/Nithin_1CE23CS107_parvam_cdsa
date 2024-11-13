#include<stdio.h>
struct stu{
    int rollno;
    float marks;
};
int main(){
    struct stu a;
    a.rollno=121;
    a.marks=1.6;
    printf("%d     %f",a.rollno,a.marks);
}