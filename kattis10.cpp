#include <stdio.h>
#include <math.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) {
        return 0;
    }

    while (t--) {
        int n;
        if (scanf("%d", &n) != 1) {
            break;
        }

        int ganjil = (n % 2 != 0);

        int kuadrat = (int)(sqrt(n) + 0.5);
        int adalah_kuadrat = (kuadrat * kuadrat == n);

        if (ganjil && adalah_kuadrat) {
            printf("OS\n");
        } else if (ganjil) {
            printf("O\n");
        } else if (adalah_kuadrat) {
            printf("S\n");
        } else {
            printf("EMPTY\n");
        }
    }

    return 0;
}