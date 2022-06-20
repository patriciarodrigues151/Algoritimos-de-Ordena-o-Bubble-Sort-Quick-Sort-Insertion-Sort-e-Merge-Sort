/* C Program to sort an array in ascending order using Insertion Sort */
#include <stdio.h>
void main()
{
    int iteracoes, i, temp;
    int *vetor;
    int tamanhoVetor = 0;
    int comp = 0;
 	int *compara;
    printf("Digite a quantidade de iterações: ");
    scanf("%d", &iteracoes);
	
	compara = malloc(iteracoes * sizeof(int));
		int k = 0;
		for(k = 0; k < iteracoes; k++)
		{	 	
			tamanhoVetor = tamanhoVetor + 250;
		 	vetor = malloc(tamanhoVetor * sizeof(int)); //cria um vetor de tamanho tamanhoVetor
				int j = 0;
				for(j = 0; j < tamanhoVetor; j++)
				{
					vetor[j] = rand() % 100 + 1;
					 // preenche o vetor vetor com numeros aleatórios entre 0 e 100
				}
			
			j = 0;
		
		    for (i = 1 ; i <= tamanhoVetor - 1; i++)
		    {
		    	comp++;
			    j = i;
			    
		            while ( j > 0 && vetor[j-1] > vetor[j])
		            {	
						comp++; 
		                temp     = vetor[j];
		                vetor[j]   = vetor[j-1];
		                vetor[j-1] = temp;
		                j--;
		                
		            }
		    }
		    
		    compara[i] = comp;
		
		    for (i = 0; i <= tamanhoVetor - 1; i++)
		    {
		      
		    }
		    
		    printf("%d\n", compara[i]);
		}	
		
}
