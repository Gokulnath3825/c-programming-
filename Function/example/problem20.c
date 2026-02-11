#include<stdio.h>
int menu(int a,int b,char c){
    int sum=0;
    switch (c)
    {
    case '+':
        sum=a+b;
        return sum;
        break;
    case '-':
        sum=a-b;
        return sum;
        break;
    case '*':
        sum=a*b;
        return sum;
        break;
    case '/':
        sum=a/b;
        return sum;
        break;
    default:
    printf("Invalid Input ");
    return 0;
        break;
    }

}
int main(){
    int num1,num2;
    char choice;
    scanf("%d %d",&num1,&num2);
    scanf(" %c",&choice);
    int result=menu(num1,num2,choice);
    printf("%d ",result);
}