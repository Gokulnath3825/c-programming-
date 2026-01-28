#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int num=0;
    for(;n!=0;n=n/10){
        num=num+(n%10);
    }
    printf("%d",num);
}