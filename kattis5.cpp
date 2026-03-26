#include <stdio.h>

int main() {
    char kata_sekarang[85];
    char kata_sebelum[85];
    char kata_maksimal[85];

    kata_sekarang[0] = '\0';
    kata_sebelum[0] = '\0';
    kata_maksimal[0] = '\0';

    int maks_jumlah = 0;
    int jumlah_sekarang = 0;
    int indeks_huruf = 0;
    char huruf;
    int i, sama;

    while (scanf("%c", &huruf) == 1 && huruf != '\n') {
        if (huruf == ' ') {
            if (indeks_huruf > 0) {
                kata_sekarang[indeks_huruf] = '\0';

                sama = 1;
                for (i = 0; kata_sekarang[i] != '\0' || kata_sebelum[i] != '\0'; i++) {
                    if (kata_sekarang[i] != kata_sebelum[i]) {
                        sama = 0;
                        break;
                    }
                }

                if (sama == 1 && kata_sebelum[0] != '\0') {
                    jumlah_sekarang++;
                } else {
                    jumlah_sekarang = 1;
                    for (i = 0; kata_sekarang[i] != '\0'; i++) {
                        kata_sebelum[i] = kata_sekarang[i];
                    }
                    kata_sebelum[i] = '\0';
                }

                if (jumlah_sekarang > maks_jumlah) {
                    maks_jumlah = jumlah_sekarang;\
                    for (i = 0; kata_sebelum[i] != '\0'; i++) {
                        kata_maksimal[i] = kata_sebelum[i];
                    }
                    kata_maksimal[i] = '\0';
                }

                indeks_huruf = 0; 
            }
        } else {
            kata_sekarang[indeks_huruf] = huruf;
            indeks_huruf++;
        }
    }

    if (indeks_huruf > 0) {
        kata_sekarang[indeks_huruf] = '\0';

        sama = 1;
        for (i = 0; kata_sekarang[i] != '\0' || kata_sebelum[i] != '\0'; i++) {
            if (kata_sekarang[i] != kata_sebelum[i]) {
                sama = 0;
                break;
            }
        }

        if (sama == 1 && kata_sebelum[0] != '\0') {
            jumlah_sekarang++;
        } else {
            jumlah_sekarang = 1;
            for (i = 0; kata_sekarang[i] != '\0'; i++) {
                kata_sebelum[i] = kata_sekarang[i];
            }
            kata_sebelum[i] = '\0';
        }

        if (jumlah_sekarang > maks_jumlah) {
            maks_jumlah = jumlah_sekarang;
            for (i = 0; kata_sebelum[i] != '\0'; i++) {
                kata_maksimal[i] = kata_sebelum[i];
            }
            kata_maksimal[i] = '\0';
        }
    }

    printf("%s\n", kata_maksimal);

    return 0;
}