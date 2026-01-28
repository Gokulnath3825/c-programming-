#include<stdio.h>
int main(){
    int classType;
    scanf("%d",&classType);
    switch(classType){
        case 1:{
            int upgrade=300;
            printf("Upgrade Fee ₹ %d",upgrade);
        }
        break;
        case 2:{
            int upgrade=800;
            printf("Upgrade Fee ₹ %d",upgrade);
        }
        break;
        case 3:{
            int upgrade=1500;
            printf("Upgrade Fee ₹ %d",upgrade);
        }
        break;
        
        default:
        printf("Invalid Class Type");
        break;
    
    }
}