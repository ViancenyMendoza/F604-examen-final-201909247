#include <stdio.h>
#define ML 1000
//El código elimina los espacios en blanco y las tabulaciones al finalde cada línea de entrada, y que borre las líneas que queden completamente en blanco.

int main(void) {
    char line [ML];
    int c, i;
    int len = 0;

    while ((c = getchar()) != EOF) {
        if (c != '\n') {
          if (len < ML - 1) {  
          line[len++] = c; 
        } 
    } else {
// Eliminar los espacios en blanco y las tabulaciones al final de la línea
            while (len > 0 && (line[len - 1] == ' ' || line[len - 1] == '\t')) {
                len--;
            }

//Si alguna línea contine aún texto, se imprime con salto de línea  
         if (len > 0) {
            for (i = 0; i < len; i++) {
                putchar(line[i]);
            }
            putchar('\n');
        } 
        len = 0; // Reiniciar la longitud de la línea para la siguiente entrada   
       }
    }
    // Caso de que la última línea no termine en \n 
        while (len > 0 && (line[len - 1] == ' ' || line[len - 1] == '\t')) {
            len--;
        
         }
        if (len > 0) {
            for (i = 0; i < len; i++) {
                putchar(line[i]);
            }
            putchar('\n');
        }
        return 0;
}