#include <stdio.h>

int main(){
    
int navioHorizontal[3] = {1,1,1}; // Variável para representar um navio horizontal de 3 posições.
int navioVertical[3] = {2,2,2}; // Variável para representar um navio vertical de 3 posições.
int x;
char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};



//Inicialização do tabuleiro de 10x10 com zeros, representando as posições vazias (água) no jogo de batalha naval.

int tabuleiro[10][10]= {{0,0,0,0,0,0,0,0,0,0},
                       {0,0,0,0,0,0,0,0,0,0},
                       {0,0,0,0,0,0,0,0,0,0},
                       {0,0,0,0,0,0,0,0,0,0},
                       {0,0,0,0,0,0,0,0,0,0},
                       {0,0,0,0,0,0,0,0,0,0},
                       {0,0,0,0,0,0,0,0,0,0},
                       {0,0,0,0,0,0,0,0,0,0},
                       {0,0,0,0,0,0,0,0,0,0},
                       {0,0,0,0,0,0,0,0,0,0}
    };





        printf("######## Tabuleiro de Batalha Naval ########\n");

        printf("\n    1   2   3   4   5   6   7   8   9   10\n");  //Imprime os números das colunas para facilitar a visualização das coordenadas.
        
            //Utilização de loops aninhados para preencher o tabuleiro com os navios, onde 'H' representará um navio horizontal e 'V' representará um navio vertical.

        for(int i=0; i<10; i++){
        for(x=0; x<1; x++){      //Inserção das letras de A a J no tabuleiro para facilitar a visualização das coordenadas.
            printf("%c   ", letras[i]);
        
            for(int j=0; j<10; j++){
                for(int k=0; k<3; k++){
                    if(i==2 && j==3+k){  //Posicionamento do navio horizontal no tabuleiro, começando na posição (2,2) e ocupando as posições (2,3) e (2,4).
                        tabuleiro[i][j] = navioHorizontal[k];
                    }
                    if(i==5+k && j==5){  //Posicionamento do navio vertical no tabuleiro, começando na posição (5,5) e ocupando as posições (6,5) e (7,5).
                        tabuleiro[i][j] = navioVertical[k];
                    }
                }
            printf("%d   ", tabuleiro[i][j]);
        }
        printf("\n");
    }               
            }

    return 0;  
}