#include"io.h"


int somar_pares(int x){
int contador = 0;

for(int i = 1; i <= x; i++){

if(x % (2*i) == 0 ){

contador = contador + 1;


}



}

printf("%d\n", contador);



return(contador);


}


int somar_impares(int x){

int contador = 0;

for(int i = 1; i <= x; i++ ){

if(x % ((2*i)-1) == 0 ){

contador = contador + 1;

}

}

printf("%d\n", contador);

return(contador);


}








void exercicio_01(){

int qtd = 0;
int x = 0;
int y = 0;
int cp = 0;
int ci = 0;
printf("%s", "Defina uma quantidade:");
scanf("%d", &qtd);getchar();
for(int i = 0; i < qtd; i++)
{
printf("%s[%d]:", "Escolha um numero", i);
scanf("%d", &x);getchar();

cp = cp + somar_pares(x);
ci = ci + somar_impares(x);

if(cp > ci){

printf("%d%s\n", x, " Tem mais divisores pares");


}
else{
if(ci > cp){

printf("%d%s\n", x, " Tem mais divisores impares");



}

if(ci == cp){

printf("%d%s\n", x, " Tem quantidades de divisores iguais");

}
}

}


printf("%s", "Aperte ENTER para continuar");
getchar();
}





bool primo(int x ){
bool condicao = false;


printf("%d\n", x);

for(int i = 1; i < x; i++){
if(x % i == 0){

condicao = false;


}
else{

condicao = true;



}


}



return(condicao);

}








void exercicio_02(){

int qtd = 0;
int x = 0;
int condicao = 0;
printf("%s", "Defina uma quantidade:");
scanf("%d", &qtd);getchar();
for(int i = 0; i < qtd; i++)
{
printf("%s[%d]:", "Escolha um numero", i);
scanf("%d", &x);getchar();

condicao = primo(x);

printf("%s: %d[%d]\n", "E primo?", x, condicao);
}


printf("%s", "Aperte ENTER para continuar");
getchar();


}

int testar_simbolo_logico(char palavra [], int tamanho, int array[]){
int x = 0;
char z = ' ';
int condicao = 0;

for(int i = 0; i< tamanho; i++ ){

z = palavra[i];

if(z == '&' || z == '!'|| z == '|'){


array[i] = 1;
}


}



}

int testar_simbolo_aritmetico(char palavra [], int tamanho, int array[]){
    int x = 0;
    char z = ' ';
    int condicao = 0;
    for(int i = 0; i< tamanho; i++ ){

    z = palavra[i];

    if(z == '+' || z == '-'|| z == '*' || z == '/'|| z == '%'){


        array[i] = 2;
    }


    }







}


int testar_simbolo_relacional(char palavra [], int tamanho, int array[]){
    int x = 0;
    char z = ' ';
    int condicao = 0;
    for(int i = 0; i< tamanho; i++ ){

    z = palavra[i];

    if(z == '>' || z == '<'|| z == '='){


    array[i] = 3;


    }


}




}

int testar_simbolo_separador(char palavra[], int tamanho, int array[]){
    int x = 0;
    char z = ' ';
    int condicao = 0;
    for(int i = 0; i< tamanho; i++ ){

    z = palavra[i];

    if(z == ' ' || z == '.'|| z == ',' || z == ';'|| z == ':' || z == '_'){


    array[i] = 4;


    }


    }



}


void mostrar(char palavra[], int tamanho, int array[]){

    int x  = 0;
    for(int i = 0; i < tamanho; i++){
        x = array[i];

        switch(x){
            case 1:
            printf("\t[%c] - %s\n", palavra[i],"simbolo_logico");
            break;
            case 2:
            printf("\t[%c] - %s\n", palavra[i],"simbolo_aritmetico");
            break;
             case 3:
            printf("\t[%c] - %s\n", palavra[i],"simbolo_relacional");
            break;
            case 4:
            printf("\t[%c] - %s\n", palavra[i],"simbolo_separadores");
            break;
            case 5:
            printf("\t[%c] - %s\n", palavra[i],"maiuscula");
            break;
            case 6:
            printf("\t[%c] - %s\n", palavra[i],"minuscula");
            break;
            case 7:
            printf("\t[%c] - %s\n", palavra[i],"algarismo");
            break;
            case 8:
            printf("\t[%c] - %s\n", palavra[i],"simbolo_pareado");
            break;
            default:
            printf("\t[%c] - %s\n", palavra[i], "Nao entra em alguma especificacao");

        
        }




    }












}







