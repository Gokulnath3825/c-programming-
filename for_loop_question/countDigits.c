#include<stdio.h>
int main(){
    int n,i;
    int num=0;
    scanf("%d",&n);
    for(i=n%10;n!=0;n=n/10){
        num=num+1;
    }
    printf("%d",num);
}