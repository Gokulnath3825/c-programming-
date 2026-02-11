#include<stdio.h>
void table (int n){
    for(int i=1;i<=10;i++){
        int mul=n*i;
        printf("%dx%d=%d\n",n,i,mul);
    }

}
int main(){
    int a;
    scanf("%d",&a);
    table(a);
}