#include<stdio.h>
int main(){
    for(int i=0;i<=4;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int k=1;k<=2*(4-i);k++){
            printf(" ");
        }
        for(int j=i;j>0;j--){
            printf("%d",j);
        }
        printf("\n");
    }


}