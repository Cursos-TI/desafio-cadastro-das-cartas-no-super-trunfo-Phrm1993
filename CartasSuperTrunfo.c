#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado;
    char codigo[10];
    char nomecidade[30];
    int populacao;
    float area;
    float Pib;
    int pontosturisticos;

    printf("desafio supertrunfo novato\n");
   

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("escolha uma letra para seu estado:");
    scanf("%c", &estado);

    printf("escoha uma letra seguida de dois numeros para o codigo da sua carta:");
    scanf("%s", codigo);

    printf("digite o nome da cidade:");
    scanf("%s", nomecidade);

    printf("digite o numero de habitantes da cidade:");
    scanf("%d", &populacao);

    printf("Digite a area da cidade (em km²):");
    scanf("%f", &area);

    printf("digite o PIB da cidade:");
    scanf("%f", &Pib);

    printf("digite a quantidade de pontos turisticos:");
    scanf("%d", &pontosturisticos);



    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("a letra do seu estado é: %c\n", estado);
    printf("o codigo da sua carta é: %s\n", codigo);
    printf("o nome da cidade é: %s\n", nomecidade);
    printf("a população da cidade é: %d\n", populacao);
    printf("a area da cidade em quilometros quadrados é: %f\n", area);
    printf("o produto interno bruto da cidade é: %f\n", Pib);
    printf("a quantidade de pontos turisticos da cidade é: %d\n", pontosturisticos);

    return 0;
}
