#include<stdio.h>
int main(){
    int days,units;
    scanf("%d",&days);
    int sum=0;
    
    for(int i=0;i<days;i++){
        scanf("%d",&units);
        sum+=units;
    }
    printf("Total Units : %d",sum);
}