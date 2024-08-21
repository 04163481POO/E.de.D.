#include <stdio.h>

typedef struct{
    int Peso; //Peso em quilogramas.
    int Altura; //Altura em centímetros.
} PesoAltura;



int main() {
    PesoAltura Pessoa;
    Pessoa.Altura = 180;
    Pessoa.Peso = 95; 
    printf("Peso: %i\nAltura: %i\n", Pessoa.Altura, Pessoa.Peso);
    return 0;   
}