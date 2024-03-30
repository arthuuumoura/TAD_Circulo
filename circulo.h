typedef struct Circulo Circulo;

Circulo *cria_circulo(float x, float y, float raio);

void libera_circulo(Circulo *c);

float area_circulo(Circulo *c);

int circulo_concentricos(Circulo *c1, Circulo *c2);

float raio_circulo(Circulo *c);