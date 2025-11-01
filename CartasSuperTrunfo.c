#include <stdio.h>

// Desafio Super Trunfo - Países
//desafio aventuireiro

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
      
    char estado1 , estado2;
    char codigo1[10] , codigo2 [10];
    char nomecidade1[30] , nomecidade2 [30];
    int populacao1 , populacao2;
    float area1 , area2;
    float pib1 , pib2;
    int pontosturisticos1 , pontosturisticos2;
    float densidadepopulacional1 , densidadepopulacional2;  //população dividido pela area
    float pibpercapta1, pibpercapta2;  //pib dividido pela populacao

    printf("***desafio supertrunfo novato***\n\n");
   

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("cadastrando a carta 01: \n\n");


    printf("escolha uma letra para seu estado: ");
    scanf("%c", &estado1);

    printf("escoha uma letra seguida de dois numeros para o codigo da sua carta: ");
    scanf("%s", codigo1);

    printf("digite o nome da cidade: ");
    scanf("%s", nomecidade1);

    printf("digite o numero de habitantes da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade (em km²): ");
    scanf("%f", &area1);

    printf("digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

    // inserindo a carta de numero 2

    printf("cadastrando a carta 02: \n\n");


    printf("escolha uma letra para seu estado: ");
    scanf("%c", &estado2);

    printf("escoha uma letra seguida de dois numeros para o codigo da sua carta: ");
    scanf("%s", codigo2);

    printf("digite o nome da cidade: ");
    scanf("%s", nomecidade2);

    printf("digite o numero de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade (em km²): ");
    scanf("%f", &area2);

    printf("digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("resultado da carta 01: \n\n");

    printf("a letra do seu estado é: %c\n", estado1);
    printf("o codigo da sua carta é: %s\n", codigo1);
    printf("o nome da cidade é: %s\n", nomecidade1);
    printf("a população da cidade é: %d\n", populacao1);
    printf("a area da cidade em quilometros quadrados é: %f\n", area1);
    printf("o produto interno bruto da cidade é: %f\n", pib1);
    printf("a quantidade de pontos turisticos da cidade é: %d", pontosturisticos1);
    
    densidadepopulacional1 = populacao1 / area1;
    pibpercapta1 = pib1 / populacao1;
    printf("densidade populacional da carta 1 é: %.2f\n", densidadepopulacional1);
    printf("o pib per capta da carta 1 é %.2f\n\n", pibpercapta1);
    

    printf("resultado da carta 02: \n\n");

    printf("a letra do seu estado é: %c\n", estado2);
    printf("o codigo da sua carta é: %s\n", codigo2);
    printf("o nome da cidade é: %s\n", nomecidade2);
    printf("a população da cidade é: %d\n", populacao2);
    printf("a area da cidade em quilometros quadrados é: %f\n", area2);
    printf("o produto interno bruto da cidade é: %f\n", pib2);
    printf("a quantidade de pontos turisticos da cidade é: %d\n", pontosturisticos2);
    
    densidadepopulacional2 = populacao2 / area2;
    pibpercapta1 = pib2 / populacao2;
    printf("densidade populacional da carta 2 é: %.2f\n", densidadepopulacional2);
    printf("o pib per capta da carta 2 é %.2f\n", pibpercapta2);


    return 0;
}
