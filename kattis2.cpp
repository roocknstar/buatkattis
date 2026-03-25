#include <stdio.h>

int main() {
    int n;
    int slice;
    char ukuran;
    int totalS = 0, totalM = 0, totalL = 0;
    int totalBox = 0;

    if (scanf("%d", &n) != 1) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        scanf(" %c %d", &ukuran, &slice);

        if (ukuran == 'S') {
            totalS = totalS + slice;
        } else if (ukuran == 'M') {
            totalM = totalM + slice;
        } else if (ukuran == 'L') {
            totalL = totalL + slice;
        }
    }

    if (totalS > 0) {
        totalBox = totalBox + (totalS + 5) / 6;
    }

    if (totalM > 0) {
        totalBox = totalBox + (totalM + 7) / 8;
    }

    if (totalL > 0) {
        totalBox = totalBox + (totalL + 11) / 12;
    }

    printf("%d\n", totalBox);

    return 0;
}