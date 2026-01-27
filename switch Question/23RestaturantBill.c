#include<stdio.h>
int main(){
    int customerType;
    scanf("%d",&customerType);
    int billAmount;
    scanf("%d",&billAmount);
    switch (customerType){
        case 1:{
            int discount=billAmount-(billAmount*0.05);
            printf("Pay ₹%d",discount);
        }
        break;
        case 2:{
            int discount=billAmount-(billAmount*0.15);
            printf("Pay ₹%d",discount);
        }
        break;
        default:
        printf("Invalid Customer Type");
        break;
    }

        
}