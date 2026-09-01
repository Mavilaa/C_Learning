#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>
#include<string.h>
int main(){
    //definir valores
double x = 0.0;
double *px = &x;
double vol = 0.0;
    //printar valores
printf("%s", "Entre um valor para o lado: ");
scanf("%lf", &x);getchar();
// redefinir valores
*px = x/6;
vol = pow(*px,3);
//printar novos valores
printf("%s%lf","\nNovo valor do lado: ", x);
printf("%s%lf", "\nNovo volume do cubo: ", vol);
//encerrar
printf("%s", "\nAperte ENTER para terminar");
getchar();
return 0;
}


/*Entre um valor para o lado: 20

Novo valor do lado: 3.333333
Novo volume do cubo: 37.037037
Aperte ENTER para terminar*/