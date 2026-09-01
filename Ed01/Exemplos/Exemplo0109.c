/*Exemplo0005- v0.0 - 24 / 02 / 2026
Author:Gustavo martins de avila*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>
#include<string.h>
//declarar a outra funcao
void method_01(void){
    //definir dado
    int x = 0;
    printf(" Metodo1\n");
    printf ( "\n\nApertar ENTER para continuar." );
    getchar();
//mostrar valor inicial
printf("\nx= %d", x);
printf("\n&x=%p\n", &x);
//ler do teclado
printf("Entre um numero inteiro: ");
scanf("%d", &x);getchar();
printf("x=%d", x);
}

//Metodo 2
void method_02(void){
//variaveis
double x = 0.0;
//identificando programa
printf("Method_02-Programa-0.0v\n");
//mostrar valor inicial
printf("%lf\n", x);
printf("Entre um valor real:");
scanf("%lf", &x);getchar();
//mostrar valor lido
printf("x= %lf\n", x);
//Encerrar
printf("Aperte enter para terminar");
getchar();
}

//Metodo 3
void method_03(void){
//definir variavel
char x = 'A';
//identificar programa
printf("Method_03-Programa-0.0v\n");
//Mostrar valor da variavel
printf("x= %c\n", x);
//novo valor da variavel
printf("Entrar com um caractere: ");
scanf("%c", &x);getchar();
//printar novo valor
printf("x=%c\n", x);
//encerrar
printf("Apertar ENTER para continuar");
getchar();
}
//Metodo 4
void method_04(){
bool x = false;
int y = 0;
// identificar
 printf ("EXEMPLO0104 - Programa - v0.0\n");
 //printar variavel x
 printf("x= %d\n", x);
 //printar y
 printf("Entrar com um valor logico(0 ou 1): ");
 scanf("%d", &y);getchar();
 //printar x quando y nao e igual a 0
x =(y!= 0);
printf("%d\n", x);
//encerrar
printf("Aperte ENTER para continuar");
getchar();

}
//Metodo 5

/**
 Method_05.
*/
void method_05 ( void )
{
// definir dado
 char x [80] = "abc"; // definir variavel com tamanho e valor inicial
 char *px = &x[0]; // definir alternativa para acesso via endereco
// identificar
 printf ( "\n%s\n", "Method_05 - Programa - v0.0" );
// mostrar valor inicial
 printf ( "\n%s%s\n", "x = ", x );
// OBS.: O formato para caracteres -> %s
// ler do teclado
 printf ( "Entrar com uma cadeia de caracteres: " );
 scanf ( "%s", x );
// OBS.: Nao devera' ser usado o endereco dessa vez !
// O tamanho do valor NAO devera' ultrapassar 80 símbolos.
 getchar ( ); // OBS.: Limpar a entrada de dados
// mostrar valor lido
 printf ( "%s%s\n", "x = ", x );
// ler do teclado (forma alternativa para acesso via endereco)
 printf ( "Entrar com outra cadeia de caracteres: " );
 scanf ( "%s", px );getchar( ); // OBS.: Limpar a entrada de dados
// mostrar valor lido (forma alternativa para acesso via endereco)
 printf ( "%s%s\n", "x = ", px );
// encerrar
 printf ( "\n\nApertar ENTER para continuar.\n" );
 getchar( ); // a
}
//Metodo 6
void method_06(void){
    //variaveis
int x = 0;
int y = 0;
int z = 0;
int *py = &y;

//identificar
printf ( "\nMethod_06 - Programa - v0.0\n" );
//valores iniciais
printf("x= %d\n", x);
printf("y= %d\n", y);
//ler do teclado
printf("Entre um valor para inteiro x:");
scanf("%d", &x);
getchar();
printf("Entre um valor para inteiro py:");
scanf("%d", py);
getchar();
//operar valores
z= x*y;
//printar z
printf("%d*%d= %d\n", x, y, z);
printf("Aperte ENTER para continuar");
getchar();
}
void method_07(void){
//variaveis
char x [80]= "abc";
char y [80]= "def";
char z [80];
strcpy(z,"");
//identificar
printf ( "\n%s\n", "Method_07 - Programa - v0.0" );
// mostrar valores iniciais e comprimentos das cadeias
printf("x= %s\n", x, strlen(x));
printf("y= %s\n", y, strlen(y));
//ler do teclado
printf("Entrar com caracteres: ");
scanf("%s", x);getchar();
printf("Entrar com  outros caracteres: ");
scanf("%s", y);getchar();
//operar valores
strcpy(z,x);
strcpy(z,y);
//mostrar valor resultante
printf("%s= %s*%s\n",z ,x ,y);
// operar valores (forma alternativa)
 strcpy ( z, strcat ( strdup(x), y ) );  
 //mostrar valor resultante
 printf("%s= %s*%s\n", z,x,y );
 //encerrar 
 printf("Aperte ENTER para continuar\n");
 getchar();  
}
//metodo 8
void method_08(void){
//dados
double x = 0.0;
double y= 0.0;
double z = 0.0;
//printar valores
printf("\nx= %lf\n", x);
printf("y= %lf\n", y);
//novos valores
printf("Insira um novo valor real para x: ");
scanf("%lf", &x);getchar();
printf("\nInsira um novo valor real para y: ");
scanf("%lf", &y);getchar();
//operacoes
z= pow(x,y);/* Z=  X^Y    */
//resultado
printf("\n%lf = %lf^%lf", z, x, y);
//operar valores
x= pow(z,1/y);
printf("\n%lf= %lf^1/%lf\n", x, z, y);
//encerrar
printf("Aperte ENTER para continuar\n");
getchar();
}
void method_09(void){
    //dados
    int x = 0;
    double y = 3.5;
    char z= 'A';
    bool w = false;
    //definir dados com mais de um valor
    char s [80]= ""; 
    //Mostrar valores iniciais
    printf("\n1-x= %d\n", x);
 printf("2-y= %lf\n", y);
 printf("3-z= %c\n", z);
//numero de caractere de z
x = (int)z;
printf("4-Numeracao de %c= %d\n", z, x);
//parte inteira de y
 x = (int) y; 
printf("5-Parte inteira de %lf= %d\n", y, x);
//caractere numero 97
x = 97;
z= (char)x;
printf("6-Caractere numero: %d= %c\n", x,z );

x= (int)0;
z =(char)x;
printf("7-Numero do Caractere de =%d que é = %c\n", x, z);

x = w; // codigo inteiro equivalente ao logico
printf("8-Codigo de boolean(w) = %d\n", x);

w= true;
x = w; // codigo inteiro equivalente ao logico
printf("9-Codigo de boolean(w) = %d\n", x);

x=(w==false);
printf("10-Codigo de boolean(w) = %d\n", x);

x= !(w==false);
printf("11-Codigo de boolean(w) = %d\n", x);

x= (w!=false);
printf("12-Codigo de boolean(w) = %d\n", x);

w= (x==0);
printf("13- w== %d == %d == %d\n", x, 0, w);

w= (x!=0);
printf("14- w== %d != %d == %d\n", x, 0, w);

w= (x<y);
printf("15- w=%d<%lf= %d\n", x, y, w);

w= (x<=y);
printf("16- w=%d<= %lf= %d\n", x, y, w);

w= (y>x);
printf("17- w=%lf>%d= %d\n", y, x, w);

w= (y>=x);
printf("18- w=%lf>=%d= %d\n", y, x, w);

x= 4;
w= (x%2 == 0);//se x é par ,se x/2 tem resto = 0
printf("19- E par(%d%2\n)? %d", x, w);

x= 4;
w= (x%2 != 0);//se x nao é par ,se x/2 nao tem resto = 0
printf("20- E impar(%d%2\n)? %d", x, w);

z=5;
w=('0'<= z&& z<='9');
printf("21-E digito (%c)? %d\n", z, w);

z='x';
w=(!('a'<=z && z<='z'));
printf("22-E minuscula (%c)? %d\n", z, w);

z = 'X';
w=('a'<=z && z<='z');
printf("23-Nao e minuscula(%c)? %d\n", z, w);

z= 'x';
w=('A'<= z <='Z');
printf("24-E maiscula(%c) %d\n", z, x);

z= 'X';
w=((z <'A')||(z< 'Z') );
printf("25-Nao e maiscula (%c)? %d\n",z, w );

printf("26-E 0 ou 1(%c)? %d", z, w);
strcpy(s, "zero");

printf("27-palavra =%s\n", s);

w=(strcmp("zero",s)== 0);

printf("28- palavra==%s? %d\n", s, w);

strcpy(s, "um e dois");

printf("29-palavras= %s\n", s);
w=(strcmp("zero", s)!= 0);

printf("30-Palavra == %s? %d\n", s, w);

//encerrar
printf("Aperte ENTER para continuar");
getchar();
}

    //funcao principal
