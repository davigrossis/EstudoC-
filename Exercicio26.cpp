#include <iostream>
#include <fstream>
using namespace std;

int soma(int a, int b)
{   
    if(a > b)
        return 0;
    if(b == a)
        return a;
    else return b + soma(a,b-1);
}

int main()
{   
    int a,b;
    a = 2;
    b = 8;
    cout << "Valor do resultado: " << soma(a,b);
    return 0; 
}