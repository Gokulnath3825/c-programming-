#include<stdio.h>
int main(){
    int memberDuration;
    scanf("%d",&memberDuration);
    switch(memberDuration){
        case 1:{
            int amount=1500;
            printf("₹%d",amount);
        }
        break;
        case 2:{
            int amount=4000;
            printf("₹%d",amount);
        }
        break;
        case 3:{
            int amount=7000;
            printf("₹%d",amount);
        }
        break;
        default:
        printf("Invalid Duration");
        break;
    }
}