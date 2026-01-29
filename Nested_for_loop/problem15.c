#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    for(char i=ch;i>='A';i--){
        for(int j='A';j<=i;j++){
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}