void exercicio_03(){

    char palavra [80] = "";
    int qtd = 0;
    int resposta = 0;
    int tamanho  = 0;

    printf("%s", "Escolha uma cadeia de caracteres: ");
    fgets(palavra, 80, stdin);
    tamanho = strlen(palavra);
    int array[tamanho];
    resposta = testar_simbolo_logico(palavra, tamanho, array);
    resposta = testar_simbolo_aritmetico(palavra, tamanho, array);
    resposta = testar_simbolo_relacional(palavra, tamanho, array);
    resposta = testar_simbolo_separador(palavra, tamanho, array);

    mostrar(palavra, tamanho, array);





    printf("%s", "Aperte ENTER para continuar");
    getchar();
}


void contarcaracteres(char palavra[], int tamanho, int array[tamanho]){
    int x = 0;
    char z = ' ';
    for(int i = 0; i < tamanho; i++){

    z = palavra[i];


    if(z == ' ' || z == '.'|| z == ',' || z == ';'|| z == ':' || z == '_'){
        array[i] = 1;
    }
    else{
    if(z == '>' || z == '<'|| z == '='){
        array[i] = 2;
    }
    if(z == '+' || z == '-'|| z == '*' || z == '/'|| z == '%'){
        array[i] = 3;
    }
    if(z == '&' || z == '!'|| z == '|'){
        array[i] = 4;
    }
    if('A'<= z && z<= 'Z'){


    array[i] = 5;


    }
    if('a'<= z && z<= 'z'){


    array[i] = 6;


    }
    if('0'<= z && z<= '9'){


    array[i] = 7;


    }
    if(z == '{' || z == '}' || z == '[' || z == ']' || z == '(' || z == ')'){


    array[i] = 8;


    }
    }

    }





}







void exercicio_04(){
    char palavra [80] = "";
    int qtd = 0;
    int tamanho  = 0;
    printf("%s", "Escolha uma cadeia de caracteres: ");
    fgets(palavra, 80, stdin);
    tamanho = strlen(palavra);
    int array[tamanho];
    contarcaracteres(palavra, tamanho, array);
    mostrar(palavra, tamanho, array);

    printf("%s", "Aperte ENTER para continuar");
    getchar();
}


int no_intervalo(int inf, int sup , int qtd , double array[qtd]){
    int x = 0;
    int contador = 0;
    int contador2 = 0;
    int contador3 = 0;
    double soma = 0;
    double soma2 = 0;
    double soma3 = 0;
    double media = 0;
    double media2 = 0;
    double media3 = 0;
    for(int i = 0; i < qtd; i++){

    if(inf<array[i] && array[i]<sup){


    soma = soma +array[i];

    contador++;
    }
    else{
    if(sup<array[i]){

    soma2 = soma2 + array[i];


    contador2++;
    }

    if(array[i]< inf){

    soma3 = soma3 + array[i];

    contador3++;
    }

    }


    }
    media = soma/contador;
    media2 = soma2/contador2;
    media3 = soma3/contador3;
    if(contador == 0){

    media = 0;

    }
    if(contador2 == 0){

    media2 = 0;

    }
    if(contador3 == 0){

    media3 = 0;

    }


    if((media > media2) && (media > media3)){
    printf("[%lf]> [%lf] &&\t [%lf]> [%lf]\n", media, media2, media, media3);

    x = 1;

    }
    else{

    if((media2> media) && (media2> media3)){

    printf("[%lf]> [%lf]&&\t [%lf]> [%lf]\n", media2, media, media2, media3);

    x = 2;

    }
    else{
    if((media3 > media) && (media3> media2)){


    printf("[%lf]> [%lf]&&\t [%lf]> [%lf]\n", media3, media, media3, media2);
    x = 3;

    }

    }


    }


    return(x);

}









void exercicio_05(){
    int qtd = 0;
    double inf = -21.25;
    double sup = 68.75;
    int resposta = 0;
    printf("%s", "Insira uma quantidade: ");
    scanf("%d", &qtd);
    double array [qtd];
    for(int i = 0; i < qtd; i++){
    printf("%s", "Escolha um numero real: ");
    scanf("%lf", &array[i]);
    }
    resposta = no_intervalo(inf, sup, qtd ,array);

    switch(resposta){
        case 1:
        printf("%s[%lf,%lf] %s\n", "A media dos valores entre ", inf , sup, "e a maior");
        break;
        case 2:
        printf("%s[%lf] %s\n", "A media dos valores maiores que ", sup, "e a maior");
        break;
        case 3:
        printf("%s[%lf] %s\n", "A media dos valores menores que ", inf, "e a maior");
        break;
    }




}


