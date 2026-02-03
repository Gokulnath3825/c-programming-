#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int count=0;
    for(int j=0;j<n;j++){
        for(int k=0;k<j;k++){ 
            if(arr[j]==arr[k]){
                count++;
            }
        }
    }
    if(count!=0){
        printf("No");
    }else{
        printf("Yes");
    }
    
    return 0;
}