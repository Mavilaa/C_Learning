#include"io.h"

void method_01(void){
    //definir variaveis
    int qtd = 0;
    double x = 0;               //intervalo inferior
    double y = 0;               //intervalo superior
    double z = 0;
    int in = 0;
    int out = 0;
    
    //Ler do teclado
    qtd = IO_readint("Insira a quantidade de valores: ");
    x = IO_readdouble("Insira o intervalo inferior: ");
    y = IO_readdouble("Insira o intervalo superior: ");
    
    // for loop
    for(int i = 0; i < qtd; i++){
        //Ler do teclado
        z = IO_readdouble("Insira um valor real:");

        if(x <= z && z <= y){
            in = in + 1;
        }//end if
        else{
            out = out + 1;
        }//end else

    }// end for
    
    //printar quantidades
    IO_printf("\n%s%d\n", "Numeros dentro do conjunto: ", in);
    IO_printf("%s%d\n", "Numeros fora do conjunto: ", out);

    //encerrar
    printf("%s", "Aperte ENTER para continuar");
    getchar();
}

bool check (char x){
    //definir variaveis
    bool result = false;
    
    if(('a' <= x && x <= 'z') && ('k' < x && x <= 'p')){
        result = true;
    }//end if

    return (result);
}

void method_02(void){
    //definir variaveis
    chars palavra = IO_new_chars(STR_SIZE);
    int qtd = 0;
    int tamanho = 0;
    char x = '\0';
    int contagem = 0;
    
    //Ler do teclado
    palavra = IO_readstring("Insira uma sequencia do teclado: ");
    tamanho = strlen(palavra);
    
    // for loop
    for(int i = 0; i < tamanho; i++){
        x = palavra[i];
        
        if(check(x)){
            printf("%d.[%c]\n", i, x);
            contagem = contagem + 1;
        }// end if

    }//end for

    //printar quantidades
    IO_printf("%s: %d\n", "Quantidade de letras minusculas entre 'k' e 'p'", contagem);
    
    //encerrar
    printf("Aperte ENTER para continuar");
    getchar();
}

// bool do metodo 03
bool palavrao(chars x, int *z){
    //definir variaveis
    int tamanho = 0;
    char y = '\0';
    bool result = false;
    tamanho = strlen(x);
  
    // for loop
    for(int i = 0; i <= tamanho; i++){
        y = x[i];

        if(('a' <= y && y <= 'z') && ('k' < y && y < 'p')){
            result = true;
            *z = *z + 1;
        }// end if
        
    }// end for

    return (result);
}

// metodo 03
void method_03(void){
    //definir variaveis
    chars palavra = IO_new_chars(STR_SIZE);
    int contagem = 0;
    
    //Ler do teclado
    palavra = IO_readstring("Insira uma palavra: ");
    
    if(palavrao(palavra, &contagem)){
        //printar quantidades
        IO_printf("%s:%d\n", "Quantidade de letras minusculas entre 'k' e 'p' " , contagem);
    }//end if

    //encerrar
    IO_pause("Aperte ENTER para continuar");
}

//diferente
chars concatAWord ( chars string, char digit ){
    return ( IO_concat ( string, IO_toString_c ( digit ) ) );
}

chars separarCaracteres(chars x, chars y) {
    //definir variaveis
    int tamanho = strlen(x);
    char w = '\0';
    char unidade[2]; 
    unidade[1] = '\0'; 
    y[0] = '\0'; 

    // for loop
    for(int i = 0; i < tamanho; i++) {
        w = x[i];
        
        if(('a' <= w && w <= 'z') && ('k' < w && w < 'p')) {
            unidade[0] = w; 
            y = IO_concat(y, unidade); 
        }//end if
        
    }//end for
    
    return(y);
}


void method_04(void) {
    //definir variaveis
    chars palavra = IO_new_chars(STR_SIZE);
    chars caracteres = IO_new_chars(STR_SIZE);
    
    //Ler do teclado
    palavra = IO_readstring("Insira uma palavra: ");
    
    caracteres = separarCaracteres(palavra, caracteres);
    
    //printar quantidades
    IO_printf("Caracteres identificados: %s\n", caracteres);
    
    //encerrar
    IO_pause("Aperte ENTER para continuar");
}

// int do metodo 05
int contar(chars x, int z){
    //definir variaveis
    int tamanho = 0;
    char y = '\0';
    tamanho = strlen(x);
  
    // for loop
    for(int i = 0; i <= tamanho; i++){
        y = x[i];

        if(('a' <= y && y <= 'z') && ('k' < y && y < 'p') || ('A' <= y && y <= 'Z') && ('K' < y && y < 'P')){
            z = z + 1; 
            IO_printf("%c", y);
        }// end if
        
    }// end for

    return (z);
}

