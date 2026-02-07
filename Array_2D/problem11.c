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
        for(int j=0;j<c;j++){
            int count=0;
            for(int k=0;k<j;k++){
                if(a[i][j]>a[i][k+1]){
                    count=1;
                }
            }
            if(count==1){
                count1++;
            }
        }
    }
    printf("%d",count1);
    return 0;
}
