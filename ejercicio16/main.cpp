#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {1,2,3};
    vector<int> b = a;

    for(int x : b)
        cout << x << " " << endl;

    return 0;
}

