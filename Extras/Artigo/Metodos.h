#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include"io.h"

void m1(int x){

if(x > 0){

m1(x-1);
printf("%d.%s = %d\n", x, "Multiplos de 3 = ", 3*x);
}



}



void method_01(){
    int quantidade = 0;
   printf("%s", "Insira uma quantidade: ");
    scanf("%d", &quantidade);getchar();
    m1(quantidade);
    //encerrar 
    printf("%s", "Aperte ENTER para continuar");
    getchar();
}


void m2(int x){

if(x > 0){
printf("%d.%s = %d\n", x, "Multiplos de 5 = ", 5*x);
m2(x-1);

}



}



void method_02(){
    int quantidade = 0;
    printf("%s", "Insira uma quantidade: ");
    scanf("%d", &quantidade);getchar();
    m2(quantidade);
    //encerrar 
    printf("%s", "Aperte ENTER para continuar");
    getchar();
}

double m3 ( int x )
{

 double soma = 0.0;

 if ( x > 0 )
 {

 soma = 1.0/(3.0*x) + m3( x - 1 );
 printf("%s%lf\n","Soma = " ,soma);
 }
 else
 {
 soma = 1.0;
 printf ( "%lf\n", 1.0 );
 }

 return ( soma );
} 


void method_03(){
int quantidade = 0;
double soma = 0.0;
printf("%s", "Insira uma quantidade: ");
scanf("%d", &quantidade);getchar();
quantidade = quantidade - 1;
soma = m3(quantidade);
printf("%s%lf\n", "Soma dos multiplos inversos de 3: ", soma);
//encerrar
printf("%s", "Aperte ENTER para continuar");
getchar();
}

double m4(int x){
    double valor = 0.0;
if(x > 0){
valor = 1.0/(5.0*x);
printf("%s%lf\n","Multiplo = " ,valor);
 m4(x-1); 
    

}
else{

valor = 1.0;
printf("%s%lf\n", "Multiplo = ", valor);
}
}


void method_04(){
int quantidade = 0;
int controle = 1;
double soma = 0;
printf("%s", "Insira uma quantidade: ");
scanf("%d", &quantidade);getchar();
m4(quantidade);
printf("Aperte ENTER para continuar");
getchar();


}


int m5(int x){
int soma = 0;
int total = 0;
    if(x > 0){

   
soma = (2*(x-1)+1) + m5(x-1) + m5(x-2) ;
    }
else{

    soma = 3;
}

return (soma);

}


void method_05(){
int quantidade = 0;
int soma = 0;
printf("%s", "Escolha uma quantidade: ");
scanf("%d", &quantidade);getchar();
soma = m5(quantidade-1);
printf("%s%d\n", "Soma = ", soma);
//encerrar
printf("Aperte ENTER para continuar");
getchar();





}
//@return soma dos termos  
// @param x quantidade de termos a serem printados

double m6(int x){
double soma = 0.0;
if(x > 0){

soma = 1.0/(4.0*x) + m6(x- 1 );
printf("%s%lf\n", "Soma = ",soma);

}
else{

    soma = 1.0;
    printf("%s%lf\n", "Soma =" ,soma);
}


return (soma);


}




void method_06(){
    int quantidade = 0;
    double soma = 0.0;
    printf("%s", "Escolha uma quantidade: ");
    scanf("%d", &quantidade); getchar();
    soma = m6(quantidade);
    printf("%s%lf\n", "Soma =" ,soma);

    //encerrar
    printf("%s", "Aperte ENTER para continuar");
    getchar();
}

void m7(char *x , int y){


if(y >= 0 ){

printf("%c\n", x[y]);
m7(x, y-1);


}



}


void method_07(){
    char palavra[80] = " ";
    int tamanho = 0;
    printf("%s", "Escolha uma sequencia de letras: ");
    fgets(palavra, sizeof(palavra)-1, stdin);
    tamanho = strlen(palavra);
    m7(palavra, tamanho);


    //encerrar
    printf("Aperte ENTER para continuar");
    getchar();
}




int m8(char *x , int y){
int contador = 0;
char z = ' ';

if(y >= 0 ){
z = x[y];

if(z % 2 == 0){
    
contador = 1 + m8(x, y-1);
printf("%c\n", x[y]);

    
}
else{

   contador = m8(x, y-1);
}

}

return (contador);

}


void method_08(){
    char palavra[80] = " ";
    int tamanho = 0;
    int contador = 0;
    printf("%s", "Escolha uma sequencia de letras: ");
    fgets(palavra, sizeof(palavra), stdin);
    tamanho = strlen(palavra);
  contador = m8(palavra, tamanho -1);
printf("%d\n", contador -1 );

    //encerrar
    printf("Aperte ENTER para continuar");
    getchar();
}

int m9(char * x, int y){
int soma = 0;
char z = ' ';
if(y > 0){
z = x[y];
if('K'<= z && z <= 'P'){

soma = 1 + m9(x, y -1);
printf("%c\n", z);
}//end if
else{

soma = m9(x, y -1);

}//end else



}//end if

return(soma);

}




void method_09(){
char palavra [80] = "";
int tamanho = 0;
int soma = 0;
printf("%s", "Escolha uma sequencia: ");
fgets(palavra, sizeof(palavra), stdin);
tamanho = strlen(palavra);
soma = m9(palavra, tamanho);
printf("%s%d\n", "Soma = ", soma);

//encerrar
printf("Aperte ENTER para continuar");
getchar();


}


int m10(int x){
int soma = 0;
int fibonacci = 0;
if(x > 0){

if(x == 1 || x == 2 ){

fibonacci = 1;



}
else{

fibonacci = m10(x-1) + m10(x-2);



}//end else
}//end if

return (fibonacci);
}






void method_10(){
int quantidade = 0;
int soma = 0;
int x = 0;
printf("%s", "Insira uma quantidade: ");
scanf("%d", &quantidade);getchar();
for (int i = 1; i <= quantidade; i++){
soma = m10(i);
printf("%d\n", soma);
if(soma % 2 == 0){
x = x + soma;
    
}
    
}
printf("%s%d\n", "Soma dos pares de fibonacci = ", x);
printf("Aperte ENTER para continuar");
    getchar();
}
