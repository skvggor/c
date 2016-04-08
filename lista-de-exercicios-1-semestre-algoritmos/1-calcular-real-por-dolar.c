#include <stdio.h>

int main(void) {
	float cotacao,
		valor_real,
		valor_dolar;

	cotacao = 3.7;
	printf("Digite uma quantia em dolar (U$): ");
	scanf("%f", & valor_dolar);

	valor_real = valor_dolar * cotacao;

	printf("U$ %.2f convertidos para real sao equivalentes a R$ %.2f.\n", valor_dolar, valor_real);

	system("pause");
	return 0;
}
