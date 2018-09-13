#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    signed long long int c[1024];
    long double x[1024];
    int a = 0;
    std::cout << std::setprecision(4);
    std::cout << std::fixed;
      while(cin >> c[a]){

        x[a] = sqrt(c[a]);
        a++;
        if (cin.eof()){
            break;
        }
        }
         a--;
    for (a; a>=0; a--){
       cout <<  x[a] << endl;
    }
    return 0;
}
