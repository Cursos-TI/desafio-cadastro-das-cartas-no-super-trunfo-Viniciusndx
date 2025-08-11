#include <stdio.h>
//criando o super trunfo - novato

int main() { 
    char estado;
    char codigo[4];
    char nome[20];
    int populacao;
    float àrea;
    float PIB;
    int turisticos;

    printf ("Super Trunfo!\n");
    printf( "Chegou a hora de cadastrar as informaçoes.\nPreparados?!\n");

    //desenvolvendo as cartas

    printf("digite o nome: \n");
    scanf("%s", &nome);
    
    printf("digite o codigo: \n");
    scanf("%s", &codigo);

    printf("digite a área: \n");
    scanf("%f", &àrea);

    printf("digite a população: \n");
    scanf("%d", &populacao);
    
    printf("digite o PIB: \n");
    scanf("%f", &PIB);

    printf("digite o numero de pontos turisticos: \n");
    scanf("%d", &turisticos);

    printf("digite o estado: \n");
    scanf("%c", &estado);

    printf("Aqui está a primeira carta: \n");
    printf("O estado é: %c\n", estado);
    printf("O codigo é: %s\n", codigo);
    printf("O nome é: %s\n", nome);
    printf("A população é: %d\n", populacao);
    printf("A àrea é: %f\n", àrea);
    printf("O PIB é: %2.f\n", PIB);
    printf("Os pontos turisticos é: %d\n", turisticos);

    

}