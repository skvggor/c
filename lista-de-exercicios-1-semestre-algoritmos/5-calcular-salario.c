#include <stdio.h>

main() {
	int numero_empregado;
	float horas_trabalhadas,
		valor_hora_extras,
		valor_hora,
		horas_extras,
		adicional = 0.5,
		limite_hora = 40,
		valor_regular_liquido,
		salario_liquido;

	printf("Qual o numero do empregado? ");
	scanf("%d", & numero_empregado);

	printf("Qual o numero de horas trabalhadas? ");
	scanf("%f", & horas_trabalhadas);

	printf("Qual o salario/hora (R$)? ");
	scanf("%f", & valor_hora);

	horas_extras = horas_trabalhadas - limite_hora;

	if (horas_extras >= 1) {
		valor_hora_extras = (valor_hora + (valor_hora * adicional)) * horas_extras;
	}

	valor_regular_liquido = (limite_hora * valor_hora);
	salario_liquido = valor_regular_liquido + valor_hora_extras;

	printf("---\n");
	printf("Total de horas trabalhadas: %g\n", horas_trabalhadas);
	printf("---\n");
	printf("Total de horas regulares: %g (R$ %g)\n", limite_hora, valor_regular_liquido);
	printf("Total de horas extras: %g (R$ %g)\n", horas_extras, valor_hora_extras);
	printf("---\n");
	printf("Salario liquido mensal: R$ %g\n", salario_liquido);

	system("pause");
}
