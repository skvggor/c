#include <stdio.h>

main() {
	float
		altura,
		peso_ideal;
	char
		flag_sexo;
	char
		* nome_sexo;

	printf("Qual a sua altura? ");
	scanf("%f", & altura);

	printf("Digite 'M' para mulher ou 'H' para homem: ");
	scanf("%c", & flag_sexo);
	flag_sexo = getchar();

	if ((altura > 0) &&
		(flag_sexo == 'M' ||
		flag_sexo == 'm' ||
		flag_sexo == 'H' ||
		flag_sexo == 'h')) {

		if (flag_sexo == 'M' ||
			flag_sexo == 'm') {

			nome_sexo = "Mulher";
			peso_ideal = (62.1 * altura) - 44.7;

		} else if (flag_sexo == 'H' ||
					flag_sexo == 'h') {

			nome_sexo = "Homem";
			peso_ideal = (72.7 * altura) - 58;
		}

		printf("[%s] O seu peso ideal deve ser: %.3f kg.\n", nome_sexo, peso_ideal);
	} else {
		printf("\nDados invalidos!");
	}

	system("pause");
}
