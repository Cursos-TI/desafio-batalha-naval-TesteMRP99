#include <stdio.h>

int main() {
    
	printf("		Bem-Vindo a Batalha Naval!!\n");
	printf("\n");
	
	printf("Coordenadas do primeiro navio: [D][3]-[E][3]-[F][3]\n");
	printf("Coordenadas do segundo navio:  [H][7]-[H][8]-[H][9]\n");
	char tabuleiro[10][10];
    

    // Inicializa o tabuleiro 10x10 com '0' representando água
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            tabuleiro[i][j] = '0';

    // atribuindo de maneira manual a posição do primeiro navio
    tabuleiro[2][3] = '3';
    tabuleiro[2][4] = '3';
    tabuleiro[2][5] = '3';

    // atribuindo de maneira manual a posição do segundo navio
	tabuleiro[6][7] = '3';
    tabuleiro[7][7] = '3';
    tabuleiro[8][7] = '3';			

    // saida dos colunas (A a J)
    printf("    ");
    for (int j = 0; j < 10; j++) {
        printf(" %c ", 'A' + j);
    }
    printf("\n");

    // saída com as linhas numeradas de 1 a 10
    for (int i = 0; i < 10; i++) {
        printf(" %2d  ", i + 1); // Identifica as linhas com números, utilização do %2d para organizar as linhas quando chegar na linha 10
		    for (int j = 0; j < 10; j++) {
            	printf("%c  ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}