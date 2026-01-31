#include<stdio.h>
int main(){
    int c,n,f;
    scanf("%d",&c);
    scanf("%d",&n);
    int safe=0;
    int fail=0;

    while(n--){
        scanf("%d",&f);
        if(f<c){
            safe++;
        }
        else{
            fail++;
        }

    }
    printf("Safe Hours:%d\n",safe);
    printf("Failure Count:%d",fail);




    return 0;
}