#include <stdio.h>
#define NUMCOL 20
#define NUMFIL 20


struct celula
{
	int posx;
	int posy;
};

void imprimeTablero(int matriz[NUMCOL][NUMFIL])
{
	int i;
	int j;

	for(i = 0; i < NUMCOL; i++){
		for(j = 0; j < NUMFIL; j++){
			if(matriz[i][j] == 1){
				printf("* ");
			}
			else{
				printf(". ");
			}
		}
	printf("\n");
	}
}

int main()
{
	int matriz[NUMCOL][NUMFIL];
	int i;
	int j;

	for(i = 0; i < NUMCOL; i++)
	{
		for(j = 0; j < NUMFIL; j++){
			matriz[i][j] = 0;
		}
	}

	struct celula cells[3] = {{1,1}, {4,8}, {18,18}};
	struct celula *c;

	for(c = cells; c < &cells[3]; c++)
	{
		matriz[c->posx][c->posy] = 1;
	}

	printf("\nJuego de la vida, Version 1.0\n\n");
	imprimeTablero(matriz);	

}
