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
		
		    vetor = malloc(tamanhoVetor * sizeof(int)); //cria um vetor de tamanho tamanhoVetor
		
			for(i = 0; i < tamanhoVetor; i++)
			{
				vetor[i] = rand() % 100 + 1; // preenche o vetor vetor com numeros aleatórios entre 0 e 100
			}
			
			
			printf("%d", resp);
			resp = mergesort(vetor, 0,tamanhoVetor);
			printf("%d",&resp);
	   		free(vetor);
		}
		
		for(i = 0; i < iteracoes; i++)
		{
			printf("%d\n", comp[i]);
		}
}

 
int mergesort(int vetor[],int i,int j)
{

	int mid;
	int comp1 = 0;
	if(i<j)
	{
		comp1++;
		mid=(i+j)/2;
		
		comp1  = comp1 + mergesort(vetor,i,mid);		//left recursion
		
		comp1 = comp1 + mergesort(vetor,mid+1,j);	//right recursion
		
		comp1 = comp1 + merge(vetor,i,mid,mid+1,j);	//merging of two sorted sub-arrays
	}
	
	return comp1;
}
 
int merge(int vetor[],int i1,int j1,int i2,int j2)
{
	
	int comp1 = 0;
	int temp[50];	//array used for merging
	int i,j,k;
	i=i1;	//beginning of the first list
	j=i2;	//beginning of the second list
	k=0;
	
	while(i<=j1 && j<=j2)	//while elements in both lists
	{
		comp1++;
		if(vetor[i]<vetor[j])
		{
		comp1++;
			temp[k++]=vetor[i++];
		}else
		{
			temp[k++]=vetor[j++];
		}
			
	}
	
	while(i<=j1)
	{	
	comp1++;	//copy remaining elements of the first list
		temp[k++]=vetor[i++];
    }
	while(j<=j2)
	{
	comp1++;
		//copy remaining elements of the second list
		temp[k++]=vetor[j++];
	}
	//Transfer elements from temp[] back to a[]
	for(i=i1,j=0;i<=j2;i++,j++)
	{
	comp1++;
	vetor[i]=temp[j];
	}
		return comp1;
}
