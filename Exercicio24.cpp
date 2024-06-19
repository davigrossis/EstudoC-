#include <iostream>
#include <fstream>
using namespace std;

float** transposta(int m, int n, float **mat)
{
    float** matrizTransposta = new float*[n];
    for (int i = 0; i < n; ++i) {
        matrizTransposta[i] = new float[m];
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            matrizTransposta[i][j]= mat[j][i];
        }
    }

    return matrizTransposta;
}
float** original(int m, int n)
{
    float** matrizOriginal = new float*[m];
    for (int i = 0; i < m; ++i) {
        matrizOriginal[i] = new float[n];
        
        for (int j = 0; j < n; ++j) {
            cout << "Digite o valor da linha " << i+1 << " coluna " << j+1 << " : " << endl;
            cin >> matrizOriginal[i][j];
        }
    }
    return matrizOriginal;
}
int main()
{
    
    float **matrizOg = original(3,4);
    
    cout << "Matriz Original:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << matrizOg[i][j] << " ";
        }
        cout << endl;
    }
    
    float **matrizTp;
    matrizTp = transposta(3,4,matrizOg);

    cout << "Matriz Tranposta:" << endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrizTp[i][j] << " ";
        }
        cout << endl;
    }



    delete [] matrizTp;
    delete [] matrizOg;
    return 0; 
}