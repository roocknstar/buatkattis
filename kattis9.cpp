#include <stdio.h>

int main() {
    int sisa_bagi[42] = {0};
    int input_angka, count = 0;

    for (int i = 0; i < 10; i++) {
        if (scanf("%d", &input_angka) == 1) {
            int r = input_angka % 42;
            sisa_bagi[r] = 1;
        }
    }

    for (int j = 0; j < 42; j++) {
        if (sisa_bagi[j] == 1) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}