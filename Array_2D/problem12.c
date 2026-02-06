#include<stdio.h>
int main(){
    int r,c,max=0,freq=0;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int count=0;
            for(int k=0;k<r;k++){
                for(int l=0;l<c;l++){
                    if(a[k][l]==a[i][j]){
                        count++;
                    }
                }
            }
            if(count>max){
                max=count;
                freq=a[i][j];
            }
        }
    }
    printf("%d",freq);





    return 0;
}