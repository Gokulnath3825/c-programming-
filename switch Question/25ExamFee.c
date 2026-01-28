#include<stdio.h>
int main(){
    int studentCategory;
    scanf("%d",&studentCategory);
    switch (studentCategory){
        case 1:{
            int examFee=1200;
            printf("Exam Fee ₹%d",examFee);
        }
        break;
        case 2:{
            int examFee=800;
            printf("Exam Fee ₹%d",examFee);
        }
        break;
        case 3:{
            int examFee=500;
            printf("Exam Fee ₹%d",examFee);
        }
        break;
        default:
        printf("Invalid Category");
        break;
    }
}