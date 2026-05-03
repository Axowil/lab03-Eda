#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Introducir el numero del vector" << endl;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
    cout<<"Introducir el "<<(i+1)<<" del vector"<< endl;
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << "" << endl ;
    return 0;
}