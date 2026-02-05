#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int k;
    
    scanf("%d",&k);
    for(int j=k;j<n;j++){
        printf("%d ",arr[j]);
    }
    for(int j=0;j<k;j++){
        printf("%d ",arr[j]);
    }

    







    return 0;
}



