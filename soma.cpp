#include <stdio.h>
#include <locale.h>

int soma(int n1, int n2){
	return n1 + n2;
}

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int num1, num2, r;
	
	printf("Digite um n�mero: ");
	scanf("%d", &num1);
	printf("Digite um n�mero: ");
	scanf("%d", &num2);
	
	r = soma(num1 , num2);
	
	printf("O resultado � %d", r);
	
	return 0;
}
