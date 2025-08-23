#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    // Dados solicitados da carta 1.

    int Carta = 1;
    char Estado [20] = "Goiás";
    char Codigo [20] = "G01";
    char Cidade [20] = "Goiãnia";
    int Populacao = 8440000;
    float Area = 2545.22;
    float Pib = 625.77;
    int Pontos = 16;
    
    // Exibindo dados da Carta 1.

    printf("Desafio Super Trunfo!\n\n");
    printf("Carta: %d\n" , Carta);
    printf("Estado: %s\n" , Estado);
    printf("Código: %s\n" , Codigo);
    printf("Nome da cidade: %s\n" , Cidade);
    printf("População: %d\n" , Populacao);
    printf("Área: %f km²\n" , Area);
    printf("PIB: %f bulhões de reais\n" , Pib);
    printf("Número de pontos turísticos: %d\n\n" , Pontos);

    // Dados solicitados da carta 2.

    int carta = 2;
    char estado [20] = "Amazonas";
    char codigo [20] = "A01";
    char cidade [20] = "Manaus";
    int populacao = 16256000;
    float area = 25245.11;
    float pib = 898.44;
    int pontos = 34;

    // Exibindo dados da carta 2
    
    printf("Carta: %d\n" , carta);
    printf("Estado: %s\n" , estado);
    printf("Código: %s\n" , codigo);
    printf("Nome da cidade: %s\n" , cidade);
    printf("População: %d\n" , populacao);
    printf("Área: %f Km²\n" , area);
    printf("PIB: %f bilhões de reais\n" , pib);
    printf("Número de pontos turísticos: %d\n\n" , pontos);



    return 0;
}
