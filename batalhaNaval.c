#include <stdio.h>

int main() {
    printf("\t\tBem-Vindo a Batalha Naval!!\n\n");
    
    printf("Coordenadas do navio na horizontal: [E][3]-[F][3]-[G][3]\n");
	printf("Coordenadas do navio na vertical:   [H][7]-[H][8]-[H][9]\n");
	printf("Coordenadas do navio na diagonal principal: [B][2]-[C][3]-[D][4]\n");
	printf("Coordenadas do navio na diagonal secundaria: [D][7]-[E][6]-[F][5]\n");
    
    char tabuleiro[10][10];

    // Inicializa o tabuleiro com água ('0')
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            tabuleiro[i][j] = '0';

    // Posiciona o navio na horizontal
    for (int j = 4; j <= 6; j++)
        tabuleiro[2][j] = '3';

    // Posiciona o navio na vertical
    for (int i = 6; i <= 8; i++)
        tabuleiro[i][7] = '3';

    // Posiciona o navio na diagonal principal (\)
    for (int i = 0; i < 3; i++)
        tabuleiro[4 + i][5 - i] = '3';
   
    // Posiciona o navio na diagonal secundária (/)
    for (int i = 0; i < 3; i++)
        tabuleiro[1 + i][1 + i] = '3';

    // Exibe o tabuleiro
    printf("    ");
    for (int j = 0; j < 10; j++)
        printf(" %c ", 'A' + j);
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf(" %2d  ", i + 1);
        for (int j = 0; j < 10; j++)
            printf("%c  ", tabuleiro[i][j]);
        printf("\n");
    }
}
