#define LINHA 10
#define COLUNA 10
#include <stdio.h>

int main() {
    printf("\t\tBem-Vindo a Batalha Naval!!\n\n");
	
	printf("Cada item será identificado com um número, sendo 1 para o Cone, 2 para a Cruz e 3 para o Octaedro\n");
	printf("\n");
	char tabuleiro[LINHA][COLUNA];
    // Inicializa o tabuleiro com água ('0')
    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
            tabuleiro[i][j] = '0';
        }
   }
   
      // Criando o cone usando loops aninhados e estruturas de decisão
    for (int i = 0; i < 3; i++) { // Define a altura do cone
        for (int j = 3 - i; j <= 3 + i; j++) { // Define a largura do cone
            if (j >= 0 && j < COLUNA) { // Garante que está dentro dos limites
                tabuleiro[i][j] = '1';
            }
        }
    }
    
    //criando a Cruz utilizando loop for
    
         int cruzX = 5; // "Coordenada" para declarar onde a cruz ficará localizada
    int cruzY = 2; 
    
    for (int i = -1; i <= 1; i++) {
        tabuleiro[cruzX + i][cruzY] = '2'; // Linha vertical
    }
    for (int j = -2; j <= 2; j++) {
        tabuleiro[cruzX][cruzY + j] = '2'; // Linha horizontal
    }
    
    // Criando o octaedro 
     int meio = COLUNA / 2; //determinando posição do octaedro
    for (int i = LINHA - 3; i < LINHA; i++) { // Linha vertical 
        tabuleiro[i][meio] = '3';
   	 }
    for (int j = meio - 1; j <= meio + 1; j++) { // Linha horizontal 
        if (j >= 0 && j < COLUNA) { //garante que está dentro dos limites
            tabuleiro[LINHA - 2][j] = '3';
        }
    }
    
    
		   //imprimindo o cabeçalho das colunas 
	   printf("    ");
    for (int j = 0; j < 10; j++){
        printf(" %c ", 'A' + j);
    }
    printf("\n");
   
   //imprimindo o cabeçalho das linhas 
   for (int i = 0; i < LINHA; i++) {
        printf(" %2d  ", i + 1);
        for (int j = 0; j < 10; j++)
            printf("%c  ", tabuleiro[i][j]);
        printf("\n");
        
    }
    return 0;
}