double somainversocubo(int tamanho, int array[]){

double num = 0.0;
double soma = 0.0;
for(int i = 0; i < tamanho; i++){

 num = 1/(pow(array[i],3));
if(array[i] % 3 == 0 && array[i] % 5 != 0){
printf("%d\t", array[i]);

soma = soma + num;

}


}




return(soma);

} 




void exercicio_06(){
    int a = 0;
    int b = 0;
    int qtd = 0;
    int x = 0;
    int y = 0;
    double resposta = 0.0;
    printf("%s", "Defina o intervalo inferior: ");
    scanf("%d", &a);getchar();
    printf("%s", "Defina o intervalo superior: ");
    scanf("%d", &b);getchar();
    int array [100];
    do{
    printf("%s[%d]: ", "Escolha um valor", x);
    scanf("%d", &y);getchar();
        array[x] = y;
        x++;
    }while(y != -1);


    resposta = somainversocubo(x, array);



    printf("%s%lf\n", "Soma do cubo dos multiplos de 3 e nao de 5: ", resposta);

}


int numnointervalo(int tamanho, int array[], int inferior, int superior, double arrayinf[], double arraysup[]){
int x = 0;
int contador1 = 0;
int contador2 = 0;
int porcentagem1 = 0;
int porcentagem2 = 0;
for(int i = 0; i < tamanho; i++){

if(inferior <array[i] && array[i] < superior){


contador1++;
}
else{
if(array[i]< inferior){


arrayinf[i] = array[i]/100;




}

if(array[i]> superior){




arraysup[i] = array[i]/100;



}

contador2++;
}


}


return(contador1);


}










void exercicio_07(){
int a = 0;
    int b = 0;
    int x = 0;
    int y = 0;
    int resposta = 0.0;
    printf("%s", "Defina o intervalo inferior: ");
    scanf("%d", &a);getchar();
    printf("%s", "Defina o intervalo superior: ");
    scanf("%d", &b);getchar();
    int array [100];
    do{
    printf("%s[%d]: ", "Escolha um valor", x);
    scanf("%d", &y);getchar();
        array[x] = y;
        x++;
    }while(y != 0);
    double arrayinf[x];
    double arraysup[x];
resposta = numnointervalo(x, array, a , b, arrayinf, arraysup);

printf("%s[%d]\n", "Numeros dentro do intervalo", resposta);
for(int i = 0; i < x; i++){
printf("%s[%lf] \n", "numeros inferiores ao intervalo", arrayinf[i]);

printf("%s[%lf] \n", "numeros superiores ao intervalo", arraysup[i]);
}
}

int descobrirordem(int x, int y, int z){
int resposta = 0;

if((x < y && x < z) && y < z){

resposta = 1;


}
if((x > y && x > z) && y > z){

resposta = 2;



}

return(resposta);

}


int descobrirmaior(int x, int y , int z){
int resposta = 0;
if(x >= y && x >= z){


resposta = x;


}

if(y >= x && y >= z){


resposta = y;

}

if(z >= x && z >= y){

resposta = z;
}



return(resposta);

}

int descobrirmenor(int x, int y , int z){
int resposta = 0;
if(x <= y && x <= z){


resposta = x;


}

if(y <= x && y <= z){


resposta = y;

}

if(z <= x && z <= y){

resposta = z;
}



return(resposta);

}






void exercicio_08(){

    double x = 0.0;
    double y = 0.0;
    double z = 0.0;
    int resposta1 = 0;
    int resposta2 = 0;
    int resposta3 = 0;
    printf("%s", "Insira um numero: ");
    scanf("%lf", &x);getchar();
    printf("%s", "Insira um numero: ");
    scanf("%lf", &y);getchar();
    printf("%s", "Insira um numero: ");
    scanf("%lf", &z);getchar();

    resposta1 = descobrirordem(x,y,z);
    resposta2 = descobrirmaior(x,y,z);
    resposta3 = descobrirmenor(x,y,z);

    switch(resposta1){
        case 1 :
        printf("%s\n", "Os numeros estao em ordem crescente");
        break;
        case 2 :
        printf("%s\n", "Os numeros estao em ordem decrescente");
        break;
        default:
        printf("%s\n", "Os numeros nao estao em ordem");
        printf("%s%d\n", "Maior numero: ", resposta2);
        printf("%s%d\n", "Menor numero: ", resposta3);
        break;
    
    }





}


