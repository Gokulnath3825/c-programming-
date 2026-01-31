#include<stdio.h>
int main(){
    int totalData,n;
    scanf("%d",&totalData);
    scanf("%d",&n);
    int Used;
    int daysUsed=0;
    int i=0;
    while(i<n && totalData>0){
        scanf("%d",&Used);
        totalData=totalData-Used;
        daysUsed++;
        
        i++;
    }
    if(totalData<0){
        totalData=0;
    }

    printf("Remaining Data:%d\n",daysUsed);
    printf("Days Used:%dGB\n",totalData);


}