#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int max=0,sum;
    int index=0;

    for(int i=0;i<r;i++){
        sum=0;
        for(int j=0;j<c;j++){
            sum+=a[i][j];
        }
        if(sum>max){
            index=i;
        }
    }
    printf("%d",index);








    return 0;
}