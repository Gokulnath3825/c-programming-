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
    int max=0;
    int max1=0;
    int min=0;
    int min1=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]>max){
                max1=max;
                max=a[i][j];
            }else if(a[i][j]>max1){
                max1=a[i][j];
            }
            
            if(a[i][j]<min){
                min1=min;
                min=a[i][j];
            }else if(a[i][j]<min1){
                min1=a[i][j];
            }
        }
    }
    int product=max*max1;
    int product1=min*min1;
    int final=0;
    if(product>product1){
        final=product;
    }else{
        final=product1;
    }
    printf("%d",final);

    return 0;
}