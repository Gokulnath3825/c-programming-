#include <stdio.h>

int main() {
    int N, power;
    int maxUsage = 0, surgeHours = 0;
    int i = 0;
    scanf("%d", &N);
    while (i < N) {
        scanf("%d", &power);

        if (power > maxUsage) {
            maxUsage = power;
        }

        if (power > 5) {
            surgeHours++;
        }

        i++;
    }
    printf("Max Usage: %d\n", maxUsage);
    printf("Surge Hours: %d", surgeHours);

    return 0;
}
