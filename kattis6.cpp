#include <stdio.h>

int main() {
    char papan[3][3];
    int i;
    int johan_menang = 0;
    int abdullah_menang = 0;

    for (i = 0; i < 3; i++) {
        scanf(" %c %c %c", &papan[i][0], &papan[i][1], &papan[i][2]);
    }

    for (i = 0; i < 3; i++) {
        if ((papan[i][0] == 'x' || papan[i][0] == 'X') && 
            (papan[i][1] == 'x' || papan[i][1] == 'X') && 
            (papan[i][2] == 'x' || papan[i][2] == 'X')) {
            johan_menang = 1;
        }
        if ((papan[i][0] == 'o' || papan[i][0] == 'O') && 
            (papan[i][1] == 'o' || papan[i][1] == 'O') && 
            (papan[i][2] == 'o' || papan[i][2] == 'O')) {
            abdullah_menang = 1;
        }
    }

    for (i = 0; i < 3; i++) {
        if ((papan[0][i] == 'x' || papan[0][i] == 'X') && 
            (papan[1][i] == 'x' || papan[1][i] == 'X') && 
            (papan[2][i] == 'x' || papan[2][i] == 'X')) {
            johan_menang = 1;
        }
        if ((papan[0][i] == 'o' || papan[0][i] == 'O') && 
            (papan[1][i] == 'o' || papan[1][i] == 'O') && 
            (papan[2][i] == 'o' || papan[2][i] == 'O')) {
            abdullah_menang = 1;
        }
    }

    if ((papan[0][0] == 'x' || papan[0][0] == 'X') && 
        (papan[1][1] == 'x' || papan[1][1] == 'X') && 
        (papan[2][2] == 'x' || papan[2][2] == 'X')) {
        johan_menang = 1;
    }
    if ((papan[0][0] == 'o' || papan[0][0] == 'O') && 
        (papan[1][1] == 'o' || papan[1][1] == 'O') && 
        (papan[2][2] == 'o' || papan[2][2] == 'O')) {
        abdullah_menang = 1;
    }

    if ((papan[0][2] == 'x' || papan[0][2] == 'X') && 
        (papan[1][1] == 'x' || papan[1][1] == 'X') && 
        (papan[2][0] == 'x' || papan[2][0] == 'X')) {
        johan_menang = 1;
    }
    
    if ((papan[0][2] == 'o' || papan[0][2] == 'O') && 
        (papan[1][1] == 'o' || papan[1][1] == 'O') && 
        (papan[2][0] == 'o' || papan[2][0] == 'O')) {
        abdullah_menang = 1;
    }

    if (johan_menang == 1) {
        printf("Johan har vunnit\n");
    } else if (abdullah_menang == 1) {
        printf("Abdullah har vunnit\n");
    } else {
        printf("ingen har vunnit\n");
    }

    return 0;
}