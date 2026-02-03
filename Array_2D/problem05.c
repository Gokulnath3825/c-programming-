#include<stdio.h>
int main(){
    int r;
    int c;
    scanf("%d",&r);
    scanf("%d",&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int index;
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum+=a[i][j];
        }
        int n=0;
        if(n<sum){
            index=i;
        }
        n=sum;
    }
    printf("%d",index);





    return 0;
}