#include <stdio.h>
#include <stdlib.h>

int n = 3;

void imprimir(int m[][3]){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

int somarLinha(int m[][3], int l){
    int c, soma = 0;

    for(c = 0; c < n; c++)
        soma += m[l][c];
    return soma;
}

int main() {

    int mat[3][3];
    int i, j;



    for(i = 0; i <n; i++){
        for(j = 0; j < n; j++){
            mat[i][j]  = rand  () %10;
        }
    }

    imprimir(mat);

    for(i = 0; i < n; i++)
        printf("Soma da linha %d: %d\n",i, somarLinha(mat, i));

    return 0;
}
