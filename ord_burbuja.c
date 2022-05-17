#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define size 10

int main()
{
    int ord_vector[size];
    srand(time(NULL));
    printf("Generacion de numeros aleatorios");
    int i= 0;
    for(i=0; i<size; i++)
    {
        ord_vector[i] = 100 + rand()%(101);
        printf("\n");
        printf("%d", ord_vector[i]);
    }

    
}