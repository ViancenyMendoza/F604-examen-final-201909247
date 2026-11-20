#include <stdio.h>
//Pide escribir un nombre y lo implime en la pantalla
int main() {
    char name[30];
// Lo de [30] tome la idea de un ejercicio  de Abrirllave.com

    printf("Ingrese un nombre\n");
    scanf("%29s", name); 
    printf("Hola %s\n", name);
    

    return 0;
}