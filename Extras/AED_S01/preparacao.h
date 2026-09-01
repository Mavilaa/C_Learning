#include <stdio.h>     // para entradas e saidas
#include <stddef.h>    // para definicoes basicas
#include <stdlib.h>    // para a biblioteca padrao
#include <string.h>    // para cadeias de caracteres
#include <stdarg.h>    // para tratar argumentos
#include <stdbool.h>   // para definicoes logicas
#include <ctype.h>     // para tipos padroes
#include <math.h>      // para definicoes matematicas
#include <time.h>      // para medir tempo
#include <wchar.h>     // para 16-bit characters
#include <iso646.h>    // para and, or, xor, not alternatives
void method_01(){

int x = 0;
int y = 0;
double z = 0.0;
do{
printf("%s", "Escolha um valor para o raio: ");
scanf("%d", &x);getchar();
printf("\n%s\n", "Escolha por quanto voce dividira o raio: ");
scanf("%d", &y);getchar();
if(x < 0 || y < 0){

printf("%s\n", "Escolha um valor positivo");

}
else{
    if(x != 0 || y != 0 ){
z = 2*M_PI*(x/y);
printf("%s%lf\n", "Comprimento do circulo: ", z);
}//end if
}//end else
}while(x != 0 || y != 0);



printf("%s", "Aperte ENTER para continuar");
getchar();



}






void method_02(){
int teste = 0;
bool condicao = false;
int controle = 1;
char x = ' ';
char y = ' ';
char z = ' ';
printf("%s", "Escolha a quantidade de testes a serem feitos: ");
scanf("%d", &teste);getchar();
while(controle < teste){
    controle += 1;
printf("%s", "Escolha o primeiro caractere: ");
scanf("%c", &x);getchar();
printf("%s", "Escolha o segundo caractere: ");
scanf("%c", &y);getchar();
printf("%s", "Escolha o terceiro caractere: ");
scanf("%c", &z);getchar();

if((x <= y && y <= z)){

    condicao = true;

}//end if
else{
 condicao = false;
}
if(condicao == true){
     printf("%s\n", "Os valores estao ordenados.");
}//end if
else{

printf("%s\n", "Os valores nao estao ordenados.");

}//end else
}


printf("%s", "Aperte ENTER para continuar");
getchar();

}




void method_03(){
int a = 0;
int b = 0;
int quantidade = 0;
int x = 0;
float y = 0.0f;
int z = 0;
printf("%s", "Escolha um valor para o limite inferior: ");
scanf("%d", &a);getchar();
printf("%s", "Escolha um valor para o limite superior: ");
scanf("%d", &b);getchar();
printf("%s", "Escolha uma quantidade de termos: ");
scanf("%d", &quantidade);getchar();
for(int i = 0; i < quantidade; i++){
printf("%s", "Escolha um valor: ");
scanf("%d", &x);getchar();
y = x/2;
z = x*2;
if((a < x && x <= b) && (a < y && y <= b) && (a < z && z <= b)){


printf("%s%d\n","Valor dentro do intervalo: ", x);

}//end if
}//end for
//encerrar
printf("%s", "Aperte ENTER para continuar");
getchar();
}


void contar(char x[80]){
int contador = 0;
int tamanho = 0;
char z = ' ';
tamanho = strlen(x);
for(int i = 0; i < tamanho; i++){

z = x[i];
if(('a'<= z && z <= 'z') ||('A'<=z && z <= 'Z') || ('0'<=z && z <= '9') || (z == '\0') || (z == '_')){

printf("%c\n", z);
contador = contador + 1;
printf("%s%d\n", "Quantidade de numeros alfanumericos: " ,contador);



}//end if


}//end for


}//end contar



void method_04(){

char s[80] = "";
printf("%s", "Escolha uma cadeia de caracteres: ");
fgets(s, 80-1, stdin);
contar(s);


//encerrar
printf("%s", "Aperte ENTER para continuar");
getchar();


}




int f5(char x[80], int y){
int contador = 0;
int tamanho = 0;
char z = x[y];
if(y >= 0){
contador = f5(x, y -1);
}

if(('a'<= z && z <= 'z') ||('A'<=z && z <= 'Z') || ('0'<=z && z <= '9') || (z == '\0') || (z == '_')){
printf("%c\n", z);
return(contador+1);

}//end if
else{

    return(contador);
}
}//end if


//end contar



void method_05(){

char s[80] = "";
int tamanho = 0;
int quantidade = 0;
printf("%s", "Escolha uma cadeia de caracteres: ");
fgets(s, 80-1, stdin);
tamanho = strlen(s);
quantidade =f5(s, tamanho);
printf("%s%d\n", "Quantidade de numeros alfanumericos: " ,quantidade);


//encerrar
printf("%s", "Aperte ENTER para continuar");
getchar();


}