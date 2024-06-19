#include <iostream>
#include <fstream>
using namespace std;

float** alocaMatrizF(int m, int n)
{
    float** matriz = new float*[m];
    for (int i = 0; i < m; ++i) {
        // Aloca memória para cada linha da matriz
        matriz[i] = new float[n]();
    }
    return matriz;

}
int main()
{
    
    float **matriz;
    matriz = alocaMatrizF(3,4);


    delete [] matriz;
    return 0; 
}