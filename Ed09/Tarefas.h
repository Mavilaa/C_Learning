#include"io.h"
const int MAX = 10;


void readpositivematrix(int i, int j , double matrix[][MAX]){
int x = 0;
int y = 0;

for(x = 0; x < i; x++){


for(y = 0; y< j; y++){

printf("%s[%d][%d]\n", "Escolha um valor real para: ", x , y);
scanf("%lf", &matrix[x][y]);getchar();
if(matrix[x][y] < 0){

printf("%s\n", "Escolha um valor positivo!");
y--;
}//end if


}//end for
}//end for


}





void printdoublematrix(int i , int j , double matrix[][MAX]){

int x = 0;
int y = 0;

printf("\n");
for(x = 0; x < i; x++){

for(y = 0; y < j; y++){


printf("%lf\t", matrix[x][y]);


}

printf("\n");


}



}




void method_01(){
int x = 0;
int y = 0;

int i = 0;
int j = 0;
do{
printf("%s", "Escolha a quantidade de linhas: ");
scanf("%d", &i);getchar();
printf("%s", "Escolha a quantidade de colunas: ");
scanf("%d", &j);getchar();
double matrix[MAX][MAX];

if(i <= 0 || j<= 0 || i > MAX || j > MAX){

printf("%s%d\n", "Dimensoes invalidas!, 0 <  || >  ", MAX);

}

else{
    
readpositivematrix(i, j , matrix);

printdoublematrix(i,j,matrix);

}//end else



}while(i <= 0 || i > 100 || j <= 0 || j > 100);



printf("\n%s", "Aperte ENTER para continuar");
getchar();  
}




void fprintdoublematrix(char fileName [],int i , int j , double matrix[][MAX]){
FILE* arquivo = fopen(fileName, "wt");
int x = 0;
int y = 0;
fprintf(arquivo, "%d\n", i);
fprintf(arquivo, "%d\n", j);
for(x = 0; x < i; x++){

for(y = 0; y < j; y++){

fprintf(arquivo, "%lf\n", matrix[x][y]);

}


}



fclose(arquivo);
}





void method_02(){

int x = 0;
int y = 0;

int i = 0;
int j = 0;
do{
printf("%s", "Escolha a quantidade de linhas: ");
scanf("%d", &i);getchar();
printf("%s", "Escolha a quantidade de colunas: ");
scanf("%d", &j);getchar();
double matrix[MAX][MAX];

if(i <= 0 || j<= 0 || i > MAX || j > MAX){

printf("%s%d\n", "Dimensoes invalidas!, 0 <  || >  ", MAX);

}

else{
    
readpositivematrix(i, j , matrix);
fprintdoublematrix("MATRIX1.TXT",i,j, matrix);
printdoublematrix(i,j,matrix);

}//end else


}while(i <= 0 || i > 100 || j <= 0 || j > 100);


printf("\n%s", "Aperte ENTER para continuar");
getchar();  

}

void printdiagonal(int i , int j , double matrix[][MAX]){
int x = 0;
int y = 0;
printf("\n");
for(x = 0; x < i; x++){

for(y = 0; y < j; y++){

if(x == y){

printf("%lf\n", matrix[x][y]);



}
}
}



}




void method_03(){
int x = 0;
int y = 0;

int i = 0;
int j = 0;
do{
printf("%s", "Escolha a quantidade de linhas: ");
scanf("%d", &i);getchar();
printf("%s", "Escolha a quantidade de colunas: ");
scanf("%d", &j);getchar();
double matrix[MAX][MAX];

if(i <= 0 || j<= 0 || i > MAX || j > MAX){

printf("%s%d\n", "Dimensoes invalidas!, 0 <  || >  ", MAX);

}

else{
    
readpositivematrix(i, j , matrix);
printdoublematrix(i,j,matrix);
printdiagonal(i,j, matrix);

}//end else


}while(i <= 0 || i > 100 || j <= 0 || j > 100);


printf("\n%s", "Aperte ENTER para continuar");
getchar();  


}


