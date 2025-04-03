#include <stdio.h>

int main(){
    int contador = 1;
    int fim = 7;
    int num;
    int N = 3;
    
    do{
        printf("Adivinhe o número: ");
        scanf("%d", &num);
        
        if (num == fim){
            printf("Você ganhou!\n");
            break;
        }else N--; 
        printf("Número errado. Tentativas restantes: %d.\n", N);
        contador++;
    }
    
    while (contador < 4);
    printf("Fim de jogo!");
    return 0;
}