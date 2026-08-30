#include"io.h"

typedef struct s_int_Array{

int length;
ints data;
int ix;



} int_array;

typedef int_array* ref_int_array;



    ref_int_array new_int_array(int n){


    ref_int_array tmpArray = (ref_int_array) malloc (sizeof(int_array));


    if(tmpArray == NULL){
        
    printf("%s\n", "Falta espaço");

    }else{

    tmpArray->length = 0;
    tmpArray-> data = NULL;
    tmpArray-> ix = 1;

    if(n > 0){

    tmpArray->length = n;
    tmpArray->data = (ints)malloc(n*sizeof(int));


    tmpArray->ix = 0;
}


}

return(tmpArray);

}



void free_int_array(ref_int_array tmpArray){

    if(tmpArray!= NULL){

    if(tmpArray->data!= NULL){
        

    free(tmpArray->data);

    }

    free(tmpArray);

    }

}


void printintarray(int_array array){

    if(array.data){

    for(array.ix = 0; array.ix< array.length; array.ix++){


    printf("%2d: %d\n", array.ix, array.data[array.ix]);



}



}



}















void example_01(){

int_array array;

array.length = 5;

array.data = (ints)malloc(array.length*sizeof(int));

if(array.data){

array.data[0] = 1;
array.data[1] = 2;
array.data[2] = 3;
array.data[3] = 4;
array.data[4] = 5;

}


printintarray(array);

if(array.data){

free(array.data);

}

printf("%s\n", "Aperte ENTER para terminar");
getchar();

}



int_array IO_readintArray(){



char text [80] = "";
static int_array array;

do{
array.length = IO_readint("\nlength = ");
}while(array.length <= 0);

array.data = IO_new_ints(array.length);

if(array.data == NULL){

array.length = 0;

}else{

for(array.ix = 0; array.ix< array.length; array.ix++){


strcpy(text, STR_EMPTY); 
array.data[array.ix] = IO_readint( IO_concat (
 IO_concat ( text, IO_toString_d ( array.ix ) ), " : " ) );





}




}

return(array);

}









void example_02(){

int_array array;

array = IO_readintArray();

if(array.data){

printf("\n");
printintarray(array);
free(array.data);

}



printf("%s\n", "Aperte ENTER para terminar");
getchar();

}


void fprintintarray(char fileName[],int_array array){         // esse int_array array pega os valores da struct que vc guardou na variavel array.
FILE *arquivo = fopen(fileName, "wt");

fprintf(arquivo, "%d\n", array.length); // copia a length

if(array.data){ // se a copia dos dados da array for verdadeira

for(array.ix = 0; array.ix < array.length; array.ix++){


fprintf(arquivo, "%d\n", array.data[array.ix]);

}

}

fclose(arquivo);


} 






void example_03(){
int_array array;


array = IO_readintArray();


if(array.data){

printf("\n");

printintarray(array);
fprintintarray("DADOS1.TXT", array);

free(array.data);


}



printf("%s\n", "Aperte ENTER para terminar");
getchar();

}


int freadArraySize(char fileName []){
FILE *arquivo = fopen(fileName, "rt");
int x = 0;
if(arquivo){
fscanf(arquivo, "%d", &x);

}
if(x <= 0){

printf("%s", "ERRO: Valor invalido!\n");

}

fclose(arquivo);
return(x);
}



int_array freadIntArray(char fileName []){ // os valores aqui são salvos no struct principal
FILE *arquivo = fopen(fileName, "rt");
static int_array array;
int x = 0;
int y = 0;
if(arquivo){

fscanf(arquivo, "%d", &array.length);

}
if(array.length <= 0){

printf("%s", "Não há dados");

}else{

array.data = IO_new_ints(array.length);

if(array.data){

array.ix = 0;
while(!feof(arquivo) && array.ix<array.length){

fscanf(arquivo, "%d", &array.data[array.ix]);

array.ix++;
        }  
     }
}


fclose(arquivo);
//essa função lê primeiro o tamanho da array(primeiro dado do arquivo), guarda em array.length e depois guarda os dados do arquivo em array.data
return(array);
}







