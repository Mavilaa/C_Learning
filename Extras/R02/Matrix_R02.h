#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include<math.h>

const int MAX = 4;

typedef struct s_supermercado {
    char nome[100];
    int codigo;
    float preco;
} supermercado;

typedef supermercado* supermercados;

typedef struct s_supermercado_array {
    supermercados data;
    int length;
    int ix;
} supermercado_array;

typedef supermercado_array* ref_supermercado_array;

ref_supermercado_array new_supermercado_array(int n) {
    ref_supermercado_array tmparray = (ref_supermercado_array)malloc(sizeof(supermercado_array));
    if (tmparray == NULL) {
        printf("Falta espaço\n");
    } else {
        tmparray->data = NULL;
        tmparray->length = 0;
        tmparray->ix = 0;
        if (n > 0) {
            tmparray->length = n;
            tmparray->data = (supermercados)malloc(n * sizeof(supermercado));
        }
    }
    return tmparray;
}

void free_supermercado_array(ref_supermercado_array tmpArray) {
    if (tmpArray != NULL) {
        if (tmpArray->data != NULL) {
            free(tmpArray->data);
        }
        free(tmpArray);
    }
}

void avaliar_supermercados(char fileName[]) {
    FILE* arquivo = fopen(fileName, "rt");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    int n = 0;
    fscanf(arquivo, "%d", &n);

    ref_supermercado_array mercados = new_supermercado_array(n);
    if (mercados == NULL || mercados->data == NULL) {
        fclose(arquivo);
        return;
    }

    float soma = 0.0;
    for (int x = 0; x < mercados->length; x++) {
        fscanf(arquivo, "%s %d %f", mercados->data[x].nome, &mercados->data[x].codigo, &mercados->data[x].preco);
        soma += mercados->data[x].preco;
    }
    fclose(arquivo);

    float media = soma / n;
    printf("Preco medio do produto: %.2f\n\n", media);
    printf("Supermercados com precos inferiores a media:\n");

    for (int x = 0; x < mercados->length; x++) {
        if (mercados->data[x].preco < media) {
            printf("Codigo: %d | Nome: %s | Preco: %.2f\n", mercados->data[x].codigo, mercados->data[x].nome, mercados->data[x].preco);
        }
    }
    free_supermercado_array(mercados);
}



void create_DADOS3(char fileName[]) {
    FILE* arquivo = fopen(fileName, "wt");
    if (arquivo != NULL) {
        fprintf(arquivo, "4\n");
        fprintf(arquivo, "SupermercadoA 101 4.50\n");
        fprintf(arquivo, "SupermercadoB 102 2.30\n");
        fprintf(arquivo, "SupermercadoC 103 5.10\n");
        fprintf(arquivo, "SupermercadoD 104 3.20\n");
        fclose(arquivo);
    }
}





void random_Matrix(char fileName[], int i, int j) {
    srand(time(NULL));
    FILE* arquivo = fopen(fileName, "wt");
    if (arquivo != NULL) {
        fprintf(arquivo, "%d\n", i);
        fprintf(arquivo, "%d\n", j);
        int n = i*j;
        for (int x = 0; x < n; x++) {
            int a = rand() % 10;
            fprintf(arquivo, "%d\n", a);
        }
        fclose(arquivo);
    }
}

void Fread_Matrix(char fileName[], int i, int j, int matrix[][MAX]){
FILE *arquivo = fopen(fileName, "rt");
fscanf(arquivo, "%d", &i);
fscanf(arquivo, "%d", &j);
for(int x = 0; x < i; x++){
for(int y = 0; y < j; y++){
fscanf(arquivo, "%d", &matrix[x][y]);
}
}


}




void tri_prim(int i, int j, int matrix[][MAX]){
for(int x = 0; x < i-1; x++){
for(int y = 0; y < j-1; y++){
    if(matrix[x][y] != 0){
matrix[x+1][y+1] = matrix[x][y] +3;
    }
}
}
       matrix[0][j-1] = 0;
    matrix[1][j-1] = 0;
    matrix[0][j-2] = 0;
        matrix[i-1][0] = 0;
          matrix[i-2][0] = 0;
    matrix[i-1][1] = 0;
}


void print(int i, int j, int matrix[][MAX]){
for(int x = 0; x < i; x++){
for(int y = 0; y < j; y++){

printf("%d\t", matrix[x][y]);
}
printf("\n");
}
}




void tri_sec(int i, int j, int matrix[][MAX]){
for(int x = 0; x < i; x++){
for(int y = 0; y < j; y++){
    if(matrix[x][y] != 0){
if (x + 1 < i && y - 1 >= 0) {
        matrix[x+1][y-1] = matrix[x][y] + 3;
    }
    }
}
}
       matrix[0][0] = 0;
    matrix[0][1] = 0;
    matrix[1][0] = 0;
        matrix[i-1][j-1] = 0;
          matrix[i-2][j-1] = 0;
    matrix[i-1][j-2] = 0;
}

bool is_squared(int matrix[][MAX], int i, int j) {
    bool a = true;
    for (int x = 0; x < i; x++) {
        int base = matrix[x][1];
        
        for (int y = 1; y < j - 1; y++) {
            if (matrix[x][y + 1] != matrix[x][y] * base) {
                a = false;
            }
        }
    }
    return a;
}

bool is_potdecres(int matrix[][MAX], int i, int j) {
    bool a = true;
    for (int y = 0; y < j; y++) {
        int base = matrix[0][y] / matrix[1][y]; 
        
        for (int x = 0; x < i - 1; x++) {
            if (matrix[x][y] != matrix[x + 1][y] * base) {
                a = false;
            }
        }
    }
    return a;
}