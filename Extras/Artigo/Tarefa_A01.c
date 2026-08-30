#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

void recursao(int x) {
    if (x > 0) {
        recursao(x - 1);
        printf("%d.%s-%d\n", x, "Metodo", x);
    }
}

void p_01() { 
    bool a = (M_PI * 1.0f) / 3;
    char b = (char)(((int)'2' - 48) - 1);
    double c = (4.0 / 3.0 - (double)5 / 3);
    int d = ((int)c >= 0) && (c <= 2 % 3);
    printf("a = %d\t", (int)a);
    printf("b = %d\t", (int)b);
    printf("c = %d\t", (int)c);
    printf("d = %d", (int)d);
}

int f_02() { 
    char p[] = "P4t0S_8r4nKos";
    int x = 0, y = 0; 
    char c = '0';
    bool r = false, s = false, t = false;
    bool u = false, v = false, w = false;
    for (x = 0; x < strlen(p); x++) { 
        c = p[x]; 
        t = ('0' <= c && c <= '9');
        s = ('A' <= c && c <= 'Z'); 
        r = ('a' <= c && c <= 'z');
        u = (r || s) && !w; 
        v = !u && t; 
        w = !v;
        if (u) y = y - 1; else if (v) y = y + 1; 
    }
    return y; 
}

int f_03() { 
    int a = 2, b = 7, c = 'e'; 
    char s[] = "estereofonica";
    int y = 0;
    while (a < b && a >= 0 && a < strlen(s)) { 
        if (c == s[a]) { y = y + 1; } 
        a = a + 1; 
    }
    return y;
}

int f_04_recursive(int z, int n, int x) { 
    if (n > 10 && x > 0 && n / x == n % 10) { 
        z = z + 1 + f_04_recursive(z, (n % x / 10), x / 100); 
    }
    else z = 0;
    return z;
}

int f_04() {
    return f_04_recursive(0, 43202234, 10000000);
}

void question_05(void) { 
    char r[] = "cestas"; int m = strlen(r);
    char s[] = "sestas"; int n = strlen(s);
    int d = 0;
    while (m == n && m > 0 && d == 0) { 
        d = d + ((r[m] - s[n]) != 0); 
        m = m - 1;
        if (d != 0) m = -1; else n = m; 
    }
    printf("d=%d m=%d\n", d, m);
}

bool isHappynumber(int x) {
    int tentativas = 0;
    while (tentativas < 10) {
        int soma = 0;
        int temp = x;
        while (temp > 0) {
            int digito = temp % 10;
            soma = soma + (digito * digito);
            temp = temp / 10; 
        }
        x = soma; 
        if (x == 1) return true; 
        tentativas++;
    }
    return false; 
}

void method_06() {
    printf("Numeros Felizes no intervalo [2000, 2100]:\n");
    for (int i = 2000; i <= 2100; i++) {
        if (isHappynumber(i)) {
            printf("Happy number: %d\n", i);
        }
    }
}

bool is_vowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void method_07(char s[]) {
    int count = 0;
    int i = 1; 
    int len = strlen(s);
    while (i < len - 1) {
        if (s[i] == ' ' && is_vowel(s[i+1]) && is_vowel(s[i-1])) {
            count++;
        }
        i++; 
    }
    printf("Quantidade de sinalefas: %d\n", count);
}

void center(char s[], int tamanho) {
    int inicio = 0;
    int fim = tamanho - 1;
    while (inicio <= fim) {
        for (int i = 0; i < inicio; i++) printf(".");
        for (int i = inicio; i <= fim; i++) printf("%c", s[i]);
        for (int i = 0; i < inicio; i++) printf(".");
        printf("\n");
        inicio++;
        fim--;    
    }
}

void method_08(void) {
    char palavra[] = "UNIVERSIDADE";
    center(palavra, strlen(palavra));
}

int main() {
    int qtd = 3;
    int opcao = 0;

    printf("Saida Questao 01: ");
    p_01();
    printf("\nSaida Questao 02: %d", f_02());
    printf("\nSaida Questao 03: %d", f_03());
    printf("\nSaida Questao 04: %d\n", f_04());
    printf("Saida Questao 05: ");
    question_05();
    printf("\n");

    do {
        printf("\nEscolha um metodo:\n0.Terminar\n");
        recursao(qtd);
        scanf("%d", &opcao); getchar();

        switch(opcao) {
            case 0: break;
            case 1: method_06(); break;
            case 2: method_07("aa aaa aaa"); break;
            case 3: method_08(); break;
            default: printf("ERRO: Metodo invalido!\n"); break;
        }
    } while(opcao != 0);

    printf("Aperte ENTER para terminar");
    getchar();
    return 0;
}