#include <stdio.h>
#include <math.h>
#define TAMANHO 1000
#include <stdlib.h>

int primo(int n){
	int a;
	int raiz = sqrt(n);
	if(n<2)return 0;
	if(n==2)return 1;
	if(n%2==0)return 0;
	for (a=3;a<=raiz;a+=2){
		if(n%a==0)return 0;
		
	}
	return 1;
}

int main()
{
	int a;
	int contador = 0;
	int primonum[TAMANHO];
	FILE* fp;
	for(a=0;contador<=TAMANHO;a++){
		if(primo(a)){
			primonum[contador]=a;
			contador++;
			
		}
	}
	fp=fopen("numeros.txt","w");
	if(fp==NULL){
	printf("Erro na criacao do arquivo!\n");
	exit(1);
	
	}
	for (a=0;a<TAMANHO;a++)
	{
		fprintf(fp,"%d\n",primonum[a]);
		
	}
	
	fclose(fp);
	
	return 0;
	}
	
	

