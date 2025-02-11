#include <stdio.h>


#define LINHA 10
#define COLUNA 10



int main(){



char tabuleiro[LINHA][COLUNA];


                                //i
//o tabuleiro começa no 0 ex:      0, 1, 2, 3, 4
 //                            j 0 A, A, A, A, A,
   //                            1 A, A, A, A, A,
     //                          2 A, A, A, A, A,
       //                        3 A, A, A, A, A,
         //                      4 A, A, A, A, A


int tamanhonavio1 = 3;
int tamanhonavio2 = 2;
int tamanhonavio3 = 2;
int tamanhonavio4 = 2;
int linha1 = 1, coluna1 = 1;
int linha2 = 3, coluna2 = 4;
int linha3 = 6, coluna3 = 7;
int linha4 = 6, coluna4 = 2;

//AS LINHAS E COLUNAS COMEÇAM SEMPRE NO 0 E NO CASO VÃO ATÉ 9


for(int i = 0; i < tamanhonavio1; i++)
tabuleiro[linha1][coluna1 + i] = 1;
printf("navio horizontal, coordenada : (%d, %d)\n", linha1, coluna1);


//O i adiciona um valor há linha ou a coluna que é armazenado em 1  (= 1; )
//se adicionado aos dois indices cria na diagonal

for(int i = 0; i < tamanhonavio2; i++)
tabuleiro[linha2 + i][coluna2] = 1;
printf("navio vertical, coordenada : (%d, %d)\n", linha2, coluna2);

for(int i = 0; i < tamanhonavio3; i++)
tabuleiro[linha3 + i][coluna3 + i] = 1;
printf("navio diagonal, coordenada : (%d, %d)\n", linha3, coluna3);

for(int i = 0; i < tamanhonavio4; i++)
tabuleiro[linha4 + i][coluna4 + i] = 1;
printf("navio diagonal2, coordenada : (%d, %d)\n", linha4, coluna4);



printf("\nTABULEIRO lembrando que as linhas e colunas começam em 0:\n");
for(int i = 0; i < LINHA; i++){
    for(int j = 0; j < COLUNA; j++){
      if (tabuleiro[i][j] == 1){
      printf("3 ");}
      else{ printf("0 ");}
  } printf("\n");
}




void exibirMatriz(int matriz[5][5]){
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}


    
  // Exemplo de habilidade em cone

    int cone[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0} };

    printf("\nExemplo de habilidade em cone:\n");
    exibirMatriz(cone);
    printf("\n");

    // Exemplo de habilidade em octaedro
    int octaedro[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 1, 1, 1, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0} };

    printf("Exemplo de habilidade em octaedro:\n");
    exibirMatriz(octaedro);
    printf("\n");

    // Exemplo de habilidade em cruz
    int cruz[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0} };

    printf("Exemplo de habilidade em cruz:\n");
    exibirMatriz(cruz);


return 0;
}