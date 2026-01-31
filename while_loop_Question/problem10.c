#include <stdio.h>
int main() {
    int n, hours, inactiveWeeks = 0;
    int i = 0;
    scanf("%d", &n);
    while (i < n) {
        scanf("%d", &hours);
        if (hours == 0) {
            inactiveWeeks++;
        }
        i++;
    }
    printf("Inactive Weeks: %d\n", inactiveWeeks);
    if (inactiveWeeks >= 3) {
        printf("Risk Status: High");
    } else {
        printf("Risk Status: Low");
    }

    return 0;
}
