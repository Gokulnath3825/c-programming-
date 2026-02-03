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
    int max1=0;
    int max2=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]>max1){
                max2=max1;
                max1=a[i][j];
            }
            else if(a[i][j] > max2 && a[i][j] < max1){
                max2=a[i][j];
            }
        }
    }
    
    printf("%d\n",max2);






    return 0;
}