void printseconddiagonal(int i , int j , double matrix[][MAX]){
int x = 0;
int y = 0;
printf("\n");
for(x = 0; x < i; x++){

for(y = 0; y < j; y++){

if(x + y == i - 1){

printf("%lf\n", matrix[x][y]);



}
}
}



}




void method_04(){
int x = 0;
int y = 0;

int i = 0;
int j = 0;
do{
printf("%s", "Escolha a quantidade de linhas: ");
scanf("%d", &i);getchar();
printf("%s", "Escolha a quantidade de colunas: ");
scanf("%d", &j);getchar();
double matrix[MAX][MAX];

if(i <= 0 || j<= 0 || i > MAX || j > MAX){

printf("%s%d\n", "Dimensoes invalidas!, 0 <  || >  ", MAX);

}

else{
    
readpositivematrix(i, j , matrix);
printdoublematrix(i,j,matrix);
printseconddiagonal(i,j, matrix);

}//end else


}while(i <= 0 || i > 100 || j <= 0 || j > 100);


printf("\n%s", "Aperte ENTER para continuar");
getchar();  


}





void printLDdiagonal(int i , int j , double matrix[][MAX]){
int x = 0;
int y = 0;
printf("\n");
for(x = 0; x < i; x++){

for(y = 0; y < j; y++){

if(x == y){

printf("%lf\n", matrix[x+1][y]);



}
}
}



}




void method_05(){
int x = 0;
int y = 0;

int i = 0;
int j = 0;
do{
printf("%s", "Escolha a quantidade de linhas: ");
scanf("%d", &i);getchar();
printf("%s", "Escolha a quantidade de colunas: ");
scanf("%d", &j);getchar();
double matrix[MAX][MAX];

if(i <= 0 || j<= 0 || i > MAX || j > MAX){

printf("%s%d\n", "Dimensoes invalidas!, 0 <  || >  ", MAX);

}

else{
    
readpositivematrix(i, j , matrix);
printdoublematrix(i,j,matrix);
printLDdiagonal(i,j, matrix);

}//end else


}while(i <= 0 || i > 100 || j <= 0 || j > 100);


printf("\n%s", "Aperte ENTER para continuar");
getchar();  


}



void printLUdiagonal(int i , int j , double matrix[][MAX]){
int x = 0;
int y = 0;
printf("\n");
for(x = 0; x < i; x++){

for(y = 0; y < j; y++){

if(x == y){

printf("%lf\n", matrix[x-1][y]);



}
}
}



}




void method_06(){
int x = 0;
int y = 0;

int i = 0;
int j = 0;
do{
printf("%s", "Escolha a quantidade de linhas: ");
scanf("%d", &i);getchar();
printf("%s", "Escolha a quantidade de colunas: ");
scanf("%d", &j);getchar();
double matrix[MAX][MAX];

if(i <= 0 || j<= 0 || i > MAX || j > MAX){

printf("%s%d\n", "Dimensoes invalidas!, 0 <  || >  ", MAX);

}

else{
    
readpositivematrix(i, j , matrix);
printdoublematrix(i,j,matrix);
printLUdiagonal(i,j, matrix);

}//end else


}while(i <= 0 || i > 100 || j <= 0 || j > 100);


printf("\n%s", "Aperte ENTER para continuar");
getchar();  


}


void printLDseconddiagonal(int i , int j , double matrix[][MAX]){
int x = 0;
int y = 0;
printf("\n");
for(x = 0; x < i; x++){

for(y = 0; y < j; y++){

if(x + y == i - 1){

printf("%lf\n", matrix[x+1][y]);



}
}
}



}




