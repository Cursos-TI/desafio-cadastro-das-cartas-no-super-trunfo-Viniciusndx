#include <stdio.h>
//criando o super trunfo - novato

int main() { 
    char estado[];
    char codigo[];
    char nome[];
    int populacao;
    float àrea;
    float Pib;
    int turisticos;
    float densidade;
    float capita;

    printf ("Super Trunfo!\n");
    printf( "Chegou a hora de cadastrar as informaçoes da primeira carta!!\nPreparados?!\n\n");

    //desenvolvendo as cartas

    printf("digite a cidade: \n");
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

    &densidade = populacao / àrea
    &capita = Pib / populacao

    printf("Aqui está a primeira carta: \n\n");
    printf("Carta 1\n");
    printf("O estado é: %s\n", estado);
    printf("O codigo da carta é: %s\n", codigo);
    printf("A cidade é: %s\n", nome);
    printf("O numero populacional é: %d\n", populacao);
    printf("A àrea é de: %2.f Km²\n", àrea);
    printf("O PIB é: %2.f Bilhoes de reais\n", Pib);
    printf("Os pontos turisticos é: %d\n\n", turisticos);
    printf("A densidade populacional é: %2.f\n", densidade);
    printf("O PIB per capita é: %2.f\n", capita);


    printf( "Chegou a hora de cadastrar as informaçoes da segunda carta!!\nPreparados?!\n\n");


    printf("digite a cidade: \n");
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


    printf("Aqui está a segunda carta: \n\n");
    printf("Carta 2");
    printf("O estado é: %s\n", estado);
    printf("O codigo da carta é: %s\n", codigo);
    printf("A cidade é: %s\n", nome);
    printf("O numero populacional é: %d\n", populacao);
    printf("A àrea é de: %2.f Km²\n", àrea);
    printf("O PIB é: %2f Bilhoes de reais\n", Pib);
    printf("Os pontos turisticos é: %d\n", turisticos);

    

}