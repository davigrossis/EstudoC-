#include <iostream>
#include <fstream>
using namespace std;

void preencheVetorF(int n, float *vet)
{
    int i;
    for(i=0; i < n; i++)
    {
        cout << "Digite um valor para o vetor de float "<< i+1 << " :" << endl;
        cin >> vet[i];
    }
}
void preencheVetorD(int n, double *vet)
{
    int i;
    for(i=0; i < n; i++)
    {
        cout << "Digite um valor para o vetor de double "<< i+1 << " :" << endl;
        cin >> vet[i];
    }
}
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

    vetF = alocaVetorF(5);
    preencheVetorF(5, vetF);
    vetD = alocaVetorD(5);
    preencheVetorD(5, vetD);

    delete [] vetF;
    delete [] vetD;

    return 0; 
}