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
    int count1=0;
    for(int i=0;i<r;i++){
        int count=0;
        for(int j=0;j<c;j++){
            if(a[i][j]>a[i-1][j-1] && a[i][j]<a[i+1][j+1]){
                count++;
                break;
            }
        }
        count1+=count;
    }
    printf("%d",count1);
    return 0;
}