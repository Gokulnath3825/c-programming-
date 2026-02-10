#include<stdio.h>
int fact(int a){
    int sum=1;
    for(int i=1;i<=a;i++){
        sum=sum*i;
    }
    return sum;
}

int main(){
    int n;
    scanf("%d",&n);
    int dig=fact(n);
    printf("%d",dig);
}