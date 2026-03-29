#include <stdio.h>

int main (int argc, char *argv[]) {
    
//Desarrolle un programa en lenguaje C que solicite al usuario tres números enteros: Un número inicial, un número final, un valor de incremento
//El programa debe mostrar en pantalla todos los números desde el número inicial hasta el número final, aplicando el incremento indicado, utilizando exclusivamente la estructura for.
    
    //Datos del ejercicio
    int inicio, final, incremento;

    //Planteamiento del problema
    do
    {
    printf("Ingrese el numero inicial: ");
    scanf("%d", &inicio);
    if (inicio<0){
    printf("El valor inicial debe ser mayor que 0\n"); }
    } while (inicio<0);

    do
    {
    printf("Ingrese el numero final: ");
    scanf("%d", &final);
    if (final<=inicio){
    printf("El valor final debe ser mayor que el inicial\n"); }
    } while (final<inicio);

    do
    {
    printf("Ingrese el incremento: ");
    scanf("%d", &incremento);
    if (incremento <= 0){
    printf("El incremento debe ser mayor que 0\n"); }
    } while (incremento <=0); 
    
    //Ciclo for
        for (int i=inicio; i<=final; i+=incremento) {
            printf("%d", i);    
        }

    return 0;
}    