void example_04(){
int_array array;

array = freadIntArray("DADOS1.TXT"); // já pega todos os dados direto 

if(array.data){

printf("\n");
printintarray(array);

free(array.data); // serve pra liberar o espaço para a proxima execucao do codigo

}



printf("%s\n", "Aperte ENTER para terminar");
getchar();
}


ref_int_array copyintArray(int_array array){ // manda os 3 dados direto
int x  = 0;
int y = 0;
ref_int_array copy;

if(array.length <= 0){

printf("%s", "Erro: Valor invalido!\n");

}else{

copy = new_int_array(array.length);

if(copy){

copy->length = array.length;
copy-> data = IO_new_ints(copy->length);

if(copy->data == NULL ||  array.data ==  NULL  ){


printf("%s", "Falta espaço ou dados!\n");


}
else{

for(array.ix = 0; array.ix< array.length; array.ix++){


copy->data[array.ix] = array.data[array.ix];


            }
        }
    }
}



return(copy);


}





void example_05(){

int_array array;
ref_int_array copy;

array = freadIntArray("DADOS1.TXT");

copy = copyintArray(array);

if(array.data){

    printf("Original\n");
    printintarray(array);
    printf("Copia\n");
    printintarray(*copy);

    free(array.data);
    free(copy->data);
    free(copy);

}


printf("%s\n", "Aperte ENTER para terminar");
getchar();
}





typedef struct s_int_matrix{

    int rows;
    int columns;
    ints *data;
    int ix, iy;

}int_matrix;



typedef int_matrix* ref_int_matrix;