// metodo 05
void method_05(void){
    //definir variaveis
    chars palavra = IO_new_chars(STR_SIZE);
    int contagem = 0;
    
    //Ler do teclado
    palavra = IO_readstring("Insira uma palavra: ");

    contagem = contar(palavra, contagem);

    //printar quantidades
    IO_printf("%s:%d","Quantidade de letras maiusculas e minusculas entre 'k' e 'l' ", contagem);
    
    //encerrar
    IO_pause("Aperte ENTER para continuar");
}//end method

//funcao do metodo 6
chars caractere(chars x , chars y){
    //definir variaveis
    int tamanho = 0;
    tamanho = strlen(x);
    char z = '\0';
    char unidade[2];
    unidade[1] = '\0';
    
    // for loop
    for(int i = 0; i < tamanho; i++){
        z = x[i];
        
        if(('a' <= z && z <= 'z') && ('k' < z && z < 'p') || ('A' <= z && z <= 'Z') && ('K' < z && z < 'P')){
            unidade [0] = z;
            y = IO_concat(y, unidade);
        }//end if
        
    }//end for
    
    return (y);
}// fim da funcao


//metodo 06
void method_06(void){
    //definir variaveis
    chars palavra = IO_new_chars(STR_SIZE);
    chars caracteres = IO_new_chars(STR_SIZE);
    
    //Ler do teclado
    palavra = IO_readstring("Insira uma cadeia de caracteres: ");

    caracteres = caractere(palavra, caracteres);

    //printar quantidades
    IO_printf("%s%s\n", "Letras maiusculas e minusculas entre 'k' e 'p': ", caracteres);
    
    //encerrar
    IO_pause("Aperte ENTER para continuar");
}

// funcao do metodo 7
int carac (chars x , int y){
    //definir variaveis
    int tamanho = 0;
    char z = 0;
    int num = 0;
    tamanho = strlen(x);
    
    // for loop
    for(int i = 0; i < tamanho; i++){
        z = x[i];
        num = (int)z;
        
        if(num % 2 != 0){
            y = y + 1;
            printf("%s%d.[%c]-%d\n", "Digitos impares: ",  i ,z, num);
        }//end if
        
    }//end for

    return (y);
}// end funcao

void method_07(void){
    //definir variaveis
    chars sequencia = IO_new_chars(STR_SIZE);
    int qtd = 0;
    
    //Ler do teclado
    sequencia = IO_readstring("Insira uma sequencia de caracteres: ");
    
    qtd = carac(sequencia, qtd);
    
    //printar quantidades
    IO_printf("%s%d\n", "Quantidade de digitos impares: ", qtd);
    
    //encerrar
    IO_pause("Aperte ENTER para continuar");
}

chars nalfa (chars x, chars y){
    //definir variaveis
    int tamanho = 0;
    char z = 0;
    char unidade [2];
    unidade[1] = '\0';
    tamanho = strlen(x);
    
    // for loop
    for(int i = 0; i < tamanho; i++){
        z = x[i];
        
        if(!(('a' <= z && z <= 'z') || ('A' <= z && z <= 'Z') || ('0' <= z && z <= '9'))){
            unidade[0] = z;
            y = IO_concat(y, unidade);
        }//end if

    }//end for

    return (y);
}//end funcao

void method_08(void){
    //definir variaveis
    chars sequencia = IO_new_chars(STR_SIZE);
    chars simbolos = IO_new_chars(STR_SIZE);
    
    //Ler do teclado
    sequencia = IO_readstring("Insira uma sequencia de caracteres");

    simbolos = nalfa(sequencia, simbolos);
    
    //printar quantidades
    IO_printf("%s%s\n", "Simbolos nao alfanumericos: ", simbolos);
    
    //encerrar
    IO_pause("Aperte ENTER para continuar");
}

chars alfa (chars x, chars y){
    //definir variaveis
    int tamanho = 0;
    char z = 0;
    char unidade [2];
    unidade[1] = '\0';
    tamanho = strlen(x);
    
    // for loop
    for(int i = 0; i < tamanho; i++){
        z = x[i];
        
        if(('a' <= z && z <= 'z') || ('A' <= z && z <= 'Z') || ('0' <= z && z <= '9')){
            unidade[0] = z;
            y = IO_concat(y, unidade);
        }//end if

    }//end for

    return (y);
}//end funcao

