#include <iostream>
using namespace std;

int* CriaVetInt(int qntdElementos) {
    // Cria um vetor de inteiros com a quantidade de elementos recebida.
    int* vetor = new int[qntdElementos];
    return vetor;
}

float* CriaVetFloat(int qntdElementos) {
    // Cria um vetor de floats com a quantidade de elementos recebida.
    float* vetor = new float[qntdElementos];
    return vetor;
}

void AppendChar(char carac, char* pvetcar, int ptammax, int pqntd) {
    // Adiciona um caracter na primeira posição disponível do vetor.
    if (pqntd < ptammax) {
        for (int i=0; i < ptammax; i++) {
            if (pvetcar[i] == 0) {
                pvetcar[i] = carac;
                break;
            }
        }
    }
}

void RemoveChar(char carac, char* pvetcar, int ptammax, int pqntd) {
    // Remove um caracter do vetor e o reorganiza.
    for (int i=0; i < ptammax; i++) {
        if (pvetcar[i] == carac) {
            // Reordene os elementos.
            for (int j=i; j < pqntd-1; j++) {
                pvetcar[j] = pvetcar[j+1];
            }
            pvetcar[pqntd-1] = 0;
        }
    }
}

bool IncluirValor(double* pvalores, double pv, int pcapacidade, int ptamanho) {
    
}

int main() {

    int* vetor = CriaVetInt(20);

    for (int i=0; i < 20; i++) {
        cout << vetor[i] << " ";
    }
    cout << "\n";

    char* vetorChar = new char[10];
    AppendChar('a', vetorChar, 10, 0);
    AppendChar('b', vetorChar, 10, 1);
    AppendChar('c', vetorChar, 10, 2);
    RemoveChar('b', vetorChar, 10, 3);

    for (int i=0; i < 10; i++) {
        cout << vetorChar[i] << " ";
    }
     cout << "\n";

    delete[] vetor;
    delete[] vetorChar;

    return 0;
}