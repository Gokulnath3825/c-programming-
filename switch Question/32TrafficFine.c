#include<stdio.h>
int main(){
    int violationType;
    scanf("%d",&violationType);
    switch(violationType){
        case 1:{
            int fine=1000;
            printf("₹%d",fine);
        }
        break;
        case 2:{
            int fine=1500;
            printf("₹%d",fine);
        }
        break;
        case 3:{
            int fine=2000;
            printf("₹%d",fine);
        }
        break;
        default:
        printf("Invalid Violation Type");
        break;
    }
}