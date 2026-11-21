#include <stdio.h>
//Pide escribir un nombre e imprime en la pantalla Hola <nombre>
int main() {
    char name[30];
// Lo de [30] tome la idea de un ejercicio  de Abrirllave.com

    printf("Ingrese un nombre\n");
    scanf("%29s", name); 
    printf("Hola %s\n", name);
    

    return 0;
}