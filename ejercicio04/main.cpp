#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Introducir el numero del arreglo" << endl;
    cin >> n;

    int* arr = new int[n];

    for(int i = 0; i < n; i++) {
    cout<<"Introducir el "<<(i+1)<<" del arrelgo"<< endl;
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << ""<< endl;
    delete[] arr;
    return 0;
}

