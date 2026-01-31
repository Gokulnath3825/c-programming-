#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int prev=0, curr=0;
    int totalDrops = 0;
    int consecutiveDrops = 0;
    int crashDay = -1;

    int i = 1;
    scanf("%d", &prev);
    while (i < n) {
        scanf("%d", &curr);//300 310 305
        if (curr < prev) {// 300<0 310<300 305<310 295<305 290<295
            totalDrops++;// 1        1.      2.     3.     4
            consecutiveDrops++;//1    0.     1.      2.     3
            if (consecutiveDrops == 3 && crashDay == -1) {
                crashDay = i + 1; //4+1=5
            }
        } else {
            consecutiveDrops = 0;//0
        }
        prev = curr;
        i++;
    }

    if (crashDay != -1){
        printf("Crash Day: %d\n", crashDay);
    }
    else{
        printf("Crash Day: Not Detected\n");
    }

    printf("Total Drops: %d\n", totalDrops);

    return 0;
}
