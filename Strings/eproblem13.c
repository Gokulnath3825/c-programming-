#include <stdio.h>

int main() {
    char str[100], a;
    int index = -1;
    scanf("%s", str);
    scanf(" %c", &a);

    for (int i=0;str[i]!='\0';i++) {
        if (str[i] == a) {
            index = i;
            break;
        }
    }

    printf("%d", index);
    return 0;
}
