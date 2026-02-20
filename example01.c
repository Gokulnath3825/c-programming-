#include<stdio.h>
int main(){
    int a[2][3]={{1,2,3},{4,5,6}};
    //    0 1 2  col index
    // 0  1 2 3
    // 1  4 5 6
    printf("Before\n");
    printf("%d ",a[0][1]);
    printf("%d \n",a[1][0]);
    a[0][1]=100;
    a[1][0]=50;
    
    printf("After\n");
    printf("%d ",a[0][1]);
    printf("%d ",a[1][0]);




    return 0;
}