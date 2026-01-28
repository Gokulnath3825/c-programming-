#include<stdio.h>
int main(){
    int BookType;
    scanf("%d",&BookType);
    int daysLate;
    scanf("%d",&daysLate);
    switch (BookType){
        case 1:{
            int days=daysLate*2;
            printf("Late Fee ₹%d",days);
        }
        break;
        case 2:{
            int days=daysLate*5;
            printf("Late Fee ₹%d",days);
        }
        break;
        default:
        printf("Invalid Book Type");
        break;
    }

        
}