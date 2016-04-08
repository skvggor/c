#include <stdio.h>

int main(void) {
	float salario_bruto;
	float desconto;
	float salario_liquido;

	printf("Insira o salário a ser descontado: ");
	scanf("%f", & salario_bruto);

	desconto = 0.07;
	salario_liquido = salario_bruto - (salario_bruto * desconto);

	printf("Salário total com desconto: R$ %.2f", salario_liquido);

	system("pause");
	return 0;
}
