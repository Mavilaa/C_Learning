#include <stdio.h>
#include "io.h"

void method_01a(int x){
int y = 1;
while(y <= x){

y ++;
printf("%s%d\n", "Valor de y = " ,y);
}


}


void method_01(){
    int valor = 5;
  
IO_id("Method_01-0.0v");
method_01a(valor);

  //encerrar metodo
printf("Aperte ENTER para continuar");
getchar();




}

//funcao 02a
void method_02a(int x ){

//definir valores
int y = 1;
int z = 2;
//loop while
while(y <= x){
//mostrar valores
    printf("%d:%d\n", y, z);
    //redefinir variaveis
    y++;
    z = z +2;
}//end while




}//end funcao02a




void method_02(){
    //identificar metodo
    IO_id("Method_02-0.0v");
//definir valores
int valor = 5;
//mandar valor para a funcao
method_02a(valor);

//encerrar metodo
printf("Aperte ENTER para continuar");
getchar();


}//end method

void method_03a(int x){
//definir valores
int y = 1;
int z = 0;
//loop while
while(y <= x){
//mostrar valores
    printf("%d:%d\n", y, z);
    //redefinir variaveis
    y++;
    z = y *2;
}//end while


}




void method_03(){
    //identificar metodo
    IO_id("Method_03-0.0v");
int valor = 5;
method_03a(valor);

printf("Aperte ENTER para continuar");
getchar();





}

void method_04a(int x){
//definir valores
int y = x;
int z = 0;
//loop while
while(y > 0){
//mostrar valores
    
    //redefinir variaveis
    z = y *2;
    printf("%d:%d\n", y, z);
    y--;
    
}//end while


}//end metodo_04a


void method_04(){
    //identificar metodo
    IO_id("Method_04-0.0v");
    int valor = 5;
    method_04a(valor);
    //encerrar metodo
printf("Aperte ENTER para continuar");
getchar();
}//end method 04


void method_05a(int x){
int y = 0;
for(int y = x; y >0; y--){

printf("%d\n", y);

}//end for


}




void method_05(){
    //identificar metodo
    IO_id("Method_05-0.0v");
    int valor = 5;
    method_05a(valor);
    //encerrar metodo
printf("Aperte ENTER para continuar");
getchar();
}//end method 05






int somarvalores(int x ){
int soma = 1;
int y = 0;

for(int y = x; y > 0 ; y--){

printf("%d:%d\n", y , (2*y));
soma = soma + (2*y);

}//end for


return (soma);


}





void method_06(){
int valor = 5;
int soma = 0;
soma = somarvalores(valor);

printf("%s%d", "Soma de valores pares = " ,soma);

printf("Aperte ENTER para continuar");
getchar();






}

double somarFracao1(int x ){
double soma = 1.0;
double numerador = 0.0;
double denominador = 0.0;
int y = 0;
for(int y = x; y > 0; y--){

//calcular numerador
numerador = 1.0;
//calcular denominador
denominador = 2.0*y;
//printar valores
printf("%d: %7.4lf/%7.4lf =  %lf \n", y, numerador, denominador, (numerador/denominador));

soma = soma + 1.0/(2*y);


}//end for


return (soma);

}



void method_07(){
int valor = 5;
double soma = 0.0;
soma = somarFracao1(valor);

printf("%s%lf", "Soma:", soma);


printf("Aperte ENTER para continuar");
getchar();


}

double somarFracao2(int x ){
double soma = 1.0;
double numerador = 0.0;
double denominador = 0.0;
int y = 0;
for(int y = x; y > 0; y--){

//calcular numerador
numerador = 1.0;
//calcular denominador
denominador = 2.0*y;
//printar valores
printf("%d: %7.4lf/%7.4lf =  %lf \n", y, numerador, denominador, (numerador/denominador));

soma = soma + 1.0/(2*y);


}//end for


return (soma);

}



void method_08(){
int valor = 5;
double soma = 0.0;
soma = somarFracao2(valor);

printf("%s%lf", "Soma:", soma);


printf("Aperte ENTER para continuar");
getchar();


}


double somarFracao3(int x){
int y = 0;
double soma = 1.0;
printf("%d: %7.4lf/%7.4lf\n", 1, 1.0, soma);

for(y = 1; y < x; y++){

printf("%d: %lf/%lf = %7.4lf\n", y+1, (2.0*y), (2.0*y+1) ,((2.0*y)/(2.0*y+1) ));

soma = soma + (2.0*y)/(2.0*y+1);



}//end for

return(soma);


}





void method_09(){
int valor = 5;
double soma = 0;
soma = somarFracao3(valor);

printf("\n%s%lf", "Soma dos valores:", soma);

printf("Aperte ENTER para continuar");
getchar();

}


/*
 @return produto de valores
 @param x - quantidade de valores
*/


int multiplicarvalores(int x ){
int y = 0;
int produto = 1;
for(int y = 1; y <= x; y ++){

printf("%d:%d\n", y, (2*y-1));
produto = produto * (2*y-1);
}//end for


return (produto);
}




void method_10(){
int valor = 5;
printf("%s%d\n", "Produto= ", multiplicarvalores(valor));








}





