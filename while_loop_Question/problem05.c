#include<stdio.h>
int main(){
    int n,orders;
    scanf("%d",&n);
    int fail=0;
    int succ=0;
    int i=0;
    while(i<n){
        scanf("%d",&orders);
        if(orders==0){
            fail++;
        }else{
            succ++;
        }
        i++;
    }
    printf("Successful:%d\n",succ);
    printf("Cancelled:%d\n",fail);

    if(succ>=fail){
        printf("Status: Safe");
    }
    else{
        printf("Status: Risk:");

    }
    return 0;
}