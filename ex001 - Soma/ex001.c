#include <stdio.h>

int
main()
{
	int val1, val2, soma;

	printf("\nDigite o primeiro valor: ");
	scanf("%d", &val1);
	printf("\nDigite o segundo valor: ");
	scanf("%d", &val2);

	soma = val1 + val2;

	printf("\nResultado: %d", soma);
}