void method_09(void){
    //definir variaveis
    chars sequencia = IO_new_chars(STR_SIZE);
    chars simbolos = IO_new_chars(STR_SIZE);
    
    //Ler do teclado
    sequencia = IO_readstring("Insira uma sequencia de caracteres");

    simbolos = alfa(sequencia, simbolos);
    
    //printar quantidades
    IO_printf("%s%s\n", "Simbolos alfanumericos: ", simbolos);
    
    //encerrar
    IO_pause("Aperte ENTER para continuar");
}//end metodo 9

int quantidade (chars x, int y){
    //definir variaveis
    int tamanho = 0;
    char z = '\0';
    tamanho = strlen(x);
    
    // for loop
    for(int i = 0; i < tamanho; i++){
        z = x[i];
        
        if(('a' <= z && z <= 'z') || ('A' <= z && z <= 'Z') || ('0' <= z && z <= '9')){
            y = y + 1;
            IO_printf("%d.%s[%c]\n", i, "Simbolo:", z);
        }//end if

    }//end for

    return (y);
}

void method_10(void){
    //definir variaveis
    chars sequencia = IO_new_chars(STR_SIZE);
    int qtd = 0;
    
    //Ler do teclado
    sequencia = IO_readstring("Insira uma sequencia de caracteres: ");

    qtd = quantidade(sequencia, qtd);
    
    //printar quantidades
    IO_printf("%s%d\n", "Quantidade de caracteres alfanumericos: ", qtd);
    
    //encerrar
    IO_pause("Aperte ENTER para continuar");
}

int f11 (chars x){
    //definir variaveis
    int tamanho = 0;
    int y = 0;
    char z = 0;
    int contador = 0;
    tamanho = strlen(x);
    
    // for loop
    for(int i = 0; i < tamanho; i++){
        z = x[i];
        
        if(('a' <= z && z <= 'z') || ('A' <= z && z <= 'Z') || ('0' <= z && z <= '9') || (z == ' ')){
            contador = contador + 1;
        }//end if

    }//end for

    //printar quantidades
    printf("%s%d\n", "Total de simbolos alfanum e espacos vazios: ", contador);

    return (contador);
}

void method_11(void){
    //definir variaveis
    chars sequencia = IO_new_chars(STR_SIZE);
    int qtd = 0;
    int cadeias = 0;
    int total = 0;
    
    //Ler do teclado
    cadeias = IO_readint("Insira a quantidade de cadeias desejadas");
    
    // for loop
    for(int i = 0; i < cadeias; i++){
        //Ler do teclado
        printf("Insira a sequencia: ");
        fgets(sequencia, STR_SIZE, stdin);

        qtd = f11(sequencia);
        
        if(qtd > 3){
            total = total + qtd;
        }//end if
        
    }//end for

    //printar quantidades
    printf("%s%d\n", "Total das cadeias de alfanums com ' ' que sao > 3: " ,total);
}

bool f12(chars x , chars y){
    //definir variaveis
    int tamanho1 = 0;
    int tamanho2 = 0;
    char w = ' ';
    char z = ' ';
    int contador1 = 0;
    int contador2 = 0;
    bool result = false;
    tamanho1 = strlen(x);
    tamanho2 = strlen(y);
    
    // for loop
    for(int i = 0; i < tamanho1; i++){
        z = x[i];
        
        if('0' <= z && z <= '9'){
            contador1 = contador1 + 1;
        }//end if
        
    }//end for

    // for loop
    for(int i = 0; i < tamanho1; i++){
        w = y[i];
        
        if('0' <= w && w <= '9'){
            contador2 = contador2 + 1;
        }//end if
        
    }//end for

    if(contador1 > contador2){
        return (true);
    }//end if
    else{
        return(false);
    }//end else
    
}

void method_12(void){
    //definir variaveis
    chars cadeia1 = IO_new_chars(STR_SIZE);
    chars cadeia2 = IO_new_chars(STR_SIZE);
    bool comparacao = false;
    
    //Ler do teclado
    cadeia1 = IO_readstring("Insira uma cadeia1 de caracteres: ");
    cadeia2 = IO_readstring("Insira uma cadeia2 de caracteres: ");

    comparacao = f12(cadeia1, cadeia2);
    
    if(comparacao){
        //printar quantidades
        printf("%s", "A cadeia de digitos 1 é maior que a 2");
    }//end if
    else{
        //printar quantidades
        printf("%s", "A cadeia de digitos 2 é maior que a 1");
    }//end else

    //encerrar
    IO_pause("Aperte ENTER para continuar");
}