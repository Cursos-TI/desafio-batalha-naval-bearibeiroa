#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    int tabuleiro[5][5]= {{0}};
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Posicionando navio horizontal (3 posições) na primeira linha
    tabuleiro[0][1] = 3;
    tabuleiro[0][2] = 3;
    tabuleiro[0][3] = 3;
    // Posicionando navio vertical (2 posições) na terceira coluna
    tabuleiro[2][4] = 3;
    tabuleiro[3][4] = 3;
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    // Exibindo coordenadas do navio horizontal
    printf("Coordenadas do navio horizontal:\n");
    printf("Parte 1: [%d,%d]\n", 0, 1);
    printf("Parte 2: [%d,%d]\n", 0, 2);
    printf("Parte 3: [%d,%d]\n", 0, 3);

    // Exibindo coordenadas do navio vertical
    printf("\nCoordenadas do navio vertical:\n");
    printf("Parte 1: [%d,%d]\n", 2, 4);
    printf("Parte 2: [%d,%d]\n", 3, 4);

    printf("Tabuleiro com os navios:\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal

    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    int tabuleiroMaior[10][10] = {{0}};

    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.

    // Navio 1 - Horizontal (3 posições) - usando número 1
    tabuleiroMaior[0][1] = 1;
    tabuleiroMaior[0][2] = 1;
    tabuleiroMaior[0][3] = 1;

    // Navio 2 - Vertical (2 posições) - usando número 2
    tabuleiroMaior[2][4] = 2;
    tabuleiroMaior[3][4] = 2;

    // Navio 3 - Diagonal (3 posições) - usando número 3
    tabuleiroMaior[5][5] = 3;
    tabuleiroMaior[6][6] = 3;
    tabuleiroMaior[7][7] = 3;

    // Navio 4 - Diagonal (2 posições) - usando número 4
    tabuleiroMaior[2][7] = 4;
    tabuleiroMaior[3][8] = 4;

    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
    printf("\nTabuleiro Maior:\n");
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%d ", tabuleiroMaior[i][j]);
        }
        printf("\n");
    }

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    int cone[5][5] = {{0}};
    int cruz[5][5] = {{0}};
    int octaedro[5][5] = {{0}};

    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Preenchendo o padrão do Cone (apontando para cima)
    cone[4][2] = 1;    // Ponto inicial
    cone[3][1] = 1;    // Expansão
    cone[3][2] = 1;
    cone[3][3] = 1;
    cone[2][0] = 1;    // Expansão maior
    cone[2][1] = 1;
    cone[2][2] = 1;
    cone[2][3] = 1;
    cone[2][4] = 1;

    // Preenchendo o padrão da Cruz
    cruz[0][2] = 1;    // Vertical
    cruz[1][2] = 1;
    cruz[2][2] = 1;    // Centro
    cruz[3][2] = 1;
    cruz[4][2] = 1;
    cruz[2][0] = 1;    // Horizontal
    cruz[2][1] = 1;
    cruz[2][3] = 1;
    cruz[2][4] = 1;

    // Preenchendo o padrão do Octaedro (formato diamante)
    octaedro[0][2] = 1;    // Topo
    octaedro[1][1] = 1;    // Meio superior
    octaedro[1][2] = 1;
    octaedro[1][3] = 1;
    octaedro[2][0] = 1;    // Centro
    octaedro[2][1] = 1;
    octaedro[2][2] = 1;
    octaedro[2][3] = 1;
    octaedro[2][4] = 1;
    octaedro[3][1] = 1;    // Meio inferior
    octaedro[3][2] = 1;
    octaedro[3][3] = 1;
    octaedro[4][2] = 1;    // Base

    
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    void exibir_padrao(int matriz[5][5], const char* nome) {
        printf("\nPadrão %s:\n", nome);
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5; j++) {
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }
    }

    // Exibindo todos os padrões
    printf("Representação das Habilidades Especiais (1 = área de efeito, 0 = sem efeito)\n");
    exibir_padrao(cone, "Cone");
    exibir_padrao(cruz, "Cruz");
    exibir_padrao(octaedro, "Octaedro");


    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
