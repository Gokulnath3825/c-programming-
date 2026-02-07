#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){ // row
        for(int j=0;j<c;j++){ //column
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0;
    for(int l=0;l<c;l++){
        sum+=a[0][l];
    }
    for(int l=0;l<c;l++){
        sum+=a[r-1][l];
    }
    for(int i=1;i<r-1;i++){
        sum+=a[i][0];
    }
    for(int i=1;i<r-1;i++){
        sum+=a[i][c-1];
    }
    printf("%d",sum);





    return 0;
}