#include <stdio.h>

int main() {
    int N, delay;
    int totalDelay = 0, delayedDays = 0;
    int i = 0;
    scanf("%d", &N);
    while (i < N) {
        scanf("%d", &delay);
        totalDelay += delay;

        if (delay > 2) {
            delayedDays++;
        }
        i++;
    }
    printf("Total Delay: %d\n", totalDelay);
    printf("Delayed Days: %d", delayedDays);

    return 0;
}
