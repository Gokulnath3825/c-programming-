#include<stdio.h>
int main(){
    int roomShareType;
    scanf("%d",&roomShareType);
    switch(roomShareType){
        case 1:{
            int amount=80000;
            printf("₹%d",amount);
        }
        break;
        case 2:{
            int amount=600000;
            printf("₹%d",amount);
        }
        break;
        case 3:{
            int amount=450000;
            printf("₹%d",amount);
        }
        break;
        default:
        printf("Invalid Room Share Type");
        break;
    }
}