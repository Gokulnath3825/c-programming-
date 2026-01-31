#include<stdio.h>
int main(){
    int capacity,hours,beds;
    scanf("%d",&capacity);
    scanf("%d",&hours);
    int occupied=0;
    int critical=(capacity*90)/100;
    int critical1=0;

    int i=0;
    while(i<hours){
        scanf("%d",&beds);
        occupied+=beds;
        if(occupied>critical){
            critical1++;
        }
        i++;


    }
    printf("Final Occupied Beds: %d\n",occupied);
    printf("Critical Hours: %d",critical1);



    return 0;
}