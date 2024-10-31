#include <stdio.h>
#include <stdlib.h>
#include "Ponto.h"

int main(){
    float d;
    Ponto *p, *q;
    //Ponto r; //ERRO

    p = pto_cria(10, 21);
    q = pto_cria(7,25);
    // q->x = 2; //ERRO
    d = pto_distancia(p,q);
    printf("Distancia entre pontos: %f\n",d);
    pto_libera(p);
    pto_libera(q);

    system("pause");
    return 0;

}

void MOVEVAR(char origem[], char destino[]) {
    // Determina o tamanho da string de origem
    int i = 0;
    while (origem[i] != '\0') {
        // Copia cada caractere da origem para o destino
        destino[i] = origem[i];
        i++;
    }
    destino[i] = '\0'; // Termina a string de destino
}

void CONCATVAR(char string1[], char string2[], char resultado[]){
    int i = 0;
    //Copia a primeira string para o resultado
    while(string1[i] != '\0'){
        resultado[i] = string1[i];
    }
    int j = 0;
    // Copia a segunda string para o resultado após a primeira
    while (string2[j] != '\0') {
        resultado[i + j] = string2[j];
        j++;
    }
    resultado[i + j] = '\0'; // Termina a string de resultado
}



