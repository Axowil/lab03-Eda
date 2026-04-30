/*
1. Crear un arreglo de tipo caracteres, como se hizo en el ejercicio 8
*/

#include <iostream>
using namespace std;


int main(){
    char* arr = new char[3]{'a','b','c'};

    for(int i = 0 ; i < 3; i++){
        cout << arr[i] <<  " ";
    }
    return 0 ;
}
