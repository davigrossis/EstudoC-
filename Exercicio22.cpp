#include <iostream>
#include <fstream>
using namespace std;

float* calculaSoma(int n, float vetA[], float vetB[])
{
    float *result = new float[n];
    int i;
    for(i=0; i < n; i++)
    {
        result[i] = vetA[i] + vetB[i];
    }
    return result;
}

int main()
{
    float vetA[5] = {20,50,70,80,120};
    float vetB[5] = {60,20,300,34,30};
    float *vetRes = calculaSoma(5,vetA,vetB);
    
    int i;
    for(i=0; i < 5;i++)
    {
        cout << "Valor da soma " << i+1 << ": " << vetRes[i] <<endl;
    }

    delete [] vetRes;
    
    return 0; 
}