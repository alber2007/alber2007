#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main()
{ 
    
    int n;
    srand(time(NULL));
   
        do {
        printf("Ingrese la cantidad de elementos: ");
        scanf("%d", &n);
        if (n<0){
        printf("El valor n debe ser mayor que 0\n");   
        }
        }while (n<0);
        int A[n];
       
    for (int i = 0; i < n; i++) {
        A[i] = rand() % 100;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }