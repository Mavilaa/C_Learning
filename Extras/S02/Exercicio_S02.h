#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>


typedef struct int_array{

int length;
int *data;
int ix;


}array;


typedef array* ref_int_array;

ref_int_array new_int_array(int n){


ref_int_array tmparray = (ref_int_array)malloc((sizeof(array)));

if(tmparray == NULL){
printf("%s\n", "Falta espaço");

}

else{

tmparray->data = NULL;
tmparray->length = 0;
tmparray->ix = 1;
if(n > 0){

tmparray->length = n;
tmparray-> data = (int*)malloc(n*(sizeof(int)));
tmparray->ix = 0;
}
}
return(tmparray);
}


void free_int_array(ref_int_array tmparray){
if(tmparray != NULL){

if(tmparray->data != NULL){



free(tmparray->data);


}


free(tmparray);
}


}


void freadarray(char fileName[], array array){
if (array.data == NULL) return;
FILE *arquivo = fopen(fileName, "wt");
if (arquivo == NULL) return;
fprintf(arquivo, "%d\n", array.length);
for(int i = 0; i < array.length; i++){

fprintf(arquivo, "%d\n", array.data[i]);

}

fclose(arquivo);

}

void freadarray0(char fileName[], array array, int x){
if (array.data == NULL) return;
FILE *arquivo = fopen(fileName, "wt");
if (arquivo == NULL) return;
fprintf(arquivo, "%d\n", x);
for(int i = 0; i < x; i++){

fprintf(arquivo, "%d\n", array.data[i]);

}

fclose(arquivo);

}



void freadarrayout(char out[], array array){
if (array.length < 4 || array.data == NULL) return;
FILE* saida = fopen(out, "wt");
if (saida == NULL) return;
int num_pontos = array.length / 2;
int num_distancias = num_pontos - 1;
fprintf(saida, "%d\n", num_distancias);
for(int x = 0; x < array.length - 2; x += 2){

int distanciax = array.data[x] - array.data[x+2];
int distanciay = array.data[x+1] - array.data[x+3];
int distancia_real = (int)round(sqrt(pow(distanciax, 2) + pow(distanciay, 2)));
fprintf(saida, "%d\n", distancia_real);

}

fclose(saida);

}



void method_01(){
array array;
int n = 0;
int y = 0;
printf("%s\n", "Insira uma quantidade: ");
scanf("%d", &n); getchar();
array.length = n;
array.data = (int*)malloc(array.length*(sizeof(int)));
for(int x = 0; x < array.length;x++){
printf("%s[%d]:", "Escolha um numero ", x);
scanf("%d", &array.data[x]);
if(x > 0 && array.data[x-1] == 0 && array.data[x] == 0){

freadarray0("DADOS1.TXT", array, y);
freadarrayout("SAIDA1.TXT", array);
}
y++;
}
freadarray("DADOS1.TXT", array);
freadarrayout("SAIDA1.TXT", array);


free(array.data);

printf("%s\n", "Aperte ENTER para continuar");
getchar();

}



array fread_intarray(char fileName[]){
FILE* arquivo = fopen(fileName, "rt");
static array array;
if (arquivo == NULL) {
array.length = 0;
array.data = NULL;
 return array;
}
int z = 0;
if (fscanf(arquivo, "%d", &z) != 1){ z = 0;}
array.length = z;

if (z > 0) {
array.data = (int*)malloc(z*(sizeof(int)));
for(array.ix = 0; array.ix < array.length; array.ix++)
 {
 fscanf(arquivo, "%d", &z);
array.data[array.ix] = z;
}
} else {
array.data = NULL;
}


fclose(arquivo);

return(array);
}

int bdistance(array array){
if (array.length <= 0 || array.data == NULL) return 0;
int x = array.data[0];
for(array.ix = 1; array.ix < array.length; array.ix++){
if(array.data[array.ix] > x){

x = array.data[array.ix];


}
}


return(x);

}


int sdistance(array array){
if (array.length <= 0 || array.data == NULL) return 0;
int x = array.data[0];
for(array.ix = 1; array.ix < array.length; array.ix++){
if(array.data[array.ix] < x){

x = array.data[array.ix];


}
}
return(x);

}





void method_02(){
array array1 = fread_intarray("SAIDA1.TXT");
int maior = 0;
int menor = 0;
maior = bdistance(array1);
menor = sdistance(array1);

printf("%s%d\n", "Maior distancia: ", maior);
printf("%s%d\n", "Menor distancia: ", menor);

free(array1.data);
printf("%s\n", "Aperte ENTER para continuar");
getchar();
}

ref_int_array fread_intsarray(char fileName[]){
FILE* arquivo = fopen(fileName, "rt");
int z = 0;
fscanf(arquivo, "%d", &z);
ref_int_array array = new_int_array(z);

if (z > 0) {
 array->data = (int*)malloc(z*(sizeof(int)));
 for(array->ix = 0; array->ix < array->length; array->ix++)
 {
 fscanf(arquivo, "%d", &z);
 array->data[array->ix] = z;
}
} else {
array->data = NULL;
}
fclose(arquivo);
return(array);
}

