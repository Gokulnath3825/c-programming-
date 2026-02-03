#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int max=0,max1=0;
    int min=0,min1=0;
    int final=0;

    for(int j=0;j<n;j++){
        if(arr[j]>max){
            max1=max;
            max=arr[j];
        }else{
            min1=min;
            min=arr[j];
        }

        int product=max*max1;
        int product1=min*min1;

        if(product>product1){
            final=product;
        }else{
            final=product1;
        }


    }
    printf("%d",final);



    return 0;
}