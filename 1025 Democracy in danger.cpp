#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int c, menorpos, minimo;
    int suma = 0;
    vector<int> v;
    cin >> c;
    for (int i=0; i<=(c-1); i++) {

        cin >> v[i];
    }
    c = (c+1)/2;
    for (int j=0; j<=(c-1),j++){

        int menorpos = std::min_element(v.begin(),v.end()) - v.begin();
        int minimo = *std::min_element(v.begin(), v.end());

        suma += (minimo+1)/2;
        v[menorpos] = 10000;

    }
    cout << suma << endl;
}
