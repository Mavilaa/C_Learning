#include"Classe_E.hpp"

void example_01(){
matrix<int> int_matrix(2,2,0);
int_matrix.set(0,0,1);          int_matrix.set(0,1,2);

int_matrix.set(1,0,3);          int_matrix.set(1,1,4);

int_matrix.print();

cout<<"Aperte ENTER para continuar"<<endl;
getchar();
}


void example_02(){
matrix<int> int_matrix(2,2,0);

int_matrix.read();

int_matrix.print();


cout<<"Aperte ENTER para continuar"<<endl;
getchar();

}

void example_03(){

matrix<int> int_matrix(2,2,0);

int_matrix.read();

int_matrix.print();

int_matrix.fprint("MATRIX1.TXT");

cout<<"Aperte ENTER para continuar"<<endl;
getchar();




}


void example_04(){
matrix<int> matrix(1,1,0);
matrix.fread("MATRIX1.TXT");

matrix.print();


cout<<"Aperte ENTER para continuar"<<endl;
getchar();

}



void example_05(){
matrix<int> int_matrix1(1,1,0);
matrix<int> int_matrix2(1,1,0);

int_matrix1.fread("MATRIX1.TXT");

int_matrix1.print();

int_matrix2 = int_matrix1;

int_matrix2.print();


cout<<"Aperte ENTER para continuar"<<endl;
getchar();
}


void example_06(){
matrix <int> int_matrix(2,2,0);
int_matrix.read();
int_matrix.print();

cout<<"Zeros= "<<int_matrix.isZeros()<<endl;

int_matrix.fread("MATRIX1.TXT");

int_matrix.print();

cout<<"Zeros= "<<int_matrix.isZeros()<<endl;


cout<<"Aperte ENTER para continuar"<<endl;
getchar();

}


void example_07(){
matrix<int> int_matrix1(1,1,0);
matrix<int> int_matrix2(1,1,0);

int_matrix1.fread("MATRIX1.TXT");

int_matrix1.print();

int_matrix2 = int_matrix1;

int_matrix2.print();

cout<<"Diferentes = "<<(int_matrix2 != int_matrix1)<<endl;

int_matrix2.set(0,0,-1);

int_matrix1.print();

int_matrix2.print();

cout<<"Diferentes = "<<(int_matrix2 != int_matrix1)<<endl;

cout<<"Aperte ENTER para continuar"<<endl;
getchar();
}


void example_08(){
matrix<int> int_matrix1(1,1,0);
matrix<int> int_matrix2(1,1,0);
matrix<int> int_matrix3(1,1,0);

int_matrix1.fread("MATRIX1.TXT");

int_matrix1.print();

int_matrix2 = int_matrix1;

cout<<endl<<"Matrix2"<<endl;

int_matrix2.print();

int_matrix3 = int_matrix1 - int_matrix2;

int_matrix3.print();


cout<<"Aperte ENTER para continuar"<<endl;
getchar();
}





void example_09(){
matrix<int> int_matrix1(2,2,0);

int_matrix1.read();

matrix<int> int_matrix2(2,2,0);
matrix<int> int_matrix3(2,2,0);

int_matrix2.fread("MATRIX1.TXT");

cout<<"Matrix1"<<endl;
int_matrix1.print();

cout<<"Matrix2"<<endl;
int_matrix2.print();

int_matrix3 = int_matrix1 * int_matrix2;


int_matrix3.print();

cout<<"Aperte ENTER para continuar"<<endl;
getchar();
}


void example_10(){
matrix<int> int_matrix(3,3,0);
int x = 0;
int y = 0;

int_matrix.fread("MATRIX1.TXT");

int_matrix.print();

for(int x = 0; x < int_matrix.getrows(); x++){

for(int y = 0; y < int_matrix.getcolumns(); y++){

int_matrix.set(x,y,int_matrix.get(x,y)*-1);

}
}

int_matrix.print();



}


