#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main()
{
	
	int i = 0;
	int cont = 0;
	int iteracoes = 0;
	printf("Quantas iterações deseja fazer?: ");
	scanf("%d", &iteracoes);
	int resp = 0;
	int *comp;
	comp = malloc(iteracoes * sizeof(int));
	int tamanhoVetor = 0;
	
		
		for(i = 0; i < iteracoes; i++)
		{
			
		    tamanhoVetor = tamanhoVetor + 250;
		    int *vetor;
		
		    vetor = malloc(tamanhoVetor * (sizeof(int))); //cria um vetor de tamanho tamanhoVetor
		
			for(i = 0; i < tamanhoVetor; i++)
			{
				vetor[i] = rand() % 100 + 1; // preenche o vetor vetor com numeros aleatórios entre 0 e 100
			}
			
			
		
			resp = bubble_sort(vetor, tamanhoVetor, comp);
			
			comp[i] = resp;
	   		
	   		free(vetor);
		}
		
		for(i = 0; i < iteracoes; i++)
		{
			printf("%d\n", comp[i]);
		}
}


int bubble_sort (int vetor[], int n, int comp) 
{
	int comparando = comp;
    int k, j, aux;


	
    for (k = 1; k < n; k++) {
    	comp++;
        printf("\n[%d] ", k);
		
        for (j = 0; j < n - 1; j++) {
        	comp++;
            printf("%d, ", j);
			
            if (vetor[j] > vetor[j + 1]) {
            	comp++;
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
    return comparando;
}