void exercicio_09(){

    char x = ' ';
    char y = ' ';
    char z = ' ';
    int resposta1 = 0;
    char resposta2 = 0;
    char resposta3 = 0;
    printf("%s", "Insira um caractere: ");
    scanf("%c", &x);getchar();
    printf("%s", "Insira um caractere: ");
    scanf("%c", &y);getchar();
    printf("%s", "Insira um caractere: ");
    scanf("%c", &z);getchar();

    resposta1 = descobrirordem(x,y,z);
    resposta2 = descobrirmaior(x,y,z);
    resposta3 = descobrirmenor(x,y,z);

    switch(resposta1){
        case 1 :
        printf("%s\n", "Os numeros estao em ordem crescente");
        break;
        case 2 :
        printf("%s\n", "Os numeros estao em ordem decrescente");
        break;
        default:
        printf("%s\n", "Os numeros nao estao em ordem");
        printf("%s%c\n", "Maior caractere: ", (char)resposta2);
        printf("%s%c\n", "Menor caractere: ", (char)resposta3);
        break;
    
    }





}


int verificarstring(char s1[], char s2[], char s3[], int x)
{
    char a = ' ';
    char b = ' ';
    char c = ' ';
    bool result = true;
    bool result2 = true;
    bool result3 = true;
    int resposta = 0;
    for(int i = 0; i < x; i++){
    a = s1[i];
    b = s2[i];
    c = s3[i];
    if(a < b && a < c && b < c && result){

    resposta = -1;


    }
    else{
    result = false;
    if(a > b && a > c && b > c && result2){


    resposta = 1;



    }
    else{

        result2 = false;

        if(a == b && a == c && result3){


            resposta = 2;
        
        }else{

            result3 = false;

        }
    }
    }

    }


    return(resposta);


}

int maiorstring(char s1[], char s2[], char s3[], int x){
    char a = ' ';
    char b = ' ';
    char c = ' ';
    int resposta = 0;
    bool result = true;
    bool result2 = true;
    bool result3 = true;
    for(int i = 0; i < x; i++){
    a = s1[i];
    b = s2[i];
    c = s3[i];
    if(a >= b && a >= c && result){

    resposta = 1;



    }
    else{
        result = false;
    }
    if(b >= a && b >= c && result2){

    resposta = 2;



    }
    else{
        result2 = false;
    }
    if(c >= a && c >= b && result3){

    resposta = 3;



    }
    else{
        result3 = false;
    }
    }

    return(resposta);

}


int menorstring(char s1[], char s2[], char s3[], int x){
    char a = ' ';
    char b = ' ';
    char c = ' ';
    int resposta = 0;
    bool result = true;
    bool result2 = true;
    bool result3 = true;
    for(int i = 0; i < x; i++){
    a = s1[i];
    b = s2[i];
    c = s3[i];
    if(a <= b && a <= c && result){

    resposta = 1;



    }
    else{
        result = false;
    }
    if(b <= a && b <= c && result2){

    resposta = 2;



    }
    else{
        result2 = false;
    }
    if(c <= a && c <= b && result3){

    resposta = 3;



    }
    else{
        result3 = false;
    }
    }

    return(resposta);

}




void exercicio_10(){

    char a[80] = "";
    char b[80] = "";
    char c[80] = "";
    int tamanho = 0;
    int resposta = 0;
    int resposta2 = 0;
    int resposta3 = 0;
    printf("%s", "Escolha uma cadeia de palavras(a): ");
    fgets(a, sizeof(a), stdin);
    printf("%s", "Escolha uma cadeia de palavras(b): ");
    fgets(b, sizeof(b), stdin);
    printf("%s", "Escolha uma cadeia de palavras(c): ");
    fgets(c, sizeof(c), stdin);
    tamanho = strlen(a)-1;      
    resposta = verificarstring(a,b,c,tamanho);
    resposta2 =  maiorstring(a,b,c,tamanho);
    resposta3 = menorstring(a,b,c,tamanho);
    switch(resposta){
    case -1:
    printf("%s\n", "As cadeias estao em ordem crescente");
    break;
    case 2:
    printf("%s\n", "As cadeias sao iguais");
    break;
    case 1:
    printf("%s\n", "As cadeias estao em ordem decrescente");
    break;
    }
    if(resposta == 0){
    switch(resposta2){
    case 1:
    printf("%s[%s]\n", "Maior cadeia: ", a);
    break;
    case 2:
    printf("%s[%s]\n", "Maior cadeia: ", b);
    break;
    case 3:
    printf("%s[%s]\n", "Maior cadeia: ", c);
    break;

    }
    switch(resposta3){
    case 1:
    printf("%s[%s]\n", "Menor cadeia: ", a);
    break;
    case 2:
    printf("%s[%s]\n", "Menor cadeia: ", b);
    break;
    case 3:
    printf("%s[%s]\n", "Menor cadeia: ", c);
    break;
}
}
}