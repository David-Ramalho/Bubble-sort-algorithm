#include <stdio.h>
#define t 4
int main()
{
	int vet[t];
	int i, j;
	int troca;
	
	for(i=0;i<t;i++)
{
	printf("digite o numero do elemento %d do vetor- ", i);
	scanf("%d", &vet[i]);
	
}

for(i=0;i<t-1;i++)
{
	for(j=i+1;j<t;j++)
	{
		if(vet[j]>vet[i])
		{
			troca=vet[i];
			vet[i]=vet[j];
			vet[j]=troca;
			
			
		}
	}
	
	
}
for(i=0;i<t;i++)
{

printf("\na ordem descrente do elemento %d: %d-\n ", i, vet[i]);

}
	
	
	
	return(0);
}