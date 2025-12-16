#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // ----------------------------------------------------------------------------------
    // 1. Área para definição das variáveis
    // ----------------------------------------------------------------------------------
    // Utilizamos vetores de char (char[]) para armazenar textos (strings).
    // O número entre colchetes [50] é o tamanho máximo do texto.
    char pais[50];
    char estado[50];
    char nomeCidade[50];
    
    // Variáveis inteiras (int) para contagens exatas (população e pontos turísticos).
    int populacao;
    int pontosTuristicos;
    
    // Variáveis de ponto flutuante (float) para números com vírgula (área e PIB).
    float area;
    float pib;

    // ----------------------------------------------------------------------------------
    // 2. Área para entrada de dados
    // ----------------------------------------------------------------------------------
    printf("=== CADASTRO DA CARTA SUPER TRUNFO ===\n\n");

    // Solicitando o País
    printf("Digite o nome do Pais (sem espacos): ");
    scanf("%s", pais); // O scanf com %s lê uma palavra simples

    // Solicitando o Estado
    printf("Digite o Estado (sem espacos): ");
    scanf("%s", estado);

    // Solicitando o nome da Cidade
    printf("Digite o nome da Cidade (sem espacos): ");
    scanf("%s", nomeCidade);

    // Solicitando a População
    printf("Digite a Populacao (numero inteiro): ");
    scanf("%d", &populacao); // %d é usado para inteiros. Note o & antes da variável

    // Solicitando a Área
    printf("Digite a Area em km2 (use ponto para decimais): ");
    scanf("%f", &area); // %f é usado para float

    // Solicitando o PIB
    printf("Digite o PIB (use ponto para decimais): ");
    scanf("%f", &pib);

    // Solicitando o número de pontos turísticos
    printf("Digite a quantidade de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos);

    // ----------------------------------------------------------------------------------
    // 3. Área para exibição dos dados da cidade
    // ----------------------------------------------------------------------------------
    printf("\n========================================\n");
    printf("      DADOS DA CARTA CADASTRADA         \n");
    printf("========================================\n");
    
    // Exibindo textos (%s)
    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", nomeCidade);
    
    // Exibindo inteiros (%d)
    printf("Populacao: %d habitantes\n", populacao);
    
    // Exibindo reais (%f). O .2 antes do f serve para mostrar apenas 2 casas decimais.
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f bilhoes\n", pib);
    
    // Exibindo inteiros (%d)
    printf("Pontos Turisticos: %d\n", pontosTuristicos);
    printf("========================================\n");

    return 0;
}
