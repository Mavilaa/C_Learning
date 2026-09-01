#include"io.h"


int lerPares(int *n, int array[]){
    
int x = 0; 
int y = 0;
while(x < *n){
if(array[x] % 2 == 0){

array[y] = array[x];
y++;

}


x++;

}

*n = y;

return(*n);

}

void method_01(){

int n = 0;
int x = 0; 
printf("%s", "Escolha um tamanho para a array: ");
scanf("%d", &n);getchar();

if(n <=0){

printf("%s", "Valor invalido!");


}
else{
int array[n];
while(x < n){

printf("%s(%d) ", "Escolha valores para a array: ", x);
scanf("%d", &array[x]);getchar();
x++;
}
n = lerPares(&n, array);



printf("%s\n", "Array somente com os valores pares: ");
for(int i =0; i < n; i++){

printf("%d\n", array[i]);


}


}
printf("%s", "Aperte ENTER para continuar");
getchar();

}



void gravarParesPositivos(int n, int array[], chars fileName){

FILE * arquivo = fopen(fileName, "wt");
int x = 0;
int y = 0;
int z = 0;
while(x < n){
if(array[x] % 2 == 0 && array[x] > 0){

array[y] = array[x];
 
y++;
}


x++;
}

fprintf(arquivo, "%d\n", y); // tamanho do arquivo
while(z < y){


fprintf(arquivo, "%d\n", array[z]); // somente os numeros pares e maiores que 0

z++;
}



fclose(arquivo);
}






void method_02(){

int n = 0;
int x = 0;
printf("%s", "Escolha um tamanho para a array: ");
scanf("%d", &n);getchar();

if(n <=0){

printf("%s", "Valor invalido!");


}
else{

int array[n];

while(x < n){

printf("%s(%d) ", "Escolha valores para a array: ", x);
scanf("%d", &array[x]);getchar();

    x++;
}

gravarParesPositivos(n, array, "DADOS2.TXT");

}

printf("%s", "Aperte ENTER para continuar");
getchar();

}


int gerarInt(int inf, int sup, chars fileName){
int x = 0;
FILE * arquivo = fopen(fileName, "wt");
printf("%s", "Escolha uma quantidade de valores a ser printada: ");
scanf("%d", &x);getchar();
srand(time(NULL));

    fprintf(arquivo,"%d\n", x);
while(x > 0){
int numero = (inf+1) + rand() %(sup - inf) ;
printf("%d\n", numero);
fprintf(arquivo,"%d\n", numero);

x--;
}


fclose(arquivo);

}







void method_03(){

int inf = 0;
int sup = 0;
int valor = 0;
printf("%s", "Defina um limite inferior: ");
scanf("%d", &inf);getchar();
printf("%s", "Defina um limite superior: ");
scanf("%d", &sup);getchar();

valor = gerarInt(inf, sup, "DADOS.TXT");








}



int acharMenorPar(int n, int array[]){

int x = 0;
int y = 0;
int z = 1;

while(x < n){

if(array[x] % 2 == 0){


array[y] = array[x];

y++;

}

    x++;
}

int menor = array[0];
printf("%d\n", array[0]);

while(z < y){
printf("%d\n", array[z]);

if(array[z] < menor){
menor  = array[z];
}

z++;
}//end if



return(menor);

}




void lerArquivo(chars fileName, int n, int arranjo[]){
FILE *arquivo = fopen(fileName, "rt");
int x = 0;
fscanf(arquivo, "%d", &n);
while(x < n){

fscanf(arquivo, "%d\n", &arranjo[x]);

x++;
}

fclose(arquivo);
}




int lerTamanhoArquivo(chars fileName, int n){
FILE *arquivo = fopen(fileName, "rt");
int x = 0;
fscanf(arquivo, "%d", &n);
int array[n];
fclose(arquivo);
return(n);
}






void method_04(){

int n = 0;
int menor = 0;
n = lerTamanhoArquivo("DADOS.TXT", n);
int array[n];
lerArquivo("DADOS.TXT", n , array);

menor = acharMenorPar(n, array);

printf("%s:%d", "Menor par: ", menor);
printf("%s", "Aperte ENTER para continuar");
getchar();
}


int maiorMultiplo3(int n , int array[]){
int x = 0;
int y = 0;
int z = 1;
while(x < n){
if(array[x] % 3 == 0 && array[x] % 5 != 0){

array[y] = array[x];


y++;

}

x++;
}


int maior = array[0];
printf("%d\n", array[0]);
while(z < y){
    printf("%d\n", array[z]);
if(array[z] > maior){

maior = array[z];

}

z++;
}




return(maior);
}





