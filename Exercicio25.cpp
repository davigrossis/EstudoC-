#include <iostream>
#include <fstream>
using namespace std;

int soma(int n)
{   
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    else
        return n + soma(n - 1);
}

int main()
{
    int n = 2;
    if ( soma(n) == 0 || soma(n) < 0)
    {
        cout << "Soma 0 ou invalida";
    }
    else 
        cout << "Valor do resultado: " << soma(n);
    return 0; 
}