#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4
#define M 5

int main(){
	int f,c,i;
	double mt[N][M],t;
	srand(time(NULL));
	//int size;
	for (f = 0; f < N; f++)
	{
		for (c = 0; c < M; ++c)//Poner valores de matriz en numero random
			mt[f][c]=rand() % 100;
			//mt[f][c]=f;
	}

	for (i = 1; i <= 20; i++)
	{
		printf("%.lf ", *(&mt[0][0]+(i-1)));
		if ((i%M) == 0){
			printf("\n");//para que la matriz quede ordenada
		}else
		printf("\t");
	}

	//i=0;
/*	for (f = 0; f < N; f++)
	{
		for (c = 0; c < M; ++c)//Poner valores de matriz en numero random
		{
			t = mt[f][c];
			printf("%.ld ",t);	
			
			//mt[f][c]=f;
		}
	}
*/
	return 0;
}