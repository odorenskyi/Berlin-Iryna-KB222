#include <iostream>
#include <cmath>
#include "../ModulesBerlin/Berlin_lib.h"
using namespace std;


int main()
{
    float S, x, y,z;
    cout << "x=" ; cin >> x;
    if (x<0)
        cout <<  "відємне число" << endl;
        else {
    cout << "y=" ; cin >> y;
    cout << "z=" ; cin >> z;
    cout << my_func(x, y, z);
    cout << "S=" << S << endl;
    }

    return 0;
}

