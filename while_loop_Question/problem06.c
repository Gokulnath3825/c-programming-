#include<stdio.h>
int main(){
    int maxWeight,n,passWeight;
    scanf("%d",&maxWeight);
    scanf("%d",&n);
    int load=0;
    int count=0;


    int i=0;
    while(i<n){
        scanf("%d",&passWeight);
        if(load+passWeight>maxWeight){
            break;
        }
        load+=passWeight;
        count++;

        i++;
    }
    printf("Passengers Allowed: %d\n",count);
    if(count<n){
        printf("Overload: Yes");
    }else{
        printf("Overload: No");

    }


    return 0;
}