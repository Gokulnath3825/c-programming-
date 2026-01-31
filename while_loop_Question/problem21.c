#include<stdio.h>
int main(){
    int n,v;
    scanf("%d",&n);
    int vehicle=0;
    int longest=0;
    int streak=0;
    while(n--){
        scanf("%d",&v);
        if(v>20){
            vehicle++;
            longest++;
            if(longest>streak){
                streak=longest;
            }
        }else{
            longest=0;
        }
    }
    printf("Congestion Minutes:%d\n",vehicle);
    printf("Longest Congestion Streak:%d",streak);






    return 0;
}