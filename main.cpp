#include <iostream>
#include <fstream>
using namespace std;

    //int vet[3] = {10, 20, 30};
    //cout << "enderecos" << endl;
    //cout << vet << endl;
    //cout << vet+1 << endl;
    //cout << vet+2 << endl;
    //cout << "valores" << endl;
    //cout << vet[0] << endl;
    //cout << vet[1] << endl;
    //cout << vet[2] << endl;
    // para alocar uma variavel new tipoDeDado
    // ou para alocar um array new tipoDeDado[tamanho]
    // delete dados;
    // delete [] dados;
    //char *ptr;
    //ptr = new char;
    //*ptr = ’H’;

int main()
{
    cout << "Digite um valor para N" << endl;
    int n;
    int i;
    cin >> n;

    float *vet;
    vet = new float[n];

    for(i=0; i < n; i++)
    {
        cin >> vet[i]; 
    }

    for(i=0; i < n; i++)
    {
        cout << "Vetor " << i+1 << " : "<< vet[i] << endl; 
    }
    
    float media = 0;
    for(i=0; i < n; i++)
    {
        media += vet[i];
    }

    cout << "Media dos vetores: " << media/n;

    delete [] vet;

    return 0; 
}