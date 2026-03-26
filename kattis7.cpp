#include <stdio.h>

int main() {
    int sudut;
    
    if (scanf("%d", &sudut) != 1) {
        return 0;
    }

    for (int jam = 0; jam < 12; jam++) {
        for (int menit = 0; menit < 60; menit++) {
            
            int pos_jam = (jam * 300) + (menit * 5);
            int pos_menit = menit * 60;
            
            int selisih = pos_menit - pos_jam;
            
            if (selisih < 0) {
                selisih += 3600;
            }
            
            if (selisih == sudut) {
                printf("%02d:%02d\n", jam, menit);
                return 0; 
            }
        }
    }

    return 0;
}