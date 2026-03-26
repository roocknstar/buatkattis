#include <stdio.h>

int main() {
    int n;
    
    if (scanf("%d", &n) == 1) {
        int angka1 = n / 10;
        int angka2 = n % 10;
        
        printf("%d%d\n", angka2, angka1);
    }
    
    return 0;
}