#include <iostream>
using namespace std;

int main() {
    int* arr = new int[3]{10,20,30};

    for(int i = 0; i < 3; i++)
        cout << *(arr + i) << " ";

    cout <<""<< endl;
        delete[] arr;
    return 0;
}

