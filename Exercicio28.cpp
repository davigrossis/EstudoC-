#include <iostream>
#include <fstream>
using namespace std;

bool auxPalindromo(char a[], int inicio, int fim) {
    // Caso base: se o índice de início for maior ou igual ao índice de fim, isso significa
    // que todas as comparações foram feitas e o vetor é um palíndromo
    if (inicio >= fim) {
        return true;
    }
    
    // Verifica se os caracteres nos índices de início e fim são iguais
    if (a[inicio] != a[fim]) {
        return false;
    }
    
    // Chamada recursiva, verificando se o subvetor excluindo os caracteres de início e fim é um palíndromo
    return auxPalindromo(a, inicio + 1, fim - 1);
}


bool ehPalindromo(char a[], int n)
{   
    return auxPalindromo(a, 0, n - 1);
}

int main()
{   
    int n = 5;
    char a[] = "arara";
    cout << "Resultado " << ehPalindromo(a,n);
    return 0; 
}