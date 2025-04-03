#include <stdio.h>

int Testa_Par(int x){
	
	if(x % 2 == 0){
		return 1;
	} else {
		return 0;
	}
}

int main(){
	
	int num;
	printf("Digite um número: ");
	scanf("%d", &num);
	
	if(num % 2 == 0){
	    printf("%d É par? 1\n", num);
	} else{
	    if(num % 2 == 1){
	        printf("%d É par? 0\n", num);
	    }
	}
	
	return 0;
} 