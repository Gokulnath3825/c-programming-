#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int decimal=0;
    int base=1;
    for(int i=n;i>0;i=i/10){
        int digit=i%10;

        decimal=decimal+digit*base;
        base=base*2;
    }
    printf("%d",decimal);

}