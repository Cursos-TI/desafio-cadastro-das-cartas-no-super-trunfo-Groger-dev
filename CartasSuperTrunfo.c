#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado_A[10], estado_B[10], cidade1[10], cidade2[10];
    int populacao1, populacao2, turismo1, turismo2;
    float area1, area2, PIB1, PIB2;
    
    //Primeira carta
    printf("Insira o nome do estado: ");
    scanf("%s\n", estado_A);

    printf("Insira o nome de uma cidade pertencente a %s: ", estado_A);
    scanf("%s\n", cidade1);

    printf("Qual é a população de %s?", cidade1);
    scanf("%d\n", &populacao1);

    printf("Qual é a área de %s em km²? ", cidade1);
    scanf("%f\n", &area1);

    printf("Qual é o PIB de %s? ", cidade1);
    scanf("%f\n", &PIB1);

    printf("Quantos pontos turísticos existem em %s? ", cidade1);
    scanf("%d\n", &turismo1);

    //Impressão da primeira carta
    printf("Carta A01 cadastrada com sucesso!");

    printf("Estado: %s\n", estado_A);
    printf("Cidade: %s\n", cidade1);
    printf("População de %s: %d\n", cidade1, populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos turísticos: %d\n", turismo1);

        
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
