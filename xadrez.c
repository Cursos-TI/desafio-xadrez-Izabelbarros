#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

// Constantes para as movimentações
#define MOV_BISPO_DIAGONAL 5
#define MOV_TORRE_DIREITA 5
#define MOV_RAINHA_ESQUERDA 8

int main() {
    // --- Simulação de Movimentação do Bispo (usando loop for) ---
    printf("--- Movimentacao do Bispo (Diagonal Superior Direita) ---\n");
    // O bispo move-se 5 casas na diagonal superior direita.
    // Para simplificar a representação, cada iteração imprimirá "CimaDireita".
    for (int i = 0; i < MOV_BISPO_DIAGONAL; i++) {
        printf("CimaDireita\n"); // Representa um passo na diagonal
    }
    printf("\n"); // Adiciona uma linha em branco para melhor legibilidade

    // --- Simulação de Movimentação da Torre (usando loop while) ---
    printf("--- Movimentacao da Torre (Direita) ---\n");
    // A torre move-se 5 casas para a direita.
    int passosTorre = 0;
    while (passosTorre < MOV_TORRE_DIREITA) {
        printf("Direita\n"); // Representa um passo para a direita
        passosTorre++;      // Incrementa o contador de passos
    }
    printf("\n"); // Adiciona uma linha em branco para melhor legibilidade

    // --- Simulação de Movimentação da Rainha (usando loop do-while) ---
    printf("--- Movimentacao da Rainha (Esquerda) ---\n");
    // A rainha move-se 8 casas para a esquerda.
    int passosRainha = 0;
    // O loop do-while garante que a movimentação ocorra pelo menos uma vez,
    // o que é adequado, já que a rainha sempre se moverá se a condição for verdadeira.
    do {
        printf("Esquerda\n"); // Representa um passo para a esquerda
        passosRainha++;       // Incrementa o contador de passos
    } while (passosRainha < MOV_RAINHA_ESQUERDA);
    printf("\n"); // Adiciona uma linha em branco para melhor legibilidade

    return 0; // Indica que o programa foi executado com sucesso
}