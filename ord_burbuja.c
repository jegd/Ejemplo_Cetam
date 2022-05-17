#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define size 10

int main()
{
    int ord_vector[size];
    srand(time(NULL));
    printf("Generacion de numeros aleatorios");
    int i= 0, j= 0;
    int aux;
    for(i=0; i<size; i++)
    {
        ord_vector[i] = 100 + rand()%(101);
        printf("\n");
        printf("%d", ord_vector[i]);
    }
for(i = 0; i< size ; i++)
{
for(j = 0; j < size -i -1; j++)
{
    if(ord_vector[j]>ord_vector[j+1])
    {
        aux = ord_vector[j];
        ord_vector[j] = ord_vector[j+1];
        ord_vector[j+1] = aux;
    }

    printf("\n");
    printf("La lista de  numeros ordenados: ");
    for(i=0; i<size; i++)
    {
        printf("\n");
        printf("%d", ord_vector[i]); 
    }
}

}
    
}