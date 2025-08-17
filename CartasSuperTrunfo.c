#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado_A[50], estado_B[50], cidade1[50], cidade2[50], codigo1[10], codigo2[10];
    int populacao1, populacao2, turismo1, turismo2;
    float area1, area2, PIB1, PIB2;
    

    //Cadastro da primeira carta
    printf("Insira o código da primeira carta: ");
    scanf(" %s", codigo1);
    
    printf("Insira o nome do estado: ");
    scanf(" %50[^\n]", estado_A);

    printf("Insira o nome de uma cidade pentencente a %s: ", estado_A);
    scanf(" %50[^\n]", cidade1);

    printf("Qual é a população de %s? ", cidade1);
    scanf(" %d", &populacao1);

    printf("Qual é a área de %s em km²? ", cidade1);
    scanf(" %f", &area1);

    printf("Qual é o PIB de %s? ", cidade1);
    scanf(" %f", &PIB1);

    printf("Quantos pontos turísticos existem em %s? ", cidade1);
    scanf(" %d", &turismo1);


    //Impressão da primeira carta
    printf("Carta cadastrada com sucesso!\n");

    
    printf("Estado: %s\n", estado_A);
    printf("Cidade: %s\n", cidade1);
    printf("População de %s: %d\n", cidade1, populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos turísticos: %d\n", turismo1);
    printf("Código: %s\n", codigo1);


    //Cadastro da segunda carta
    printf("Insira o código da segunda carta: ");
    scanf(" %s", codigo2);

    printf("Insira o nome do estado: ");
    scanf(" %50[^\n]", estado_B);

    printf("Insira o nome de uma cidade pertencente a %s: ", estado_B);
    scanf(" %50[^\n]", cidade2);

    printf("Qual é a população de %s? ", cidade2);
    scanf(" %d", &populacao2);

    printf("Qual é a área de %s em km²? ", cidade2);
    scanf(" %f", &area2);

    printf("Qual é o PIB de %s? ", cidade2);
    scanf(" %f", &PIB2);

    printf("Quantos pontos turísticos existem em %s? ", cidade2);
    scanf(" %d", &turismo2);

    //Impressão da segunda carta
    printf("Carta cadastrada com sucesso!\n");

    printf("Estado: %s\n", estado_B);
    printf("Cidade: %s\n", cidade2);
    printf("População de %s: %d\n", cidade2, populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos turísticos: %d\n", turismo2);
    printf("Código: %s\n", codigo2);
    
        
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
