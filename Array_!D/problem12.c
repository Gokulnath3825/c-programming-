#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int target,count=0,count1=0;
    scanf("%d",&target);
    
    for(int j=0;j<n;j++){
        for(int k=j;k<n;k++){
            int total=arr[j]+arr[k];

            if(count!=0 && count1==1){
                break;
            }

            if(total==target){
                count++;
                count1++;
                printf("%d %d ",arr[j],arr[k]);
            }
        }
    }

    if(count==0){
        printf("No Pair");
    }
    return 0;
}