#include <stdio.h>

// Código que genere una tabla de conversión de  Fahrenheit  Celsius a  

/* print Fahrenheit-Celsius table
   for f = 0, 20, ..., 300 */
int main(void)
{
    int lower, upper, step;
    float fahr, celsius;

    lower = 0;      
    upper = 300;    
    step = 20;      

    /* Título y encabezados de la tabla esto fue lo único que agregue, lo demás solo lo copie */ 
    printf("Tabla de Conversion Fahrenheit - Celsius\n");
    printf("Fahr  Celsius\n");

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%4.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}