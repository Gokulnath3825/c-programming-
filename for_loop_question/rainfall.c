#include<stdio.h>
int main(){
    int days,rainFall;
    scanf("%d",&days);
    int sum=0;
    int over=0;
    
    for(int i=0;i<days;i++){
        scanf("%d",&rainFall);
        sum+=rainFall;
        if(rainFall>50){
            over++;
        }
    }
    printf("Total rainFall: %d\n",sum);
    if(over==0){
        printf("Heavy Rain Days %d",over);
    }
    else{
        printf("Heavy Rain Days %d",over);
        
    }


}