void method_05(){
int n = 0;
int maior = 0;
n = lerTamanhoArquivo("DADOS.TXT", n);
int array[n];

lerArquivo("DADOS.TXT", n , array);

maior = maiorMultiplo3(n, array);

printf("%s: %d\n", "Maior multiplo de 3 e nao de 5", maior);

printf("%s", "Aperte ENTER para continuar");
getchar();

}


int acharMedia(int n, int array[]){
int x = 0;
int soma = 0;
int media = 0;
while(x < n){

soma = soma + array[x];

x++;
}

printf("%d\n", soma);
media = soma/x;



return(media);
}




void method_06(){
int n = 0;
int media = 0;

n = lerTamanhoArquivo("DADOS.TXT", n);
if(n <= 0){

printf("%s", "Erro: Valor Invalido!");

}else{
int array[n];
lerArquivo("DADOS.TXT", n , array);

media = acharMedia(n , array);


printf("%d\n", media);

}


printf("%s", "Aperte ENTER para continuar");
getchar();


}

bool ordenadoDecrescente(int n , int array[]){
int x = n-1;
bool verdade = 1;
int ordem = array[x];
while(x >=0){

   
if(array[x] > ordem){
    
verdade = 0;

}

ordem = array[x];


x--;
}



return(verdade);


}




void method_07(){
int n = 0;
bool ordem = 0;
n = lerTamanhoArquivo("DADOS.TXT", n);
if(n <= 0){

printf("%s", "Erro: Valor Invalido!");

}
else{
int array[n];
lerArquivo("DADOS.TXT", n , array);

ordem = ordenadoDecrescente(n, array);


}

printf("%s:%d\n", "Esta ordenado: ", ordem);


printf("%s", "Aperte ENTER para continuar");
getchar();


}

bool procurarValor(int n, int array[], int index, int valor){

int x = index;
bool fator = 0;
while(x < n){

if(array[x] == valor){

fator = 1;

}

x++;
}



return(fator);

}



void method_08(){
bool achar = 0;
 int n = 0;
int index = 0;
int numero = 0;
n = lerTamanhoArquivo("DADOS.TXT", n);
if(n <= 0){

printf("%s", "Erro: Valor Invalido!");

}
else{


int array[n];
    lerArquivo("DADOS.TXT", n, array);
printf("%s(%d):", "Escolha um index para comecar 0=", n-1);
scanf("%d", &index);getchar();
printf("%s", "Escolha um numero para procurar: ");
scanf("%d", &numero);getchar();

achar = procurarValor(n, array, index, numero);
}

printf("%s:%d\n", "Valor esta presente", achar);

printf("%s", "Aperte ENTER para continuar");
getchar();

}

int procurarIndex(int n, int array[], int index, int valor){
int x = index;
int y = -1;
while(x < n){
if(array[x] == valor){

y = x;

}

x++;
}

return(y);

}



void method_09(){
int lugar = 0;
 int n = 0;
int index = 0;
int numero = 0;
n = lerTamanhoArquivo("DADOS.TXT", n);
if(n <= 0){

printf("%s", "Erro: Valor Invalido!");

}
else{


int array[n];
    lerArquivo("DADOS.TXT", n, array);
printf("%s(%d):", "Escolha um index para comecar 0-", n-1);
scanf("%d", &index);getchar();
printf("%s", "Escolha um numero para procurar: ");
scanf("%d", &numero);getchar();

lugar = procurarIndex(n, array, index, numero);
}

if(lugar == -1){


    printf("%s\n", "O numero nao esta na array");
}
else{

printf("%s[%d]\n", "O numero esta na array", lugar);

}


printf("%s", "Aperte ENTER para continuar");
getchar();

}


int acharQuantos(int n, int array[], int index, int valor){
int x = index;
int repeticoes = 0;
while(x < n){
if(array[x] == valor){


repeticoes++;

}

x++;
}




return(repeticoes);
}






void method_10(){
int vezes = 0;
 int n = 0;
int index = 0;
int numero = 0;
n = lerTamanhoArquivo("DADOS.TXT", n);
if(n <= 0){

printf("%s", "Erro: Valor Invalido!");

}
else{


int array[n];
    lerArquivo("DADOS.TXT", n, array);
printf("%s(%d):", "Escolha um index para comecar 0-", n-1);
scanf("%d", &index);getchar();
printf("%s", "Escolha um numero para procurar: ");
scanf("%d", &numero);getchar();

vezes = acharQuantos(n, array, index, numero);
}

printf("O numero (%d) foi encontrado:%d vezes\n", numero, vezes);

printf("%s", "Aperte ENTER para continuar");
getchar();

}