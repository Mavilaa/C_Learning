#include"io.h"

typedef struct int_array_1{

ints data;
int length;
int ix;



}int_array;



typedef int_array* ref_int_array;


ref_int_array new_int_array(int n){

ref_int_array tmparray = (ref_int_array)malloc(sizeof(int_array));


if(tmparray = NULL){


printf("%s\n", "Falta espaço");


}
else{

tmparray->data = 0;
tmparray->length = 0;
tmparray-> ix = 1;
if(n > 0){

tmparray->length = n;
tmparray->data = (ints)malloc(n*(sizeof(int)));
tmparray->ix = 0;
}
}

return(tmparray);
}


void free_int_array(ref_int_array tmpArray){

    if(tmpArray!= NULL){

    if(tmpArray->data!= NULL){
        

    free(tmpArray->data);

    }

    free(tmpArray);

    }

}


void fprintarray(char fileName [], int_array array){
    FILE * arquivo = fopen(fileName, "wt");
    if(array.data != NULL){

    fprintf(arquivo, "%d\n", array.length);

    for(array.ix = 0; array.ix < array.length; array.ix++){


    fprintf(arquivo, "%d\n", array.data[array.ix]);

    }


    }

    fclose(arquivo);
}

void printintarray(int_array array){

    if(array.data != NULL){

    for(array.ix = 0; array.ix < array.length; array.ix++){


    printf("%d\t", array.data[array.ix]);


    }


    }




}

void generaterandom(int_array array){
  srand(time(NULL));
for(int i = 0; i < array.length; i++){
    array.data[i] =  (rand() %10);

    }



}




void method_01(){
    int x = 0;
    int sup  = 0;
int_array array;
printf("%s\n", "Defina um tamanho para a array: ");
    scanf("%d", &x);getchar();
    printf("%s\n", "Defina um limite inferior: ");
    scanf("%d", &sup);getchar();
     array.length = x;
array.data = (ints)malloc(array.length*(sizeof(int)));
generaterandom(array);
fprintarray("ARRAY1.TXT",array);
if(array.data){
printintarray(array);
free(array.data);
}
printf("\n%s\n", "Aperte ENTER para continuar");
getchar();
}







int_array freadarray(char fileName[]){
FILE* arquivo = fopen(fileName, "rt");
static int_array array;
fscanf(arquivo, "%d", &array.length);
array.data = (ints)malloc(array.length*(sizeof(int)));
if(array.length <= 0){

printf("%s\n", "Tamanho nao encontrado");

}else{

for(array.ix = 0; array.ix < array.length; array.ix++){


fscanf(arquivo, "%d", &array.data[array.ix]);


}


}

fclose(arquivo);
return(array);
}



bool searchvalue(int n , int_array array){
    bool valor = false;
if(array.data){

for(array.ix = 0; array.ix< array.length; array.ix++){

if(array.data[array.ix] == n){


valor = true;

}else{


    valor = false;
}
}
}


return(valor);

}


void method_02(){
bool num = false;
int n = 0;
int_array array = freadarray("ARRAY1.TXT");
printf("%s\n", "Escolha um numero para procurar: ");
scanf("%d", &n);getchar();
if(array.data){

num = searchvalue(n, array);


}

printf("%s[%d]\n", "O numero esta na array:", num);

free(array.data);
printf("%s\n", "Aperte ENTER para continuar");
getchar();
}


bool comparearray(int_array array1, int_array array2){
bool result = true;

if(array1.data != NULL && array2.data != NULL){

for(array1.ix = 0; array1.ix < array1.length; array1.ix++){

if(array1.data[array1.ix] == array2.data[array1.ix] && result == true){

result = true;

}else{
    
result = false;
    
}
}
}



return(result);


}



