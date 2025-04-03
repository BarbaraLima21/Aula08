#include <stdio.h>

int main(){
	
	int x;
	int soma = 0;
	
	printf("Digite o número do dado: ");
	scanf("%d", &x);
	
	while(x % 2 == 0){
	    if(x > 6){
	        printf("Número inválido! ");{
	            break;
	        }
	    } else {
	        soma += x;
	    }
	    
	    printf("Digite o número do dado: ");
	    scanf("%d", &x);
	}
	
	printf("A soma dos numeros pares do dado é igual a: %d", soma);
	
	return 0;
}