void method_07(){
int x = 0;
int y = 0;

int i = 0;
int j = 0;
do{
printf("%s", "Escolha a quantidade de linhas: ");
scanf("%d", &i);getchar();
printf("%s", "Escolha a quantidade de colunas: ");
scanf("%d", &j);getchar();
double matrix[MAX][MAX];

if(i <= 0 || j<= 0 || i > MAX || j > MAX){

printf("%s%d\n", "Dimensoes invalidas!, 0 <  || >  ", MAX);

}

else{
    
readpositivematrix(i, j , matrix);
printdoublematrix(i,j,matrix);
printLDseconddiagonal(i,j, matrix);

}//end else


}while(i <= 0 || i > 100 || j <= 0 || j > 100);


printf("\n%s", "Aperte ENTER para continuar");
getchar();  


}

void printLUseconddiagonal(int i , int j , double matrix[][MAX]){
int x = 0;
int y = 0;
printf("\n");
for(x = 0; x < i; x++){

for(y = 0; y < j; y++){

if(x + y == i - 1){

printf("%lf\n", matrix[x-1][y]);



}
}
}



}




void method_08(){
int x = 0;
int y = 0;

int i = 0;
int j = 0;
do{
printf("%s", "Escolha a quantidade de linhas: ");
scanf("%d", &i);getchar();
printf("%s", "Escolha a quantidade de colunas: ");
scanf("%d", &j);getchar();
double matrix[MAX][MAX];

if(i <= 0 || j<= 0 || i > MAX || j > MAX){

printf("%s%d\n", "Dimensoes invalidas!, 0 <  || >  ", MAX);

}

else{
    
readpositivematrix(i, j , matrix);
printdoublematrix(i,j,matrix);
printLUseconddiagonal(i,j, matrix);

}//end else


}while(i <= 0 || i > 100 || j <= 0 || j > 100);


printf("\n%s", "Aperte ENTER para continuar");
getchar();  


}


bool allzerosdiagonal(int i , int j , double matrix[][MAX]){
int x = 0;
int y = 0;
bool result = true;
printf("\n");
while(x < i){
y = 0;
while(y < j){

if(x == y){

result = result &&(matrix[x][y] == 0);



}



y++;
}



x++;
}


return(result);
}




void method_09(){
int x = 0;
int y = 0;
bool result = 0;
int i = 0;
int j = 0;
do{
printf("%s", "Escolha a quantidade de linhas: ");
scanf("%d", &i);getchar();
printf("%s", "Escolha a quantidade de colunas: ");
scanf("%d", &j);getchar();
double matrix[MAX][MAX];

if(i <= 0 || j<= 0 || i > MAX || j > MAX){

printf("%s%d\n", "Dimensoes invalidas!, 0 <  || >  ", MAX);

}

else{
    
readpositivematrix(i, j , matrix);
printdoublematrix(i,j,matrix);
result = allzerosdiagonal(i,j, matrix);

printf("%s%d\n", "allzerosdiagonal(matrix) = ", result);
}//end else


}while(i <= 0 || i > 100 || j <= 0 || j > 100);


printf("\n%s", "Aperte ENTER para continuar");
getchar();  


}


bool allzerosSdiagonal(int i , int j , double matrix[][MAX]){
int x = 0;
int y = 0;
bool result = true;
printf("\n");
while(x < i){
y = 0;
while(y < j){

if(x + y == i - 1){

result = result &&(matrix[x][y] == 0);



}



y++;
}



x++;
}


return(result);
}




void method_10(){
int x = 0;
int y = 0;
bool result = 0;
int i = 0;
int j = 0;
do{
printf("%s", "Escolha a quantidade de linhas: ");
scanf("%d", &i);getchar();
printf("%s", "Escolha a quantidade de colunas: ");
scanf("%d", &j);getchar();
double matrix[MAX][MAX];

if(i <= 0 || j<= 0 || i > MAX || j > MAX){

printf("%s%d\n", "Dimensoes invalidas!, 0 <  || >  ", MAX);

}

else{
    
readpositivematrix(i, j , matrix);
printdoublematrix(i,j,matrix);
result = allzerosSdiagonal(i,j, matrix);

printf("%s%d\n", "allzerosdiagonal(matrix) = ", result);
}//end else


}while(i <= 0 || i > 100 || j <= 0 || j > 100);


printf("\n%s", "Aperte ENTER para continuar");
getchar();  


}
