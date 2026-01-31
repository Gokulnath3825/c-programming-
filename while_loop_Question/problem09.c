#include<stdio.h>
int main(){
    int fuel,n,perFuel;
    scanf("%d",&fuel);
    scanf("%d",&n);
    int remainFuel=0;
    int count=0;


    int i=0;
    while(i<n){
        scanf("%d",&perFuel);
        if(remainFuel+perFuel>fuel){
            break;
        }
        remainFuel+=perFuel;

        count++;

        i++;
    }
    fuel-=remainFuel;
    printf("Completed Trips: %d\n",count);
    if(fuel>0){
        printf("Remaining Fuel: %d",fuel);
    }else{
        printf("Remaining Fuel :0");

    }


    return 0;
}