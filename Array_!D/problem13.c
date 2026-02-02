#include<stdio.h>
int main(){
    int n,total=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        total+=arr[i];
    }
    int average = total/n;
    for(int i=0;i<n;i++){
        if(average==arr[i]){
            printf("%d",i);
            break;
        }
    }




    return 0;
}