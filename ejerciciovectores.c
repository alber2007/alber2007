#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main()
{ 
    int A[10]; 
    srandom(time(NULL));

    
    for (int i = 0; i < 10; i++) {
    A[i] = random() % 100; 
    scanf("%d", &A[i]); }
    
    for (int i = 0; i < 10; i++) 
    { printf("%d ", A[i]);
    
    }
}