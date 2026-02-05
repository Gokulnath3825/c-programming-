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
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int current=a[i][j];
            int count=0;
            for(int l=0;l<r;l++){
                for(int k=0;k<c;k++){
                    if(a[l][k]==current){
                        count++;
                    }
                }
            }
            if(count == 1){ 
                printf("%d", current);
                return 0;
            }
            
        }
    }


    
    // printf("%d",repeat);

    return 0;
}