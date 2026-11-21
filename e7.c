#include <stdio.h>
#include <string.h>
#define ML 1000 // ya entendí para que funciona esto, es para definir el tamaño máximo de la línea que se va a leer. o eso creo 

// Función reverse(s) que invierta la cadena de caracteres. Con ello se hizo un  programa que invierte su entrada línea por línea.
// Encontre un ejemplo que me ayudo a entender este ejercicio solo me base no copie literal https://herovired.com/learning-hub/blogs/reverse-a-string-in-c
void reverse(char s[]) {
    int i, j;
    char temp;
// encontrar el final de la cadena y luego intercambiar los caracteres desde el principio y el final hasta llegar al medio.
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}
 int main(void) {
    char line[ML];
    int c, len = 0;
// aquí se lee entrada carácter por carácter hasta llegar a EOF (fin del archivo).
    while ((c = getchar()) != EOF) {
        if (c != '\n') {
            if (len < ML - 1) {
                line[len] = c;
                len++;
            }
        } else {
            line[len] = '\0'; // Agregar el carácter nulo al final de la línea
            reverse(line); // Llamar a la función para invertir la línea
            printf("%s\n", line); // Llamar a la función para imprimir la línea invertida
            len = 0; // Reiniciar la longitud de la línea para la siguiente entrada
        }
    }

    // Caso de que la última línea no termine en \n
    if (len > 0) {
        line[len] = '\0'; 
        reverse(line); // Llamar a la función para invertir la línea
        printf("%s\n", line); // Llamar a la función para imprimir la línea invertida
    }

    return 0;
    

}