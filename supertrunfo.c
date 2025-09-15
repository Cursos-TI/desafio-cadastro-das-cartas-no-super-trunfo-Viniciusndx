#include <stdio.h>
int main(){ // Declaração de início;

char estado1, codigo1[4], nomecidade1[50], estado2, codigo2[4], nomecidade2[50]; 
// Declaração variáveis "char"
int pontosturisticos1, pontosturisticos2, resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;
// Declaração variáveis "int"
float area1, densidade1, area2, densidade2, pib1, percapita1, pib2, percapita2; 
// Declaração variáveis "float"
long double populacao1, superpoder1, populacao2, superpoder2;

printf ("Super Trunfo!\n"); 
printf( "Chegou a hora de cadastrar as informaçoes da primeira carta!!\nPreparados?!\n\n");;
//Apresenta na tela o texto, e inicia o cadastro da carta

// Apartir de agora o codigo comeca a exibir, ler e armazenar os dados de entrada do usuário

printf("Digite o Estado (uma letra de 'A' a 'H' - representando um dos oito estados): \n");
scanf("%c", &estado1); 
printf("Digite o código da carta (a letra do estado seguida de um número de 01 a 04 - ex: A01, B03): \n"); 
scanf("%s", &codigo1); 
printf("Digite o nome da Cidade: \n"); 
scanf("%s", &nomecidade1); 
printf("Digite a população: \n"); 
scanf("%ld", &populacao1); 
printf("Digite a área (em km²): \n"); 
scanf("%f", &area1); 
densidade1=populacao1/area1; 
// "Densidade Populacional" População / Área;

printf("Digite o PIB (em reais): \n"); 
scanf("%f", &pib1); 
percapita1=pib1/populacao1; 
// "PIB per Capita  PIB / População";

printf("Digite o número de pontos turísticos: \n");
scanf("%d", &pontosturisticos1); 
superpoder1 = populacao1 + pontosturisticos1 + area1 + pib1 + densidade1 + percapita1;


printf("\nAgora é a hora de cadastrar as informaçoes da segunda carta!!\nPreparados?!\n\n");
//Apresenta na tela o texto, e inicia o cadastro da segunda carta

//Apartir de agora o codigo comeca a exibir, ler e armazenar os dados de entrada do usuário                                                                                  
printf("Digite o Estado (uma letra de 'A' a 'H' - representando um dos oito estados): \n"); 
scanf(" %c", &estado2); 
printf("Digite o código da carta (a letra do estado seguida de um número de 01 a 04 - ex: A01, B03): \n"); 
scanf("%s", &codigo2); 
printf("Digite o nome da Cidade: \n"); 
scanf("%s", &nomecidade2); 
printf("Digite a população: \n"); 
scanf("%ld", &populacao2); 
printf("Digite a área (em km²): \n"); 
scanf("%f", &area2); 
densidade2=populacao2/area2; 
// "Densidade Populacional" População / Área

printf("Digite o PIB (em reais): \n"); 
scanf("%f", &pib2); 
percapita2=pib2/populacao2;
// "PIB per Capita PIB / População";

printf("Digite o número de pontos turísticos: \n"); 
scanf("%d", &pontosturisticos2); 
superpoder2 = populacao2 + pontosturisticos2 + area2 + pib2 + densidade2 + percapita2;
// apresentando as cartas na tela, juntamente com os resultados da variaveis;
printf("Aqui estão as cartas cadastradas: \n\n"); 

printf("Carta 1: \n");
printf("Estado: %c\n", estado1);  
printf("Código: %s\n", codigo1);  
printf("Nome da Cidade: %s\n", nomecidade1);  
printf("População: %ld\n", populacao1);  
printf("Área: %.2f km² \n", area1);  
printf("PIB: %.2f bilhoes de reais \n", pib1);  
printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);  
printf("Densidade Populacional: %.2f hab/km² \n", densidade1);  
printf("PIB per Capita: %.2f reais \n ", percapita1);  
printf("O Super Poder é: %.2ld\n", superpoder1);

printf("\nCarta 2: \n"); 
printf("Estado: %c \n", estado2);  
printf("Código: %s \n", codigo2);  
printf("Nome da Cidade: %s \n", nomecidade2);  
printf("População: %ld \n", populacao2);  
printf("Área: %.2f km² \n", area2);  
printf("PIB: %.2f reais \n", pib2);  
printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);  
printf("Densidade Populacional: %.2f hab/km² \n", densidade2);  
printf("PIB per Capita: %.2f reais \n\n", percapita2); 
printf("O Super Poder é: %.2ld\n", superpoder2);

//comparacao entre as cartas agora
resultado1 = populacao1 > populacao2;
resultado2 = area1 > area2;
resultado3 = pib1 > pib2;
resultado4 = pontosturisticos1 > pontosturisticos2;
resultado5 = densidade1 > densidade2;
resultado6 = percapita1 > percapita2;
resultado7 = superpoder1 > superpoder2;
printf(" Aqui esta a comparação entre os dados das cartas!\n");
printf("População: %d\n", resultado1);
printf("Área: %d\n", resultado2);
printf("Pib: %d\n", resultado3);
printf("Pontos Turisticos: %d\n", resultado4);
printf("Densidade Populacional: %d\n", resultado5);
printf("Pib Percapita: %d\n", resultado6);
printf("Super Poder: %d\n", resultado7);

// Declaração de fim com sucesso e sem erros.
return 0; 
}