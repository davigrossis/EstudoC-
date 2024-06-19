#include <iostream>
#include <fstream>
using namespace std;

int numDigitos(int n)
{   
    if(n < 10)
        return 1;
    else
        return 1 + numDigitos(n/10);
}

int main()
{   
    int n;
    n = 50000;
    cout << "Valor do resultado: " << numDigitos(n);
    return 0; 
}