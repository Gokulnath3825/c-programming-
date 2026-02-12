#include <stdio.h>
int findMax(int a, int b) {
    if (a >= b){
        return a;
    }
    else{
        return b;
    }
}


int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    printf("%d", findMax(A, B));



    
    return 0;
}
