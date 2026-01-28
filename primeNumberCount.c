#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    int prime;
    for(int i=2;i<=n;i++){
        prime=1;
        for(int j=2;j<i;j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
        if (prime==1){
            sum+=1;
        }
    }
    printf("%d ",sum);
}