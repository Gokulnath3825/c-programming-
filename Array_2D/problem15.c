#include<stdio.h>
int main(){
    int r,c,count=0;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){ // row
        for(int j=0;j<c;j++){ //column
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int n=a[i][j];
            int prime=1;
            for(int k=2;k<n;k++){
                if(n%k==0 ){
                    prime=0;
                    break;
                }
            }
            if(prime!=0){
                count++;
            }
        }
    }
    printf("%d",count);




    return 0;
}