void method_03(){
    bool result = false;
int_array array1;
int_array array2;
printf("%s\n", "Defina um tamanho para a array 1: ");
    scanf("%d", &array1.length);getchar();
    printf("%s\n", "Defina um tamanho para a array 2: ");
    scanf("%d", &array2.length);getchar();
    array1.data = (ints)malloc(array1.length*(sizeof(int)));
    array2.data = (ints)malloc(array2.length*(sizeof(int)));
    generaterandom(array1);
fprintarray("DADOS1.TXT", array1);
    generaterandom(array2);
fprintarray("DADOS2.TXT", array2);
int_array array3 = freadarray("DADOS1.TXT");
int_array array4 = freadarray("DADOS2.TXT");


if(array3.length == array4.length){

result = comparearray(array3, array4);

printf("%s[%d]\n", "As arrays sao iguais? ", result);
}
else{

printf("%s\n", "Tamanho nao igual"); 
}



free(array1.data);
free(array2.data);
free(array3.data);
free(array4.data);
printf("%s\n", "Aperte ENTER para continuar");
getchar();
}


int somarArray(int_array array1, int_array array2){
int soma = 0;

for(array1.ix = 0; array1.ix < array1.length; array1.ix++){

soma = soma + array1.data[array1.ix] + 2*array2.data[array1.ix];


}


return(soma);
}

void method_04(){
    int soma = 0;
int_array array1 = freadarray("DADOS1.TXT");
int_array array2 = freadarray("DADOS2.TXT");
if(array1.data && array2.data){

if(array1.length == array2.length){


soma = somarArray(array1, array2);

printf("%s%d\n", "Soma = ", soma);
}else{

printf("%s\n", "Tamanho nao igual"); 
}
free(array1.data);
free(array2.data);
printf("%s\n", "Aperte ENTER para continuar");
getchar();
}





printf("%s\n", "Aperte ENTER para continuar");
getchar();
}


bool isArrayDescent(int_array array){
bool result = true;
for(array.ix = 0; array.ix < array.length; array.ix++){
    printf("%d\n", array.data[array.ix]);
if(array.data[array.ix] >= array.data[array.ix+1] && result == true){


result = true;



}else{
    

result = false;
}

}




return(result);

}



void method_05(){
int_array array = freadarray("DADOS1.TXT");
bool resposta = false;
if(array.data){


resposta = isArrayDescent(array);
printf("%s[%d]\n", "Esta em ordem decrescente? ", resposta);
}





free(array.data);
printf("%s\n", "Aperte ENTER para continuar");
}



typedef struct s_int_matrix{

ints *data;
int rows;
int columns;
int ix;
int iy;



}int_matrix;


typedef int_matrix* ref_int_matrix;




ref_int_matrix new_int_matrix(int i, int j){

ref_int_matrix tmpMatrix = (ref_int_matrix) malloc(sizeof(int_matrix));

if(tmpMatrix != NULL){

tmpMatrix-> rows = 0;
tmpMatrix-> columns = 0;
tmpMatrix-> data = NULL;
if(i>0 && j > 0){
tmpMatrix-> rows = i;
tmpMatrix-> columns = j;
tmpMatrix-> data = malloc(i*(sizeof(ints)));
if(tmpMatrix->data){

for(tmpMatrix->ix = 0; tmpMatrix->ix < tmpMatrix-> rows;tmpMatrix->ix++){

tmpMatrix->data[tmpMatrix->ix] = (ints)malloc(j*(sizeof(int)));

}


}



}

tmpMatrix-> ix = 0;
tmpMatrix-> iy = 0;
}



return(tmpMatrix);

}



void free_int_matrix(ref_int_matrix matrix){
if(matrix != NULL){
if(matrix->data != NULL){

for(matrix->ix = 0; matrix->ix < matrix->rows; matrix->ix++){



free(matrix->data[matrix->ix]); //liberar a data em todas as linhas


}

free(matrix->data);


}

}

free(matrix);
}




void fprintmatrix(char fileName [], ref_int_matrix matrix){
FILE*arquivo = fopen(fileName, "wt");
if(matrix != NULL){

if(matrix->data != NULL){

fprintf(arquivo, "%d\n", matrix->rows);
fprintf(arquivo, "%d\n", matrix->columns);
for(matrix->ix = 0; matrix->ix < matrix-> rows; matrix->ix++){

for(matrix->iy = 0; matrix->iy < matrix-> columns; matrix->iy++){


fprintf(arquivo, "%d\n", matrix->data[matrix->ix][matrix->iy]);
}
}
}
}


fclose(arquivo);

}

