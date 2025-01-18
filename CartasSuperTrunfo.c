#include <stdio.h>

struct Cidade{
     char codigo[5];            // Código da cidade (ex: A01, B02, C03)
    int populacao;             // População da cidade
    float area;                // Área da cidade (em km²)
    float pib;                 // PIB da cidade (em bilhões de USD)
    int pontos_turisticos;     // Número de pontos turísticos da cidade


};

int main(){
    struct Cidade cidade;

    // Cadastro das Cartas:
    printf("Digite o código da cidade (ex: A01, B02, C03): ");
    scanf("%s", cidade.codigo);

    printf("Digite a população da cidade: ");
    scanf("%d", &cidade.populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &cidade.area);

    printf("Digite o PIB da cidade (em bilhões de USD): ");
    scanf("%f", &cidade.pib);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &cidade.pontos_turisticos);

    // Exibindo os dados cadastrados
    printf("\n--- Dados Cadastrados da Cidade ---\n");
    printf("Código da cidade: %s\n", cidade.codigo);
    printf("População: %d\n", cidade.populacao);
    printf("Área: %.2f km²\n", cidade.area);
    printf("PIB: %.2f bilhões de USD\n", cidade.pib);
    printf("Pontos turísticos: %d\n", cidade.pontos_turisticos);
    return 0;
}
