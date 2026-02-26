#include<stdio.h>
int main(){
    int withdrawal,amount;
    scanf("%d",&withdrawal);
    int sum=0;
    
    for(int i=0;i<withdrawal;i++){
        scanf("%d",&amount);
        sum+=amount;
    }
    if(sum<=10000){
        printf("Approved");
    }
    else{
        printf("Limit Exceeded");
    }

}
