#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main()
{ 
    
    int n;
    srand(time(NULL));
        printf("Ingrese la cantidad de elementos: ");
        scanf("%d", &n);
       int A[n]; 
    for (int i = 0; i < n; i++) {
        A[i] = rand() % 100;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}