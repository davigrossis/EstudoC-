#include <iostream>
#include <fstream>
using namespace std;

float calculaMedia(int n, float *vet)
{
    int i;
    int aux = 0;
    int media;
    for(i=0; i < n; i++)
    {
        aux += vet[i];
    }
    media = aux/n;
    return media;
}

int main()
{
    int n;
    int i;
    cout << "Defina um valor para N: " << endl;
    cin >> n;

    float vet[n];
    for(i=0; i < n; i++)
    {
        cout << "Digite o valor do vetor " << i+1 << " :" << endl;
        cin >> vet[i]; 
    }

    cout << "Media dos vetores: " << calculaMedia(n,vet);


    
    return 0; 
}