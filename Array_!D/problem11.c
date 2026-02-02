#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int total=0;
    int leftSum=0;//1 4 5
    int count=0;
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        total+=arr[i];//13
    }
    for(int j=0;j<n;j++){
        total=total-arr[j]; //13-1=12 12-3=9 9-5=4 4-2=2 2-2==0
        if(leftSum==total){ //0==12 1==9 4==4 9==3  11==2 13==2
            printf("%d",j);
            count=1;
        }
        leftSum+=arr[j]; // 1 4 9 11 13
    }
    if(count==0){
        printf("-1");

    }



    

}
    
    


    

