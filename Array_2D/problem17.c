#include<stdio.h>
int main(){
    int r,c,sum;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int count=0;
    for(int i=0;i<r;i++){
        int n=a[i][i];
        sum=0;
        for(int j=0;j<c;j++){
                sum=sum+a[i][j];
        }
        if(sum-n<n){
            count++;
        }
    }
    printf("%d",count);








    return 0;
}