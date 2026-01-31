#include <stdio.h>

int main() {
    int dataPack, N, usage;
    int day = 1;
    int exhaustedDay = -1;
    int overusedData = 0;
    scanf("%d", &dataPack);
    scanf("%d", &N);
    while (day <= N) {
        scanf("%d", &usage);
        dataPack -= usage;

        if (dataPack <= 0 && exhaustedDay == -1) {
            exhaustedDay = day;
            if (dataPack < 0) {
                overusedData = -dataPack;
            }
            break;
        }
        day++;
    }
    if (exhaustedDay == -1) {
        printf("Exhausted Day: Not Exhausted\n");
        printf("Overused Data: 0");
    } else {
        printf("Exhausted Day: %d\n", exhaustedDay);
        printf("Overused Data: %d", overusedData);
    }

    return 0;
}
