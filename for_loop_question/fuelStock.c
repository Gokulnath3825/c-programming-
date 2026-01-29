#include<stdio.h>
int main(){
    int n,fuelprice;
    scanf("%d",&n);
    int sum=0;
    int over=0;
    
    for(int i=0;i<n;i++){
        scanf("%d",&fuelprice);
        sum+=fuelprice;
        if(fuelprice>100){
            over++;
        }
    }
    printf("Highest Price: %d\n",sum);
    if(over==0){
        printf("High Price Days: %d",over);
    }
    else{
        printf("High Price Days: %d",over);
        
    }


}