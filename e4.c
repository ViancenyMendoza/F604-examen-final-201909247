#include <stdio.h>

// Código que genere una tabla de conversión de Celsius a  Fahrenheit    
// Prácticamente copie el código de e3.c y solo cambie las formulas y los nombres de las variables y los encabezados de las tamblas.

/* for f = 0, 20, ..., 300 */
int main(void)
{
    int lower, upper, step;
    float celsius, fahr;

    lower = 0;      
    upper = 300;    
    step = 20;      
 
    printf("Tabla de Conversion Celsius - Fahrenheit\n");
    printf("Celsius  Fahrenheit\n");

    celsius = lower;
    while (celsius <= upper) {
        fahr = (9.0/5.0) * celsius + 32.0;
        printf("%4.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}