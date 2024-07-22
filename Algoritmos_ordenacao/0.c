#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void imprime(int vet[], int tam){
    printf("[ ");
    for(int i=0; i<tam; i++){
        printf("%d ",vet[i]);
    }
    printf("]\n");
}

void bubbleSort(int vet[],int tam){

    int troca, copy;

    while (troca){
        troca = 0;
        for(int i=0; i<tam-1; i++){
            if(vet[i]>vet[i+1]){
                copy = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = copy;
                troca = 1;
            }
        }
    }
}

int main(void){

    srand(time(NULL));

    int tam = 20;
    int vetr[tam];

    for(int i=0; i<tam; i++){
        vetr[i] = rand() % 100;
    }

    printf("\nBefore -> ");
    imprime(vetr,tam);
    
    bubbleSort(vetr, tam);

    printf("\nAfter  -> ");
    imprime(vetr,tam);

    return 0;
}