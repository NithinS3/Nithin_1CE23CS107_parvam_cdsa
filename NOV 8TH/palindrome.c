#include<stdio.h>
#include<string.h>
int ispalindrome(char str[]){
int left=0,right=strlen(str)-1;
while(left<right){
    if(str[left]!=str[right]){
        return 0;
    }
    left++;
    right--;
}
return 1;
}
int main(){
    char str[10];
    scanf("%d",str);
    if(ispalindrome(str)){
        printf("palindrome");
    }else{
        printf("not a palindrome");
    }
}