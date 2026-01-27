#include<stdio.h>
int main(){
    int seatType;
    scanf("%d",&seatType);
    int time;
    scanf("%d",&time);
    switch (seatType){
        case 1:{
            int silver=150;
            if(time<25){
                if(time>=18){
                    silver=silver+50;
                    printf("Ticket Price ₹%d",silver);
                }
                else{
                    printf("Ticket Price ₹%d",silver);

                }
            }else{
                printf("Invalid Time");
            }

        }
        break;
        case 2:{
            int gold=250;
            if(time<25){
                if(time>=18){
                    gold=gold+50;
                    printf("Ticket Price ₹%d",gold);
                }
                else{
                    printf("Ticket Price ₹%d",gold);
                }
            }
            else{
                printf("Invalid Time");
            }
        }
        break;
        default:
        printf("Invalid Seat Type");
        break;
}
}