void readintmatrix(ref_int_matrix matrix){
if(matrix != NULL){

if(matrix->data != NULL){
for(matrix->ix = 0; matrix->ix < matrix-> rows; matrix->ix++){

for(matrix->iy = 0; matrix->iy < matrix-> columns; matrix->iy++){


printf("%d\t", matrix->data[matrix->ix][matrix->iy]);
}
printf("\n");
}
}
}


}


ref_int_matrix transposeMatrix(ref_int_matrix matrix){
ref_int_matrix matrix2 = new_int_matrix(3,3);
if(matrix != NULL){
if(matrix->data != NULL){

for(matrix->ix = 0; matrix->ix < matrix-> rows; matrix->ix++){

for(matrix->iy = 0; matrix->iy < matrix-> columns; matrix->iy++){


matrix2->data[matrix->ix][matrix->iy] = matrix->data[matrix->iy][matrix->ix];


}
}
}
}
return(matrix2);
}

ref_int_matrix numbers(){
    int i = 0;
    int j = 0;
printf("%s", "Escolha a quantidade de linhas: ");
scanf("%d", &i);getchar();
printf("%s", "Escolha a quantidade de colunas: ");
scanf("%d", &j);getchar();
ref_int_matrix matrix = new_int_matrix(i,j);
for(matrix->ix = 0; matrix->ix < matrix-> rows; matrix->ix++){

for(matrix->iy = 0; matrix->iy < matrix-> columns; matrix->iy++){

printf("%s[%d][%d]\n", "Escolha o numero: ", matrix->ix, matrix->iy);
scanf("%d", &matrix->data[matrix->ix][matrix->iy]);getchar();
}
}


return(matrix);
}



void method_06(){
ref_int_matrix matrix = numbers();
ref_int_matrix matrix2 = matrix;
if(matrix!= NULL){
if(matrix->data != NULL){

fprintmatrix("DADOS3.TXT", matrix);
if(matrix->rows == matrix2->rows && matrix->columns == matrix2->columns){
matrix2 = transposeMatrix(matrix);
readintmatrix(matrix2);
}
}
}



free_int_matrix(matrix);
free_int_matrix(matrix2);
printf("%s\n", "Aperte ENTER para continuar");
getchar();

}

ref_int_matrix freadmatrix(char fileName []){
FILE* arquivo = fopen(fileName, "rt");
int i = 0;
int j = 0;
fscanf(arquivo, "%d", &i);
fscanf(arquivo, "%d", &j);
ref_int_matrix matrix = new_int_matrix(i,j);
if(matrix != NULL){
if(matrix->data != NULL){
for(matrix->ix = 0; matrix->ix < matrix-> rows; matrix->ix++){
for(matrix->iy = 0; matrix->iy < matrix-> columns; matrix->iy++){

fscanf(arquivo, "%d", &matrix->data[matrix->ix][matrix->iy]);


}
}
}
}



return(matrix);


}


bool OnlyZeroes(ref_int_matrix matrix){
bool result = true;
if(matrix != NULL){
if(matrix->data != NULL){

for(matrix->ix = 0; matrix-> ix < matrix-> rows; matrix->ix++){
for(matrix->iy = 0; matrix-> iy < matrix-> columns; matrix->iy++){


if(matrix->data[matrix->ix][matrix->iy] == 0 && result == true){


result = true;
}
else{

result = false;


}
}
}
}
}


return(result);
}











void method_07(){
    bool resposta = false;
ref_int_matrix matrix = freadmatrix("MATRIX1.TXT");
if(matrix != NULL){
if(matrix->data != NULL){

resposta = OnlyZeroes(matrix);


}

}


printf("%s[%d]\n", "Tem somente 0? ", resposta);
printf("%s\n", "Aperte ENTER para continuar");
getchar();
}





