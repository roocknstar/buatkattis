#include <stdio.h>

int main() {
    int total_detik;
    int jam, menit, detik;

    if (scanf("%d", &total_detik) != 1) {
        return 0;
    }

    jam = total_detik / 3600;
    
    int sisa_setelah_jam = total_detik % 3600;

    menit = sisa_setelah_jam / 60;
    detik = sisa_setelah_jam % 60;

    printf("%d : %d : %d\n", jam, menit, detik);

    return 0;
}