#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include <locale.h>

#define N 8 // letras
#define M 4 // linhas e colunas

/*  
ALUNOS:
	AMANDA YOHANA VOSGERAU CAMPOS
	RAISSA MAYARA MOREIRA
	LUCAS SACHS
*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    
	int matriz[M][M];
	int x1, y1, x2, y2; // coordenadas da matriz
	int again;

// ==================================== LETRAS ALEATÓRIAS ================================
	
	for(int i = 0; i < M; i++) {
		for(int j = 0; j < M; j++) {
			matriz[i][j] = 0;
		}
	}
	
	int linhaAleatoria = 0, colunaAleatoria = 0;
	int contador = 0;
	char letras[N] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
	
	srand(time(NULL));
	
	unsigned int mostrarOuNao;
	printf("Deseja mostrar as coordenadas das cartas? Digite: 1 para mostrar / 0 para nao mostrar: ");
	scanf("%d", &mostrarOuNao);
	
	for(int i = 0; i < 16; i++, contador++) {
		do {
			linhaAleatoria = rand() % 4; 
			colunaAleatoria = rand() % 4;
		} while(matriz[linhaAleatoria][colunaAleatoria] != 0);
		
		matriz[linhaAleatoria][colunaAleatoria] = letras[contador / 2]; 
			
		if(mostrarOuNao == 1) printf("Coordenadas: [%d][%d] letra: %c \n", linhaAleatoria, colunaAleatoria, letras[contador / 2]);
	}
	
	printf("\n \n");
	
// ============================== ESCOLHENDO AS COORDENADAS DA MATRIZ ==========================
	
	do {
        // ===== COORDENADAS DA 1º CARTA =====
        
        printf("(PRIMEIRA CARTA) - Posição X (linha): ");
        do {
            scanf("%i", &x1);
            if(x1 < 0 || x1 > 3) printf("Coordenada da Linha inválida! Digite novamente:");
        } while (x1 < 0 || x1 > 3);
        
        printf("(PRIMEIRA CARTA) - Posição Y (coluna): ");
        do {
            scanf("%i", &y1);
            if(y1 < 0 || y1 > 3) printf("Coordenada da Coluna inválida! Digite novamente:");
        } while (y1 < 0 || y1 > 3);
           
        printf ("PRIMEIRA CARTA: [%c]", matriz[x1][y1]);
        printf("\n \n");
            
        // ===== COORDENADAS DA 2º CARTA =====
        
        printf("(SEGUNDA CARTA) - Posição X (linha): ");
        do {
            scanf("%i", &x2);
            if(x2 < 0 || x2 > 3) printf("Coordenada da Linha inválida! Digite novamente:");
        } while (x2 < 0 || x2 > 3);
            
        printf("(SEGUNDA CARTA) - Posição Y (coluna): ");
        do {
            scanf("%i", &y2);
            if(y2 < 0 || y2 > 3) printf("Coordenada da Coluna inválida! Digite novamente:");
        } while (y2 < 0 || y2 > 3);

        printf ("SEGUNDA CARTA: [%c]", matriz[x2][y2]);
        printf("\n \n");

        // ===================== MATRIZ FINAL =====================
	
    	printf("\n \nMATRIZ FINAL:\n");
    	
    	printf("  0    1    2    3\n");
	    for(int i = 0; i < M; i++){
		    for(int j = 0; j < M; j++){
		        if(x1 == i && y1 == j){
		            printf(" [%c] ", matriz[i][j]);
		        } else if(x2 == i && y2 == j) {
		            printf(" [%c] ", matriz[i][j]);
		        } else {
		            printf(" [@] ");
		        }
		    }
		
		    printf("%i\n", i);
	    }

        printf("Escreva -1 para jogar novamente.\n ");
        scanf("%i", &again);
    } while(again == -1);
	
	return 0;
}