#include <unistd.h>

//declaração das funções auxiliares
void rush (int c, int l);
void desenhaLinha (int largura, char esquerda, char meio, char direita);

int main (void)
{
	rush (5,3);
	return (0);
}

void rush (int x, int y)
{
	int cont = 0;
	
	while (cont < y)
	{
		if (cont == 0)
		desenhaLinha (x, 'A', 'B', 'C'); //primeira linha
		else 
		{
			if (cont == y-1)
			desenhaLinha (x, 'C', 'B', 'A'); //última linha
			else
			desenhaLinha (x, 'B', ' ', 'B'); //linha do meio
		}
			cont ++;
	}
}

void desenhaLinha (int largura, char esquerda, char meio, char direita)
{
	int cont = 0;
	while (cont < largura)
	{
		if (cont == 0)
			write (1, &esquerda, 1);
		else
		{
			if (cont == largura -1) //fnal
				write (1, &direita, 1);
			else
				write (1, &meio, 1);	
		}	
		cont++;
	}
	write (1, "\n", 1);
}