int main(int agrc, char* argv[]){
    //declarando variaveis
    int opcao = 0;
    int i = 0;
    //declarando informacoes
    printf("%s\n", "Exemplo0109 - Programa= 0.0v");
    printf("%s\n","Autor:Gustavo martins de avila");
    printf("\n");
    //acoes
        //comandos
do{
    printf("\nOpcoes:");
    printf("\n 0- Terminar\n");
    for(int i = 1; i<= 9; i++){
printf("%d-Metodo-%d\n", i, i);
    }
    printf("\n");
    printf("\n%s", "Opcao: ");
    scanf("%d", &opcao);
    getchar();
    printf("\nOpcao: %d ", opcao);
  
    switch(opcao){
    case 0:
    break;
    case 1:
    method_01();
    break;
    case 2:
    method_02();
    break;
     case 3:
    method_03();
    break;
    case 4:
    method_04();
    break;
    case 5:
    method_05();
    break;
    case 6:
    method_06();
    break;
    case 7:
    method_07();
    break;
    case 8:
    method_08();
    break;
     case 9:
    method_09();
    break;
    default:printf("\nErro:Opcao invalida.\n");
    }
}while(opcao != 0);
    printf ( "\n\nApertar ENTER para terminar." );
    getchar();
    return 0;
}

