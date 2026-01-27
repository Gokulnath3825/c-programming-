#include<stdio.h>
int main(){
    int connectionType;
    scanf("%d",&connectionType);
    int unitsConsumed;
    scanf("%d",&unitsConsumed);
    switch (connectionType){
        case 1:{
            if(unitsConsumed<=30){
                int bill=5*unitsConsumed;
                printf("₹%d",bill);
            }
            else{
                int bill=5*30+(unitsConsumed-30)*8;
                printf("₹%d",bill);
            }
        }
        break;
        case 2:{{
            int bill=10*unitsConsumed;
            printf("₹%d",bill);
            
            }
        }
    }
}