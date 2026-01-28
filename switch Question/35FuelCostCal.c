#include<stdio.h>
int main(){
    int fuelType;
    scanf("%d",&fuelType);
    int litres;
    scanf("%d",&litres);
    switch (fuelType)
    {
    case 1:{
        litres=105*litres;
        printf("Fuel cost ₹%d",litres);
    }
    break;
    case 2:{
        litres=92*litres;
        printf("Fuel cost ₹%d",litres);
    }
    break;
    case 3:{
        litres=85*litres;
        printf("Fuel cost ₹%d",litres);
    }
    break;
    
    default:
        printf("Invalid FuelType");
        break;
    }
}