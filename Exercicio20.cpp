#include <iostream>
#include <fstream>
using namespace std;

float* alocaVetorF(int n)
{
    float *vet = new float[n];
    if (vet == nullptr)
    {
        cout << "ERRO: Não foi possivel alocar memória para o vetor de floats.";
    }
    return vet;
}
double* alocaVetorD(int n)
{
    double *vet = new double[n];
    if (vet == nullptr)
    {
        cout << "ERRO: Não foi possivel alocar memória para o vetor de doubles.";
    }
    return vet;
}
int main()
{
    float *vetF;
    double *vetD;
    
    vetF = alocaVetorF(100);
    vetD = alocaVetorD(1000);

    delete[] vetF;
    delete[] vetD;

    return 0; 
}