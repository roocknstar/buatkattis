#include <stdio.h>

int main() {
    int angka[3];
    int temp;
    char urutan[4];

    if (scanf("%d %d %d", &angka[0], &angka[1], &angka[2]) != 3) {
        return 0;
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (angka[j] > angka[j + 1]) {
                temp = angka[j];
                angka[j] = angka[j + 1];
                angka[j + 1] = temp;
            }
        }
    }

    scanf("%s", urutan);

    for (int i = 0; i < 3; i++) {
        if (urutan[i] == 'A') {
            printf("%d", angka[0]);
        } else if (urutan[i] == 'B') {
            printf("%d", angka[1]);
        } else if (urutan[i] == 'C') {
            printf("%d", angka[2]);
        }

        if (i < 2) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}