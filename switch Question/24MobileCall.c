#include<stdio.h>
int main(){
    int callType;
    scanf("%d",&callType);
    int minutes;
    scanf("%d",&minutes);
    switch (callType)
    {
    case 1:{
        int duration=1*minutes;
        printf("₹%d",duration);
    }
    break;
    case 2:{
        int duration=3*minutes;
        printf("₹%d",duration);
    }
    break;
    case 3:{
        int duration=10*minutes;
        printf("₹%d",duration);
    }
    break;
    
    default:
        printf("Invalid Call Type");
        break;
    }
}