/*Exemplo0109 - Programa= 0.0v
Autor:Gustavo martins de avila


Opcoes:
 0- Terminar
1-Metodo-1
2-Metodo-2
3-Metodo-3
4-Metodo-4
5-Metodo-5
6-Metodo-6
7-Metodo-7
8-Metodo-8
9-Metodo-9


Opcao: 9

Opcao: 9
1-x= 0
2-y= 3.500000
3-z= A
4-Numeracao de A= 65
5-Parte inteira de 3.500000= 3
6-Caractere numero: 97= a
7-Numero do Caractere de =0 que ├® =
8-Codigo de boolean(w) = 0
9-Codigo de boolean(w) = 1
10-Codigo de boolean(w) = 0
11-Codigo de boolean(w) = 1
12-Codigo de boolean(w) = 1
13- w== 1 == 0 == 0
14- w== 1 != 0 == 1
15- w=1<3.500000= 1
16- w=1<= 3.500000= 1
17- w=3.500000>1= 1
18- w=3.500000>=1= 1
19- E par(4
)? 120- E impar(4
)? 021-E digito ()? 0
22-E minuscula (x)? 0
23-Nao e minuscula(X)? 0
24-E maiscula(x) 4
25-Nao e maiscula (X)? 1
26-E 0 ou 1(X)? 127-palavra =zero
28- palavra==zero? 1
29-palavras= um e dois
30-Palavra == um e dois? 1
Aperte ENTER para continuar

Opcoes:
 0- Terminar
1-Metodo-1
2-Metodo-2
3-Metodo-3
4-Metodo-4
5-Metodo-5
6-Metodo-6
7-Metodo-7
8-Metodo-8
9-Metodo-9


Opcao: 0

Opcao: 0

Apertar ENTER para terminar.*/