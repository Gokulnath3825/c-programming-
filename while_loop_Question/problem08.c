#include<stdio.h>
int main(){
    int n,payment;
    scanf("%d",&n);
    int streak=0;
 
    int longStreak=0;
    int i=0;
    while(i<n){
        scanf("%d",&payment);
        if(payment==0){
            streak++;
            if(streak>longStreak){
                longStreak=streak;
            }
        }
        else{
            streak=0;
        }
        i++;
    }
    printf("%d",longStreak);

    return 0;
}