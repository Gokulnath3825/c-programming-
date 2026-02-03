#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0,repeat=0;
    for(int i=0;i<n;i++){

        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                repeat=arr[j];
                count++;
            }
        }
    }
    if(count==0){
        printf("-1");
        
    }else{
    printf("%d",repeat);
}
}
