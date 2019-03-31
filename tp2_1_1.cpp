#include <stdio.h>
#include <stdlib.h>


#define N 4
#define M 5



int main(){
	int f,c,n=0;
	int mt[N][M];

	printf("Inicio \n");
	for(f = 0;f<N; f++)
	{
 		for(f = 0;f<M; f++)
		{
			n=rand()%50;//n=rand()
			mt[f][c]=n;
			//printf("%d", mt[f][c]);
			printf("%d\n",mt[f][c]);
		}
	printf("\n");
	printf("Fin \n");
	}
return 0;
}