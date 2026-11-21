#include <stdio.h>
// Programa que imprima un histograma de las longitudes de las palabras de la entrada (Horizontal)
int main(void) {
    int c, i, j;
    int w_l = 0;
    int m_l = 0;
    int lengths[100] = {0}; // Esto para almacenar la longitud de las palabras

    // Leer la entrada carácter por carácter
    while ((c = getchar()) != EOF) {
// Si hay un espacio o salto de linea indica el final de una palabra. 
        if (c == ' ' || c == '\n' || c == '\t') {
            if (w_l > 0) {
                lengths[w_l]++;
                if (w_l > m_l) {
                    m_l = w_l;
                }
                w_l = 0; // Reiniciar la longitud de la palabra
            }
        } else {
            w_l++;// cuanta la palabra actual.
        }
    }

    // Caso de que la última palabra no termine en espacio o nueva línea
    if (w_l > 0) {
        lengths[w_l]++;
        if (w_l > m_l) {
            m_l = w_l;
        }
    }

    // Imprimir el histograma horizontal
    for (i = 1; i <= m_l; i++) {
        printf("%2d: ", i);
        for (j = 0; j < lengths[i]; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;// Indica que el programa terminó. 
}