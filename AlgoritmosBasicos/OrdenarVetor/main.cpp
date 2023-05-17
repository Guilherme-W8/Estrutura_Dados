#include <iostream>
using namespace std;

/* Criar um vetor com a 8 elementos e ordena-los. */

int main(int argc, char** argv) {
	
	int vetor[8], auxiliar = 0;
	
	// Popular vetor: 
	
	for(int i = 0; i < 8; i++){
		cin >> vetor[i];
	}
	
	// Usando metodo Bolha (codigo) para ordenar o vetor.
	
	for(int j = 7; j >= 0; j--){
		for(int i = 0; i < j; i++){
			if(vetor[i] > vetor[i + 1]){
				auxiliar = vetor[i];
				vetor[i] = vetor[i + 1];
				vetor[i + 1] = auxiliar; 
			}
		}
	}
	
	cout << "=======================================" << endl;
	
	for(int i = 0; i < 8; i++){
		cout << vetor[i] << endl;
	}
	return 0;
}
