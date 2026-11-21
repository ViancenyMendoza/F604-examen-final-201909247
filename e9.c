#include <stdio.h>
//Programa que reemplace cada tabulación por la secuencia de tres caracteres >, retroceso,-, y cada retroceso por la secuencia similar con <. Esto hace
//visibles las tabulaciones y los retrocesos 
int main(void) {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('>'); // Imprime el carácter '>'
            putchar('\b');// Imprime el carácter de retroceso
            putchar('-'); // Imprime el carácter '-'
        } else if (c == '\b') {
            putchar('<'); // Imprime el carácter '<'
            putchar('\b'); // Imprime el carácter de retroceso
            putchar('-'); // Imprime el carácter '-'
        } else {
            putchar(c);
        }
    }
    return 0; // para indicar que el programa terminó de forma exitosa. eeeeeh 
}