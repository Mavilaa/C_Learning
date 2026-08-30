#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include"io.h"
/*

@param x:  quantidade de valores a serem mostrados 
*/
void e1(int x ){

if(x > 0 ){

printf("%s%d\n", "Valor = ", x);
e1(x-1);
}//end if



}//end e1



void example_01(){
int quantidade = 0;
int valor = 0;
int controle = 0;
//identificar
IO_id("Example_01-0.0v");

e1(5);

//encerrar
printf("Aperte ENTER para continuar");
getchar();

}

void e2(int x ){

if(x > 0 ){

printf("%s%d\n", "Valor = ", x);
e2(x-1);
}//end if



}//end e1



void example_02(){
//identificar
IO_id("Example_02-0.0v");

e2(5);

//encerrar
printf("Aperte ENTER para continuar");
getchar();

}


void e3(int x){
    if(x > 0 ){

printf("%s%d\n", "Valor = ", x);
getchar();
e3(x-1);
getchar();
}//end if
else{
printf("%s\n", "Valor = 1");
}
}





void example_03(){
//identificar
IO_id("Example_03-0.0v");

e3(5);

//encerrar
printf("Aperte ENTER para continuar");
getchar();
}


void e4(int x ){
if( x > 0){

    e4(x-1);
    printf("%s%d\n", "Valor = ", 2*(x-1));
    getchar();
}
else{
printf("%s\n", "Valor = 1");
}
}



void example_04(){
    //identificar
IO_id("Example_04-0.0v");

e4(5);

//encerrar
printf("Aperte ENTER para continuar");
getchar();
}


void e5(int x ){

if(x > 0 ){

e5(x-1);
printf("%d\t%d\t%d\n", x ,2*(x-1), (2*(x-1)+1) );


}//end if
else{

printf("%d\t%d\n",x , 1);


}




}




void example_05(){
    //identificar
IO_id("Example_05-0.0v");
e5(5);



//encerrar
printf("Aperte ENTER para continuar");
getchar();

    
}


double e06(int x ){

double soma = 0.0;
if(x > 1 ){

soma = (2.0*(x-1))/(2.0*(x-1)+1) + e06(x - 1);
printf("%d\t%lf/%lf\n", x ,(2.0*(x-1)), (2.0*(x-1)+1) );getchar();

}//end if
else{
    soma = 1.0;
    printf("%d:%lf\n", x , 1.0);
}//end else


return(soma);

}


void example_06(){
double soma = 0.0;


 soma = e06(5);

printf("%s%lf", "Soma = " ,soma);
//encerrar
printf("Aperte ENTER para continuar");
getchar();


}

double e7b(int x, int y,int z , double soma){

if(x>0){
printf("%d: %d/%d\n", x, y, z);
printf("%s%lf\n","Soma = " ,soma);
soma = e7b(x-1, y + 2, z + 2 , soma+(1.0*y/z));
}

return(soma);


}


int e7a(int x){
double soma = 0.0;

if(x>0){
printf ( "%d: %lf\n", x, 1.0 );
  soma =  e7b(x-1 , 2.0, 3.0, 1.0);
}


return(soma);

}




void example_07(){
double soma = 1.0;


soma = e7a(5);

printf("%s%lf","Soma = ", soma);

printf("Aperte ENTER para continuar");
getchar();

}

int e8(int x){

int resposta = 1;
if(x>=10){
    resposta = 1 + e8(x/10);
}//end if
else{
    if(x< 0){

        resposta = e8(-x);
    }
}//end if

return(resposta);

}



void example_08(){

printf("digitos(%3d) = %d\n", 123, e8(123));
printf("digitos(%3d) = %d\n", 1, e8(1));
printf("digitos(%3d) = %d\n", -10, e8(-10));

printf("Aperte ENTER para continuar");
getchar();
}


int fibonacci(int x){

int resposta = 0;
if(x == 1 || x == 2){
    resposta = 1;
}

else{

    resposta = fibonacci(x-1) + fibonacci(x-2);
}

return(resposta);
}




void example_09(){

printf("fibonacci(%d)= %d\n", 1 , fibonacci(1));
printf("fibonacci(%d)= %d\n", 2 , fibonacci(2));
printf("fibonacci(%d)= %d\n", 3 , fibonacci(3));
printf("fibonacci(%d)= %d\n", 4 , fibonacci(4));
printf("fibonacci(%d)= %d\n", 5 , fibonacci(5));

printf("Aperte ENTER para continuar");
getchar();

}

int e10(chars cadeia, int x ){

    int resposta = 0;
if(0<=x && x <=strlen(cadeia)){

if('a'<= cadeia[x] && cadeia[x] <= 'z'){


resposta = 1;

}// end if
resposta = resposta + e10(cadeia, x+1);

}//end if

return (resposta);
}


void example_10(){

printf("Minusculas (\"abc\",0) = %d\n", e10 ( "abc", 0));
printf("Minusculas (\"aBc\",0) = %d\n", e10 ( "aBc", 0));
printf("Minusculas (\"AbC\",0) = %d\n", e10 ( "AbC", 0));
}
