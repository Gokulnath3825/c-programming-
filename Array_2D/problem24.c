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
        int prime=0;
        for(int j=0;j<c;j++){
            int n=a[i][j];
            if(n<2){
                prime=1;
            }
            for(int l=2;l<n;l++){
                    if(n%l==0){
                        prime=1;
                    }
                }
                if(prime==1){
                    break;
                }
            }
            if(prime==0){
                count++;
            }
        }
    printf("%d",count);




    return 0;
}
