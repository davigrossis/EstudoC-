#include <iostream>
#include <fstream>
using namespace std;

bool buscaBinariaRecursiva(int vet[], int inicio, int fim, int chave) {
    // Se o início ultrapassar o fim, significa que a chave não foi encontrada
    if (inicio > fim) {
        return false;
    }

    // Calcula o meio do intervalo
    int meio = (inicio + fim) / 2;

    // Se a chave estiver no meio, retorna true
    if (vet[meio] == chave) {
        return true;
    }
    // Se a chave estiver à esquerda do meio, busca recursivamente na metade esquerda
    else if (chave < vet[meio]) {
        return buscaBinariaRecursiva(vet, inicio, meio - 1, chave);
    }
    // Se a chave estiver à direita do meio, busca recursivamente na metade direita
    else {
        return buscaBinariaRecursiva(vet, meio + 1, fim, chave);
    }
}

bool buscaBinaria(int vet[], int n, int chave)
{
    return buscaBinariaRecursiva(vet, 0, n - 1, chave);
}


int main()
{   

    return 0; 
}