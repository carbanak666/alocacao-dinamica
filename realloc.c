//realloc = relocating vai re alocar a memoria.
//vou deixar a documentação no github.
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *m = (int *) malloc(sizeof(int));

	*m = 10; //setando o valor do malloc.

	printf("%i\n", *m); //printando o tamanho da memoria alocada.

        int *f = (int *) realloc(m, sizeof(int));

        *f = 30; //setando o valor do realloc.

	printf("%i\n", *f); //printando o tamanho da memoria alocada.

	free(f); //devolve a memoria pro sistema

	return 0;
}
