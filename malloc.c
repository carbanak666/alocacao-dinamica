//malloc = memory allocation vai alocar memoria no sistema
//vou deixar a documentação no github
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *m = (int *) malloc(sizeof(int));

	*m = 10; //setando o valor do malloc

	printf("%i\n", *m); //printando o tamanho da memoria alocada

	free(m); //Desalocar memoria alocada

	return 0;
}
