#include<stdio.h>
void found(int n,int arr[],int search){
    int *p=arr;
    int count=0;
    for(int i=0;i<n;i++){
        if(*(p+i)==search){
            printf("%d",i+1);
            count=1;
            break;
        }
    }
    if(count==0){
        printf("%d",-1);
    }
}
int main(){
    int n,s;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&s);
    found(n,a,s);
}
