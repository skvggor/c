#include <stdio.h>

main() {
	float
		aumento = 0.1,
		salario_limite = 1500,
		salario,
		salario_reajustado;

	printf("Qual e o seu salario? ");
	scanf("%f", & salario);

	if (salario < salario_limite) {
		salario_reajustado = salario + (salario * aumento);
		printf("Voce receceu um aumento salarial. Seu salario agora e R$ %.2f\n ", salario_reajustado);
	} else {
		printf("Voce nao receceu aumento salarial. Seu salario continua sendo R$ %.2f\n", salario);
	}

	system("pause");
}
