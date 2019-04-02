#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int c,cont=0, dato;
	srand(time(NULL));
	int mt[15][15];
	int vec[15];
	int aux;
	printf("-----------------( Matriz | V )------------------------------------------------------------\n");
	c=5+rand()%10;
		for(int i=0;i<15;i++){
			aux=cont;
			
			for(int t=0;t<c;t++){
				dato=100 + rand() % 899;
				mt[i][t]=dato;
				if(dato%2==0){
					cont++;
				}
				printf("%d\t",mt[i][t]);
				if(t == c-1)
					printf("| ");
			}
			vec[i]=cont-aux;
			printf("%d", vec[i]);
			printf("\n");
		}
	printf("\n-----------------( Matriz | V )------------------------------------------------------------\n");
	
	return 0;
}
