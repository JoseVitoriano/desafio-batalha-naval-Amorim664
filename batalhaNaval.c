#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

// DEFINIÇÃO DO TABULEIRO
// PROJETO DE CRIAÇÃO DE JOGO DE TABULEIRO

void tabuleiro (int matriz[10][10], int valor) {
   for (int i = 0; i < valor; i++) {
      for (int j = 0; j < valor; j++) {
         printf("%2d",matriz[i][j]);
      }
      printf("\n");
   }
}


// VISUALIZAÇÃO DO TABULEIRO INICIANDO - SE DO 0
void tabuleirogeral (int jogo [10][10]) {
   for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
         jogo[i][j] = 0;
      }
   }
   // POSICIONAMENTO DAS PEÇAS NA HORIZONTAL
   for (int j = 2; j < 6; j++) {
      jogo[0][j] = 3;
   }
   // POSICIONAMENTO DAS PEÇAS NA VERTICAL
   for (int i = 2; i < 6; i++) {
      jogo [i][0] = 3;
   }
   // POSICIONAMENTO DAS PEÇAS NA DIAGONAL PRINCIPAL
   for (int i = 0; i < 4; i++) {
      jogo[i][i] = 3;
   }
   // POSICIONAMENTO DAS PEÇAS NA DIAGONAL SECUNDÁRIA
   for (int i = 0; i < 4; i++) {
      jogo[i][9 - i] = 3;
   }

}

// DEFINIÇÃO MATRIZ COM 5 LINHAS E 5 COLUNAS - CONE
void exibirMatriz(int matriz[5][5]) {
   for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
         printf("%2d", matriz[i][j]);
      }
      printf("\n");
   }
}
// DEFINIÇÃO DE MATRIZ EM FORMATO EM CONE
void definirCone (int matriz[5][5]) {
   int cone[5][5] = {
      {0,0,1,0,0},
      {0,1,1,1,0},
      {1,1,1,1,1},
      {0,0,0,0,0},
      {0,0,0,0,0}
   };
      for (int i = 0; i < 5; i++){
         for (int j = 0; j < 5; j++) {
            matriz[i][j] = cone[i][j];
         }
   };
}

// DEFINIÇÃO DA MATRIZ EM 5 LINHAS E 5 COLUNAS - CRUZ
void cruzMatriz (int matrizCruz[5][5]) {
   for (int i = 0; i < 5;i++) {
      for (int j = 0; j < 5; j++) {
         printf("%2d", matrizCruz[i][j]);
      }
      printf("\n");
   }
}

// DEFINIÇÃO DE MATRIZ EM FORMATO EM CRUZ
void definirCruz (int matrizCruz[5][5]) {
   int cruz[5][5] = {
      {0,0,1,0,0},
      {0,0,1,0,0},
      {1,1,1,1,1},
      {0,0,1,0,0},
      {0,0,1,0,0}
   };
   for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
         matrizCruz[i][j] = cruz[i][j];
      }
   }
}

void losangoMatriz(int matrizLosango[5][5]) {
   for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
         printf("%2d", matrizLosango[i][j]);
      }
      printf("\n");
   }
}

void definirlosango (int matrizLosango[5][5]) {
   int losango[5][5] = {
      {0,0,1,0,0},
      {0,1,1,1,0},
      {1,1,1,1,1},
      {0,1,1,1,0},
      {0,0,1,0,0}
   };

   for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
         matrizLosango[i][j] = losango[i][j];
      }
   }
}


int main() {

   // INICIALIZAÇÃO COM ESTRUTURA DO WHILE

   int opcao;

   do {

      // INICIALIZAÇÃO DO JOGO
      printf("#### JOGO BATALHA NAVAL ####\n");
      printf("############################\n");
      printf("1. Visualizar a Tabuleiro.\n");
      printf("2. Visualizar Matriz em Cone.\n");
      printf("3. Visualizar Matriz em Cruz.\n");
      printf("4. Visualizar Matriz em Losango.\n");
      printf("5. Sair do Jogo.\n");
      printf("############################\n");
      printf("Selecione a opcao desejada: \n");
      scanf("%d", &opcao);


      switch (opcao) {

         case 1:
            printf("OPCAO SELECIONADA: VISUALIZAR O TABULEIRO!\n");

            int jogo[10][10];
            tabuleirogeral(jogo);
            tabuleiro(jogo,10);
            break;
         case 2:
            printf("OPCAO SELECIONADA: VISUALIZAR TABULEIRO EM CONE!\n");

            int matriz [5][5];
            definirCone(matriz);
            exibirMatriz(matriz);
            break;
         case 3:
            printf("OPCAO SELECIONADA: VISUALIZAR MATRIZ EM CRUZ !\n");

            int matrizCruz[5][5];
            definirCruz(matrizCruz);
            cruzMatriz(matrizCruz);
            break;

         case 4:
            printf("OPCAO SELECIONADA: VISUALIZAR MATRIZ EM LOSANGO !\n");

            int matrizLosango[5][5];
            definirlosango(matrizLosango);
            losangoMatriz(matrizLosango);
            break;

         case 5:
            printf("OPCAO SELECIONADA: SAIR DO JOGO!\n");

            printf("Voce saiu do jogo!\n");
            break;
            default:
            printf("Selecione a opcao valida!\n");
      }

   }while (opcao != 5);


return 0;

}

/* // DEFINIÇÃO DO TABULEIRO

   int tabuleiro [LINHA][COLUNA];

   for (int i = 0; i < LINHA; i++) {
      for (int j = 0; j < COLUNA; j++) {

         tabuleiro[i][j] = 0;

         // Definição da posição das peças na vertical e horizontal
         tabuleiro[1][5] = 3;
         tabuleiro[1][6] = 3;
         tabuleiro[1][7] = 3;
         tabuleiro[6][6] = 3;
         tabuleiro[7][6] = 3;
         tabuleiro[8][6] = 3;
      }
   }



   // Mostrar  na tela o tabuleiro com as informações das posições

   printf("### JOGO BATALHA NAVAL ###\n");

   for (int i = 0; i < LINHA; i++) {
      for (int j = 0; j < COLUNA; j++) {

         printf("%4d", tabuleiro[i][j]);
      }
      printf("\n");
   }
*/
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

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

  
