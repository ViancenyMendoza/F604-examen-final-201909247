#include <stdio.h>
#define ML 1000
#define LIMIT 80
//  Programa que imprima todas las líneas de la entrada que tengan más de 80 caracteres. (por eso tenemos limit 80)
// nos basamos del código anterior 
int main(void) {
    char line[ML];
    int c, i;
    int len = 0;

    while ((c = getchar()) != EOF) {
        if (c != '\n') {
            if (len < ML - 1) {
                line[len] = c;
                len++;
            }
        } else {
// Solo imprimimos las líneas que tengan más de 80 caracteres. 
         
            if (len > LIMIT) {
                for (i = 0; i < len; i++) {
                    putchar(line[i]);
                }
                putchar('\n');
            }
            len = 0; // Reiniciar la longitud de la línea para la siguiente entrada
        }
    }

    // Caso de que la última línea no termine en \n
    if (len > LIMIT) {
        for (i = 0; i < len; i++) {
            putchar(line[i]);
        }
        putchar('\n');
    }

    return 0;
}