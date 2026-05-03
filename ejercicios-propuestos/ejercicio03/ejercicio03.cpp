#include <iostream>
using namespace std;

int main(){
    int n = 5 ; 
    int* arr = new int[n];

    int i = 0 ;
    while (i<5){
        arr[i] = i + 1;
        i++;
    }
    
    //imprimir el resultado 
    int j = 0 ;
    while (j<n)
    {
        cout << arr[j] << " ";
        j++;
    }
    delete[] arr;
    cout <<""<< endl;
    return 0;
    
}