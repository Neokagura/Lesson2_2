

#include <iostream>
using namespace std;


int main()
{
    int a = 42;
    int b = 153;
    int c;
    cout << "a: " << a << "\n"; 
    cout << "b: " << b << "\n";

    c = a;
    a = b;
    b = c;

    cout << "a: " << a << "\n"; 
    cout << "b: " << b << "\n";

}

