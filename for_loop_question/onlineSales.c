#include<stdio.h>
int main(){
    int n,daily;
    scanf("%d",&n);
    int sum=0;
    int over=0;
    
    for(int i=0;i<n;i++){
        scanf("%d",&daily);
        sum+=daily;
        if(daily>50000){
            over++;
        }
    }
    printf("Total Revenue:%d\n",sum);
    if(over==0){
        printf("Target Days %d",over);
    }
    else{
        printf("Target Days %d",over);
        
    }


}