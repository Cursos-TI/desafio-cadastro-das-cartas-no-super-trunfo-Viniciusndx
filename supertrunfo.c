#include <stdio.h>
//criando o super trunfo - novato

int main() { 
    char estado[20];
    char codigo[4];
    char nome[20];
    int populacao;
    float àrea;
    float Pib;
    int turisticos;

    printf ("Super Trunfo!\n");
    printf( "Chegou a hora de cadastrar as informaçoes da primeira carta!!\nPreparados?!\n\n");

    //desenvolvendo as cartas

    printf("digite o nome: \n");
    scanf("%s", &nome);

    printf("digite o estado: \n");
    scanf("%s", &estado);
    
    printf("digite o codigo: \n");
    scanf("%s", &codigo);

    printf("digite a área: \n");
    scanf("%f", &àrea);

    printf("digite a população: \n");
    scanf("%d", &populacao);
    
    printf("digite o PIB: \n");
    scanf("%f", &Pib);

    printf("digite o numero de pontos turisticos: \n");
    scanf("%d", &turisticos);


    printf("Aqui está a primeira carta: \n\n");
    printf("Carta 1");
    printf("O estado é: %c\n", estado);
    printf("O codigo da carta é: %s\n", codigo);
    printf("A cidade é: %s\n", nome);
    printf("O numero populacional é: %d\n", populacao);
    printf("A àrea é de: %2.f\n Km²", àrea);
    printf("O PIB é: %2f\n Bilhoes de reais", Pib);
    printf("Os pontos turisticos é: %d\n", turisticos);

    

}