#include "circulo.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct Circulo{
        float x;
        float y;
        float raio;
} Circulo;

Circulo *cria_circulo(float x, float y, float raio) {
    Circulo *c = (Circulo *)malloc(sizeof(Circulo));
    if (c != NULL) {
    c -> x = x;
    c -> y = y;
    c -> raio = raio;
    }
    
    return c;
}
void libera_circulo(Circulo *c){
    free(c);
}
float area_circulo(Circulo *c){
    float area;
    area = 3.1415*(c-> raio * c-> raio);
    return area;
}
int circulo_concentricos(Circulo *c1, Circulo *c2){
     if((c1 ->x == c2->x) && (c1->y == c2->y)){
        return 1;
    }else
    return 0;
}

float raio_circulo(Circulo *c){
    return c-> raio;
}
