#include<stdio.h>
int main(){
    int planType;
    scanf("%d",&planType);
    switch(planType){
        case 1:{
            int speed=40;
            printf("Speed %d Mbps",speed);
        }
        break;
        case 2:{
            int speed=100;
            printf("Speed %d Mbps",speed);
        }
        break;
        case 3:{
            int speed=300;
            printf("Speed %d Mbps",speed);
        }
        break;
        default:
        printf("Invalid Plan Type");
        break;
    }
}