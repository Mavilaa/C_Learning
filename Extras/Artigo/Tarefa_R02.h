#include"Array_R02.h"
#include"Matrix_R02.h"
void method_01() {
    ref_int_array array1 = new_int_array(0);
    bool x = false;
    
    random_Array("DADOS1.TXT", 5);
    x = array_decrescent("DADOS1.TXT", "DECRESCENTE.TXT", array1);
    
    printf("Esta decrescente? [%d]\n", x);
    print_array(array1);
    pause();
    
    free_int_array(array1);
}

void method_02() {
    ref_int_array array1 = new_int_array(0);
    
    invert_array("DECRESCENTE.TXT", "INVERTIDO.TXT", array1);
    print_array(array1);
    pause();
    
    free_int_array(array1);
}

void method_03() {
    ref_int_array array1 = new_int_array(0);
    int n = fread_SArray("DADOS1.TXT", array1);
    
    int tabela[n][2];
    int x = medium_Array(array1, tabela);
    
    printf("\nValor\tFrequencia\n");
    for (int y = 0; y < n; y++) {
        printf("%d\t%d\n", tabela[y][0], tabela[y][1]);
    }
    
    printf("\nArray Ordenado:\n");
    print_array(array1);
    printf("Mediana dos valores: %d\n", x);
    pause();
    
    free_int_array(array1);
}

void method_04() {
    ref_int_array array1 = new_int_array(0);
    ref_int_array array2 = new_int_array(0);
    
    int n_rand = 5;
    random_Array("DADOS2.TXT", n_rand);
    
    int n3 = 0;
    int n1 = get_file_array_size("DADOS1.TXT");
    int n2 = get_file_array_size("DADOS2.TXT");
    int arr1[n1];
    int arr2[n2];
    int arr3[n1]; 
    fread_Array_raw("DADOS1.TXT", arr1);
    fread_Array_raw("DADOS2.TXT", arr2);
    n3 = common_elements(arr1, arr2, arr3, n1);


    fprint_raw("FILTRADOS.TXT", arr3, n3);
    
    printf("Filtragem concluida. %d elementos comuns encontrados.\n", n3);
    pause();
    
    free_int_array(array1);
    free_int_array(array2);
}
    


void method_05(){
int n = 5;
int x= 0;
random_Binary("BINARIOS1.TXT", n);
int array[n];

fRead_Binary("BINARIOS1.TXT", array);
x = convert_Binary(array, n);
printf("%s%d\n","Numero convertido para decimal: " ,x);
}


void method_06(){
int i = 4;
int j = 4;
random_Matrix("MATRIX1.TXT", i, j);
int matrix[i][j];
Fread_Matrix("MATRIX1.TXT", i, j, matrix);
tri_prim(i, j , matrix);
print(i,j, matrix);

}


void method_07(){
int i = 4;
int j = 4;
random_Matrix("MATRIX1.TXT", i, j);
int matrix[i][j];
Fread_Matrix("MATRIX1.TXT", i, j, matrix);
tri_sec(i, j , matrix);
print(i,j, matrix);

}

void method_08(){
    int i = 4;
int j = 4;
bool a = false;
random_Matrix("MATRIX3.TXT", i, j);
int matrix[i][j];
Fread_Matrix("MATRIX3.TXT", i, j, matrix);
a = is_squared(matrix, i, j);
printf("%s%d\n", "Respeita a condicao: ", a);
print(i,j, matrix);


}

void method_09(){
    int i = 4;
int j = 4;
bool a = false;
random_Matrix("MATRIX3.TXT", i, j);
int matrix[i][j];
Fread_Matrix("MATRIX3.TXT", i, j, matrix);
a = is_potdecres(matrix, i, j);
printf("%s%d\n", "Respeita a condicao: ", a);
print(i,j, matrix);


}

void method_10() {
    create_DADOS3("DADOS3.TXT");
    avaliar_supermercados("DADOS3.TXT");
    printf("\n");
}