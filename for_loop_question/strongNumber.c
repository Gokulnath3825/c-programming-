#include<stdio.h>
int main(){
    int n,digit,fact;
    scanf("%d",&n);
    int temp=n;
    int sum=0;
    
    for(;n>0;n=n/10){
        digit=n%10;
        
        fact=1;
        for(int i=1;i<=digit;i++){
            fact=fact*i;
        }
        sum=sum+fact;
    }
    if(sum==temp){
        printf("Yes");
    }
    else{
        printf("No");
    }




}

