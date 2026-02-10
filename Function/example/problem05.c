#include<stdio.h>
int sum(int n){
    if (n < 10)
    return n;
    while(n>=10){
        int sum=0;
        while(n!=0){
            int digit=n%10;
            sum+=digit;
            n=n/10;
        }
        n=sum;
    }
    return n;
}

int main(){
    int n;
    scanf("%d",&n);
    int cal=sum(n);
    printf("%d ",cal);
}
