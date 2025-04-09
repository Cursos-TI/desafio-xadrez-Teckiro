#include <stdio.h>

int main() {
    #include <stdio.h>

    int main(){
        
        int torre = 1;
        int rainha = 1;    //variavel 
    
        printf("*** Jogo de Xadrez ***\n");
        
        printf("Mover a torre 5 casas a direita\n");   //imprime a direção do movimento da torre
        
        do{
            printf("%d\n", torre);     //saída
            torre++;
        } while (torre <= 5);      //condição
    
        printf("-------------------------------------\n");
    
        printf("Mover a rainha 8 casas para cima\n");   //imprime a direção do movimento da rainha
    
        while (rainha <= 8){
            printf("%d\n", rainha);  //saída
            rainha++;
        }
        
        printf("-------------------------------------\n");
    
        printf("Mover o bispo 5 casas para a diagonal (cima, direita)\n");    //imprime a direção do movimento do bispo
    
        for (int bispo = 1; bispo <= 5; bispo++){     //condição
            printf("%d\n", bispo); //saída
        }
        
        
        
    }
    

    return 0;
}