bool matrixcompare(ref_int_matrix matrix, ref_int_matrix matrix2){
bool result = true;
if(matrix != NULL){
if(matrix->data != NULL){

for(matrix->ix = 0; matrix-> ix < matrix-> rows; matrix->ix++){
for(matrix->iy = 0; matrix-> iy < matrix-> columns; matrix->iy++){


if(matrix->data[matrix->ix][matrix->iy] == matrix2->data[matrix->ix][matrix->iy] && result == true){


result = true;
}
else{

result = false;


}
}
}
}
}

return(result);

}





void method_08(){
    bool result = false;
ref_int_matrix matrix = freadmatrix("DADOS3.TXT");
ref_int_matrix matrix2 = numbers();
fprintmatrix("DADOS4.TXT",matrix2);
ref_int_matrix matrix3 = freadmatrix("DADOS4.TXT");

result = matrixcompare(matrix, matrix3);

printf("%s[%d]\n", "Sao iguais? ", result);
printf("%s\n", "Aperte ENTER para continuar");
getchar();
}


int somaMatrix(ref_int_matrix matrix, int k,ref_int_matrix matrix2){
int soma = 0;
if(matrix != NULL){
if(matrix->data != NULL){
for(matrix->ix = 0; matrix->ix < matrix-> rows; matrix->ix++){
for(matrix->iy = 0; matrix->iy < matrix-> columns; matrix->iy++){

soma = soma + (matrix->data[matrix->ix][matrix->iy] + (k*matrix2->data[matrix->ix][matrix->iy]));

}
}
}
}


return(soma);

}


void method_09(){
int soma = 0;
int k = -1;
ref_int_matrix matrix = freadmatrix("DADOS3.TXT");
ref_int_matrix matrix2 = freadmatrix("DADOS4.TXT");
if(matrix != NULL && matrix2 != NULL){
if(matrix->data != NULL && matrix2->data != NULL){

soma = somaMatrix(matrix, k, matrix2);

}

}
printf("%s= %d\n", "Soma", soma);
printf("%s\n", "Aperte ENTER para continuar");
getchar();

}



int produtomatrix(ref_int_matrix matrix,ref_int_matrix matrix2){
int soma = 0;
if(matrix != NULL){
if(matrix->data != NULL){
for(matrix->ix = 0; matrix->ix < matrix-> rows; matrix->ix++){
for(matrix->iy = 0; matrix->iy < matrix-> columns; matrix->iy++){

soma = soma + (matrix->data[matrix->ix][matrix->iy] * matrix2->data[matrix->ix][matrix->iy]);

}
}
}
}


return(soma);

}


void method_10(){
int soma = 0;
ref_int_matrix matrix = freadmatrix("DADOS3.TXT");
ref_int_matrix matrix2 = freadmatrix("DADOS4.TXT");
if(matrix != NULL && matrix2 != NULL){
if(matrix->data != NULL && matrix2->data != NULL){

soma = produtomatrix(matrix, matrix2);

}

}
printf("%s= %d\n", "Soma dos produtos", soma);
printf("%s\n", "Aperte ENTER para continuar");
getchar();

}


int sortarray(ref_int_matrix matrix){

int matrix2 [matrix->rows][matrix->columns];
int total_elements = matrix->rows * matrix->columns;
int temp = 0;
if(matrix != NULL){
if(matrix->data != NULL){
    for (int i = 0; i < total_elements - 1; i++) {
            for(matrix->ix = 0; matrix->ix < matrix-> rows; matrix->ix++){
for(matrix->iy = 0; matrix->iy < matrix-> columns; matrix->iy++){




            
            int r1 = i / matrix->columns;
            int c1 = i % matrix->columns;

           
            int r2 = (i + 1) / matrix->columns;
            int c2 = (i + 1) % matrix->columns;

            // 3. Critério de ordenação (Decrescente)
            if (matrix->data[r1][c1] < matrix->data[r2][c2]) {
                
                temp = matrix->data[r1][c1];
                matrix->data[r1][c1] = matrix->data[r2][c2];
                matrix->data[r2][c2] = temp;


            }
        }
    }
    }
}
}
}








