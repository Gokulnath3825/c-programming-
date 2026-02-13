#include<stdio.h>
int main(){
    char str;
    char *p1,*p2;
    scanf("%s",&str);
    p1=&str;
    while(*p1!='\0'){
        p1++;
    }
    p1--;
    for(p2=&str;p1>=p2;){
        if(*p1==*p2){
            p1--;
            p2++;
        }else{
            break;
        }
    }
    if(p2>p1){
        printf("Palindrome");
    }else{
        printf("Not palindrome");
    }

}