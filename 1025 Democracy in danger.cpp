#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int c, menorpos, minimo;
    int suma = 0;
    vector<int> vec;
    cin >> c;
    for (int i=0; i<=(c-1); i++) {

        cin >> vec[i];
    }
    c = (c+1)/2;
    for (int j=0; j<=(c-1),j++){

        int menorpos = min_element(vec.begin(), vec.end()) - vec.begin();
        minimo = min_element(vec);
        suma += (minimo+1)/2;
        v[menorpos] = 10000;

    }
    cout << suma << endl;
}
