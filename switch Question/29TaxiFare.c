#include<stdio.h>
int main(){
    int VehicleType;
    scanf("%d",&VehicleType);
    int distance;
    scanf("%d",&distance);
    switch (VehicleType)
    {
    case 1:{
        distance=10*distance;
        printf("₹%d",distance);
    }
    break;
    case 2:{
        distance=15*distance;
        printf("₹%d",distance);
    }
    break;
    case 3:{
        distance=20*distance;
        printf("₹%d",distance);
    }
    break;
    
    default:
        printf("Invalid Vehicle Type");
        break;
    }
}