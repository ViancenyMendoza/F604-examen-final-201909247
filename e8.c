#include <stdio.h>
// Programa que copia su entrada a su salida, reemplazando cada cadena de uno o más espacios en blanco por un solo espacio en blanco.
int main(void) {
    int c;
    int prev_is_space = 0;


while ((c = getchar()) != EOF) {
    if (c == ' ') {
    // solo imprime un espacio en blanco si el carácter anterior no era un espacio 
            if (!prev_is_space) {
                putchar(c);
                prev_is_space = 1;
            }
        } else {
            putchar(c);
            prev_is_space = 0;
        }
    }
    return 0;
}