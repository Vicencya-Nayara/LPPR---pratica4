#include <stdio.h>
#include <locale.h>

char* isNegative(int n){
	if(n>=0){
		return "Falso";
	}
	return "Verdadeiro";
}
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int num;
	printf("Digite um número: ");
	scanf("%d", &num);
	char* b = isNegative(num);
	printf("O numero é negativo? %s", b);
	
	return 0;
}