ref_int_matrix new_int_Matrix(int i, int j){

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



void free_int_Matrix(ref_int_matrix matrix){

if(matrix!= NULL){

if(matrix->data != NULL){
    
for(matrix->ix = 0;matrix->ix < matrix->rows; matrix->ix++){
    

free(matrix->data[matrix->ix]);

}

free(matrix->data);

}
free(matrix);

}


}





void printintMatrix(ref_int_matrix matrix){

if(matrix != NULL && matrix->data != NULL){
for(matrix->ix = 0; matrix->ix < matrix->rows; matrix->ix++){
for(matrix->iy = 0; matrix->iy < matrix-> columns; matrix->iy++){


printf("%3d\t", matrix->data[matrix->ix][matrix->iy]);


}
printf("\n");

}
}

}


void example_06(){

ref_int_matrix matrix = new_int_Matrix(3,3);


if(matrix != NULL && matrix->data != NULL){

matrix->data[0][0] = 1; matrix->data[0][1] = 2; matrix->data[0][2] = 3;
matrix->data[1][0] = 4; matrix->data[1][1] = 5; matrix->data[1][2] = 6;
matrix->data[2][0] = 7; matrix->data[2][1] = 8; matrix->data[2][2] = 9;

}

printintMatrix(matrix);


free_int_Matrix(matrix);

}


ref_int_matrix readintMatrix ( )
{
// definir dados locais
 int rows = 0;
 int columns = 0;
 chars text = IO_new_chars ( STR_SIZE );
// ler a quantidade de dados
 do
 { rows = IO_readint ( "\nrows = " ); }
 while ( rows <= 0 );
 do
 { columns = IO_readint ( "\ncolumns = " ); }
 while ( columns <= 0 );
// reservar espaco para armazenar valores
 ref_int_matrix matrix = new_int_Matrix ( rows, columns );
// testar se ha' espaco
 if ( matrix != NULL )
 {
 if ( matrix->data == NULL )
 {
 // nao ha' espaco
 matrix->rows = 0;
 matrix->columns = 0;
 matrix->ix = 0;
 matrix->iy = 0;
 }
 else
 {
 // ler e guardar valores na matriz
 for ( matrix->ix=0; matrix->ix<matrix->rows; matrix->ix=matrix->ix+1 )
 {
 for ( matrix->iy=0; matrix->iy<matrix->columns; matrix->iy=matrix->iy+1 )
 {
 // ler e guardar valor
 strcpy ( text, STR_EMPTY );
 matrix->data [ matrix->ix ][ matrix->iy ]
 = IO_readint ( IO_concat (
 IO_concat ( IO_concat ( text, IO_toString_d ( matrix->ix ) ), ", " ),
 IO_concat ( IO_concat ( text, IO_toString_d ( matrix->iy ) ), " : " ) ) );
 } // end for
 printf ( "\n" );
 } // end for
 } // end if
 } // end if
// retornar dados lidos
 return ( matrix );
} // end IO_readintMatrix 





void example_07(){

ref_int_matrix matrix = NULL;

matrix = readintMatrix();


printintMatrix(matrix);



free_int_Matrix(matrix);


}


ref_int_matrix fprintmatrix(char fileName [], ref_int_matrix matrix ){

FILE * arquivo = fopen(fileName, "wt");

if(matrix == NULL){


printf("%s\n", "Nao tem dados!");


}
else{
fprintf(arquivo, "%d\n", matrix->rows);
fprintf(arquivo, "%d\n", matrix->columns);

for(matrix-> ix = 0; matrix-> ix < matrix->rows; matrix->ix++){

for(matrix-> iy = 0; matrix-> iy < matrix->columns; matrix->iy++){


fprintf(arquivo, "%d\n", matrix->data[matrix->ix][matrix->iy]);

}


}

}


fclose(arquivo);
}



void example_08(){

ref_int_matrix matrix = NULL;


matrix = readintMatrix();

fprintmatrix("MATRIX1.TXT",matrix);

printintMatrix(matrix);


free_int_Matrix(matrix);





}


ref_int_matrix freadintMatrix(char fileName[]){
FILE* arquivo = fopen(fileName, "rt");
int i = 0;
int j = 0;
ref_int_matrix matrix = NULL;
fscanf(arquivo, "%d", &i);
fscanf(arquivo, "%d", &j);
if(i <= 0 || j <= 0){


printf("%s\n", "Valor Invalido!");



}
else{
matrix = new_int_Matrix(i, j);

if(matrix != NULL && matrix->data == NULL){
 matrix->rows = 0;
 matrix->columns = 0;
 matrix->ix = 0;
 matrix->iy = 0;

}else{

if(matrix!= NULL){

matrix-> ix = 0;
while(!feof (arquivo) && matrix->ix < matrix->rows){
matrix->iy = 0;
while(!feof(arquivo) && matrix-> iy < matrix->columns){


fscanf(arquivo, "%d", &(matrix->data[matrix->ix][matrix->iy]));



matrix->iy++;
}




matrix->ix++;
}
}
}
}

return(matrix);

}


void example_09(){

ref_int_matrix matrix = freadintMatrix("MATRIX1.TXT");

printintMatrix(matrix);

free_int_Matrix(matrix);

}


ref_int_matrix copyIntMatrix ( ref_int_matrix matrix )
{
// definir dados locais
 ref_int_matrix copy = NULL;
 if ( matrix == NULL || matrix->data == NULL )
 {
 IO_printf ( "\nERRO: Faltam dados.\n" );
 }
 else
 {
 if ( matrix->rows <= 0 || matrix->columns <= 0 )
 {
 IO_printf ( "\nERRO: Valor invalido.\n" );
 }
 else
 {
 // reservar espaco
 copy = new_int_Matrix ( matrix->rows, matrix->columns );
 // testar se ha' espaco e dados
 if ( copy == NULL || copy->data == NULL )
 {
 printf ( "\nERRO: Falta espaco." );
 }
 else
 {
 // copiar valores
 for ( copy->ix = 0; copy->ix < copy->rows; copy->ix = copy->ix + 1 )
 {
 for ( copy->iy = 0; copy->iy < copy->columns; copy->iy = copy->iy + 1 )
 {

 copy->data [ copy->ix ][ copy->iy ] = matrix->data [ copy->ix ][ copy->iy ];
 }
 } 
 } 
 }
 } 


 return ( copy );
} 






void example_10 ( )
{
// definir dados
 ref_int_matrix matrix = NULL;
 ref_int_matrix other = NULL;
// identificar
 IO_id ( "Method_10 - v0.0" );

 matrix = freadintMatrix ( "MATRIX1.TXT" );

 other = copyIntMatrix ( matrix );

 IO_printf ( "\nOriginal\n" );
 printintMatrix ( matrix );

 IO_printf ( "\nCopia\n" );
 printintMatrix ( other );

 free_int_Matrix ( matrix );
 free_int_Matrix ( other );

 IO_pause ( "Apertar ENTER para continuar" );
}
