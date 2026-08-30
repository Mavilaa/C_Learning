#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include<math.h>

typedef int* ints;

typedef struct s_int_array {
    ints data;
    int length;
    int ix;
} int_array;

typedef int_array* ref_int_array;

typedef struct s_int_matrix {
    ints *data;
    int rows;
    int columns;
    int ix;
    int iy;
} int_matrix;

typedef int_matrix* ref_int_matrix;

ref_int_array new_int_array(int n) {
    ref_int_array tmparray = (ref_int_array)malloc(sizeof(int_array));
    if (tmparray == NULL) {
        printf("Falta espaço\n");
    } else {
        tmparray->data = NULL;
        tmparray->length = 0;
        tmparray->ix = 0;
        if (n > 0) {
            tmparray->length = n;
            tmparray->data = (ints)malloc(n * sizeof(int));
        }
    }
    return tmparray;
}

void free_int_array(ref_int_array tmpArray) {
    if (tmpArray != NULL) {
        if (tmpArray->data != NULL) {
            free(tmpArray->data);
        }
        free(tmpArray);
    }
}

void pause() {
    printf("Aperte ENTER para continuar\n");
    getchar();
}

void clear_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void random_Array(char fileName[], int n) {
    srand(time(NULL));
    FILE* arquivo = fopen(fileName, "wt");
    if (arquivo != NULL) {
        fprintf(arquivo, "%d\n", n);
        for (int x = 0; x < n; x++) {
            int a = rand() % 10;
            fprintf(arquivo, "%d\n", a);
        }
        fclose(arquivo);
    }
}

void print_array(ref_int_array arr) {
    if (arr != NULL && arr->data != NULL) {
        for (int x = 0; x < arr->length; x++) {
            printf("%d\n", arr->data[x]);
        }
    }
}

bool array_decrescent(char input[], char output[], ref_int_array arr) {
    bool isdecrescent = false;
    FILE* in = fopen(input, "rt");
    FILE* out = fopen(output, "wt");
    
    if (in != NULL && out != NULL && arr != NULL) {
        int n = 0;
        fscanf(in, "%d", &n);
        
        if (arr->data != NULL) free(arr->data);
        arr->length = n;
        arr->data = (ints)malloc(n * sizeof(int));
        
        fprintf(out, "%d\n", arr->length);
        for (int z = 0; z < arr->length; z++) {
            fscanf(in, "%d", &arr->data[z]);
        }
        
        for (int x = 0; x < arr->length - 1; x++) {
            for (int y = 0; y < arr->length - 1 - x; y++) {
                if (arr->data[y] < arr->data[y + 1]) {
                    int d = arr->data[y];
                    arr->data[y] = arr->data[y + 1];
                    arr->data[y + 1] = d;
                    isdecrescent = true;
                }
            }
        }
        
        for (int x = 0; x < arr->length; x++) {
            fprintf(out, "%d\n", arr->data[x]);
        }
        
        fclose(in);
        fclose(out);
    }
    return isdecrescent;
}

void invert_array(char input[], char output[], ref_int_array arr) {
    FILE* in = fopen(input, "rt");
    FILE* out = fopen(output, "wt");
    
    if (in != NULL && out != NULL && arr != NULL) {
        int n = 0;
        fscanf(in, "%d", &n);
        
        if (arr->data != NULL) free(arr->data);
        arr->length = n;
        arr->data = (ints)malloc(n * sizeof(int));
        
        for (int z = 0; z < arr->length; z++) {
            fscanf(in, "%d", &arr->data[z]);
        }
        
        fprintf(out, "%d\n", n);
        int y = n - 1;
        for (int x = 0; x < n / 2; x++) {
            int a = arr->data[x];
            arr->data[x] = arr->data[y];
            arr->data[y] = a;
            y--;
        }
        
        for (int b = 0; b < n; b++) {
            fprintf(out, "%d\n", arr->data[b]);
        }
        
        fclose(in);
        fclose(out);
    }
}

int fread_SArray(char fileName[], ref_int_array arr) {
    FILE* afile = fopen(fileName, "rt");
    int n = 0;
    if (afile != NULL && arr != NULL) {
        fscanf(afile, "%d", &n);
        
        if (arr->data != NULL) free(arr->data);
        arr->length = n;
        arr->data = (ints)malloc(n * sizeof(int));
        
        for (int x = 0; x < arr->length; x++) {
            fscanf(afile, "%d", &arr->data[x]);
        }
        fclose(afile);
    }
    return n;
}

void fread_Array_raw(char fileName[], int array[]) {
    FILE* afile = fopen(fileName, "rt");
    if (afile != NULL) {
        int n = 0;
        fscanf(afile, "%d", &n);
        for (int x = 0; x < n; x++) {
            fscanf(afile, "%d", &array[x]);
        }
        fclose(afile);
    }
}

int get_file_array_size(char fileName[]) {
    FILE* afile = fopen(fileName, "rt");
    int n = 0;
    if (afile != NULL) {
        fscanf(afile, "%d", &n);
        fclose(afile);
    }
    return n;
}

int medium_Array(ref_int_array arr, int tabela[][2]) {
    int mediana = 0;
    
    if (arr == NULL || arr->data == NULL || arr->length == 0) return 0;
    
    for (int x = 0; x < arr->length - 1; x++) {
        for (int y = 0; y < arr->length - 1 - x; y++) {
            if (arr->data[y] > arr->data[y + 1]) {
                int temp = arr->data[y];
                arr->data[y] = arr->data[y + 1];
                arr->data[y + 1] = temp;
            }
        }
    }
    
    for (int x = 0; x < arr->length; x++) {
        int moda = 1;
        tabela[x][0] = arr->data[x];
        for (int y = 0; y < arr->length; y++) {
            if (x != y && arr->data[x] == arr->data[y]) {
                moda++;
            }
        }
        tabela[x][1] = moda;
    }
    
    int n = arr->length;
    if (n % 2 == 0) {
        mediana = (arr->data[n / 2] + arr->data[(n / 2) - 1]) / 2;
    } else {
        mediana = arr->data[n / 2];
    }
    
    return mediana;
}

int common_elements(int array1[], int array2[], int array3[], int length) {
    int x = 0;
    int y = 0;
    for(y = 0; y < length; y++){
    for (int z = 0; z < length; z++) {
    if(array1[y] == array2[z] && y != z){
        array3[z] = array1[z];
        x = x +1;
    } 
    }
}
    return (x);
}

void fprint_raw(char fileName[], int array[], int n) {
    FILE* afile = fopen(fileName, "wt");
    if (afile != NULL) {
        fprintf(afile, "%d\n", n);
        for (int x = 0; x < n; x++) {
            fprintf(afile, "%d\n", array[x]);
        }
        fclose(afile);
    }
}


void random_Binary(char fileName[], int n) {
    srand(time(NULL));
    FILE* arquivo = fopen(fileName, "wt");
    if (arquivo != NULL) {
        fprintf(arquivo, "%d\n", n);
        for (int x = 0; x < n; x++) {
            int a = rand() % 2;
            fprintf(arquivo, "%d\n", a);
        }
        fclose(arquivo);
    }
}



void fRead_Binary(char fileName[], int array[]){
FILE * arquivo = fopen(fileName, "rt");
int n = 0; 
fscanf(arquivo, "%d", &n);
for(int x = 0; x < n; x++){
fscanf(arquivo, "%d", &array[x]);
}
}


int convert_Binary(int array[], int n){
int a = 0;
for(int x = 0; x < n; x++){
a = a +pow(2,x)*array[x];
}

return(a);

}