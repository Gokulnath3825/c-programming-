#include<stdio.h>
int leap(int n){
    if((n%400==0) || (n%100!=0 && n%4==0)){
        printf("Leap Year");
    }else{
        printf("Not Leap Year");
    }
}

int main(){
    int a;
    scanf("%d",&a);
    leap(a);
}