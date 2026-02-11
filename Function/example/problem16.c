#include<stdio.h>
void fibo(int n){
    int a=0,b=1;
    for(int i=0;i<n;i++){
        printf("%d ",a);
        int c=a+b;
        a=b;
        b=c;
    }

}
int main(){
    int a;
    scanf("%d",&a);
    fibo(a);
}