#include<stdio.h> 
  
void troca(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
  
int particao (int vetor[], int comeco, int fim) 
{ 
	int comp = 0;
    int pivo = vetor[fim];    //pivo
    int i = (comeco - 1);  // indice do menor elemento
  	int j = 0;
    for( j = comeco; j <= fim- 1; j++) 
    { 
    	comp++;
        // se o elemento atual for menor q o pivo
        if (vetor[j] < pivo) 
        { 
        comp++;
            i++;     
            troca(&vetor[i], &vetor[j]); 
        } 
    } 
    troca(&vetor[i + 1], &vetor[fim]); 
    return ((i + 1), comp); 
} 
  
int quickSort(int vetor[], int comeco, int fim) 
{ 
	int comp = 0;
    if (comeco < fim) 
    { 
    	int aux;
    	comp++;
        int pi;
        pi, aux = particao(vetor, comeco, fim); 
  		comp = comp + aux;
        //classifica os elementos de antes da particao e de depois
        quickSort(vetor, comeco, pi - 1); 
        quickSort(vetor, pi + 1, fim); 
    } 
    return comp;
} 
  

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
		int compara = 0;
			
			for(i = 0; i < iteracoes; i++)
			{		
			tamanhoVetor = tamanhoVetor + 250;
		    int *vetor;
		
		    vetor = malloc(tamanhoVetor * (sizeof(int))); //cria um vetor de tamanho tamanhoVetor			
				for(i = 0; i < tamanhoVetor; i++)
				{
					vetor[i] = rand() % 100 + 1; // preenche o vetor vetor com numeros aleatórios entre 0 e 100
				}
				
				
				int n = sizeof(vetor)/sizeof(vetor[0]); 
				compara = quickSort(vetor, 0, n-1);
				
				comp[i] = compara;
		   		
		   		free(vetor);
			}
			
			
			
			for(i = 0; i < iteracoes; i++)
			{
				printf("%d\n", comp[i]);
			}
	}


