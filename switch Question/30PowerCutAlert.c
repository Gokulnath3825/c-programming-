#include<stdio.h>
int main(){
    int type;
    scanf("%d",&type);
    switch (type){
        case 1:
        printf("Short Interruption\n");
        break;
        case 2: case 3: case 4:
        printf("Medium Interruption\n");
        break;
        default:
        printf("Long Interruption\n");
        break;
        
    }
}