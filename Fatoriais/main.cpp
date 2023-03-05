#include <cstdlib>
#include <iostream>
using namespace std;

/* Ler um vetor V de 10 elementos e obter um vetor W cujos componentes sao os fatoriais dos respectivos componentes de V. */

int main(int argc, char** argv) {
	
	int vetorV[10];
	int vetorW[10];
	int auxiliarTeste = 0;
	int auxiliar = 0;
	 
	cout << "Popule o vetor: " << endl;
	
	for(int i = 0; i < 10; i++){
		cin >> vetorV[i];
		
		auxiliar = vetorV[i] - 1;
		auxiliarTeste = vetorV[i] * auxiliar;
		auxiliar--;
		
		while(auxiliar != 0){
			auxiliarTeste *= auxiliar;
			auxiliar--;
		}
		
		vetorW[i] = auxiliarTeste;
	}
	
		cout << "Fatorial das respectivas entradas: " << endl;
		
	for(int i = 0; i < 10; i++){
		cout << vetorW[i] << endl;
	}
	
	return 0;
}
