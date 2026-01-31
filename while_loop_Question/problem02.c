#include<stdio.h>
int main(){
    int n;
    int i=0;
    int trans,balance;
    int low=0;
    scanf("%d",&n);
    scanf("%d",&balance);

    while(i<n){
        scanf("%d",&trans);
        balance=balance+trans;
        if(balance < 2000){
            low++;
        }
        i++;
    }
    printf("Final Balance: %d\n",balance);
    printf("Low Balance Days: %d",low);



    return 0;
}