int averagearray(ref_int_array array){
int soma = 0;
int media = 0;
 for(array->ix = 0; array->ix < array->length; array->ix++){
 
    soma = soma + array->data[array->ix];
}

media = soma/array->length;


return(media);
}





void method_03(){
int media = 0;
ref_int_array array = fread_intsarray("SAIDA1.TXT");

media = averagearray(array);



printf("%s%d\n", "Distancia media: ", media);

free(array->data);
printf("%s\n", "Aperte ENTER para continuar");
getchar();
}



typedef struct int_matrix{

int** data;
int columns;
int rows;
int ix;
int iy;



} matrix;


typedef matrix* ref_int_matrix;


ref_int_matrix new_int_matrix(int i , int j){

ref_int_matrix tmpmatrix = (ref_int_matrix)malloc(sizeof(matrix));

if(tmpmatrix == NULL){

printf("%s\n", "Falta espaço");

}
else{

tmpmatrix->data = NULL;
tmpmatrix->columns = 0;
tmpmatrix->rows = 0;
if(i > 0 && j > 0){
tmpmatrix->columns = j;
tmpmatrix->rows = i;
tmpmatrix->data = malloc(i*(sizeof(int*)));
if(tmpmatrix->data){
for(tmpmatrix->ix = 0; tmpmatrix->ix< tmpmatrix->rows; tmpmatrix->ix++){

tmpmatrix->data[tmpmatrix->ix] = (int*)malloc(j*(sizeof(int)));
}
}
}
tmpmatrix->ix = 0;
tmpmatrix->iy = 0;
}


 return(tmpmatrix);
}

void free_int_matrix(ref_int_matrix matrix){
if(matrix != NULL){
if(matrix->data != NULL){

for(matrix->ix = 0; matrix->ix < matrix->rows; matrix->ix++){



free(matrix->data[matrix->ix]);


}

free(matrix->data);


}

}

free(matrix);
}

ref_int_matrix freadmatrix(char fileName[]){
FILE* arquivo = fopen(fileName, "rt");
 int i = 0;
 int j = 0;
 int x = 0;
 fscanf(arquivo, "%d", &i);
 fscanf(arquivo, "%d", &j);


ref_int_matrix matrix = new_int_matrix(i,j);

for(matrix->ix = 0; matrix->ix < matrix->rows; matrix->ix++){

for(matrix->iy = 0; matrix->iy < matrix->columns; matrix->iy++){

fscanf(arquivo, "%d", &matrix->data[matrix->ix][matrix->iy]);


}
}


fclose(arquivo);
return(matrix);
}


void sort_int_matrix(ref_int_matrix matrix){
int x = 0;
int y = matrix->rows * matrix->columns;
int a = 0;
if(matrix->data != NULL){
for(x = 0; x < y; x++){
for(matrix->ix = 0; matrix->ix < matrix->rows-1; matrix->ix++){

for(matrix->iy = 0; matrix->iy < matrix->columns; matrix->iy++){


if((matrix->data[matrix->ix][0] < matrix->data[matrix->ix+1][0]) || 
(matrix->data[matrix->ix][0] == matrix->data[matrix->ix+1][0] && matrix->data[matrix->ix][1] <= matrix->data[matrix->ix+1][1])){

matrix->data[matrix->ix][matrix->iy] = matrix->data[matrix->ix][matrix->iy];

}
else{

a = matrix->data[matrix->ix][matrix->iy];
matrix->data[matrix->ix][matrix->iy]= matrix->data[matrix->ix+1][matrix->iy];
matrix->data[matrix->ix+1][matrix->iy] = a;

}

}
}
}


}

}

void print_int_matrix(ref_int_matrix matrix){
for(matrix->ix = 0; matrix->ix < matrix->rows; matrix->ix++){

for(matrix->iy = 0; matrix->iy < matrix->columns; matrix->iy++){


printf("%d\t", matrix->data[matrix->ix][matrix->iy]);

}

printf("\n");

}





}



void method_04(){
ref_int_matrix matrix = freadmatrix("MATRIX1.TXT");

sort_int_matrix(matrix);

print_int_matrix(matrix);

free_int_matrix(matrix);

printf("%s\n", "Aperte ENTER para continuar");
getchar();
}

int calcular_distancia(ref_int_matrix matrix){
int d = 0.0;
if(matrix != NULL && matrix->data != NULL && matrix->rows > 0 && matrix->columns >= 2){
int x1 = matrix->data[0][0];
int y1 = matrix->data[0][1];
int x2 = matrix->data[matrix->rows - 1][0];
int y2 = matrix->data[matrix->rows - 1][1];
d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
return(d);
}

void method_05(){
ref_int_matrix matrix = freadmatrix("MATRIX1.TXT");
int resultado = 0;
if(matrix != NULL){
sort_int_matrix(matrix);
print_int_matrix(matrix);
resultado = calcular_distancia(matrix);
printf("Distancia entre o primeiro e o ultimo par: %d\n", resultado);
free_int_matrix(matrix);
}
printf("%s\n", "Aperte ENTER para continuar");
getchar();
}