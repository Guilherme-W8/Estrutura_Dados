#include <cstdlib>
#include <iostream>
#include "Comparavel.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	nt x = 10;
	Comparavel comparavel(x); // chamada do construtor default com valor setado de: 10
	
	int escolha, numero;
	
	cout << "Digite um numero: ";
	cin >> numero;
	
	cout << "\nEscolha uma opcao\n\n1 - Maior ou igual\n2 - Menor ou igual\n3 - Diferente\n\n> ";
	cin >> escolha;
	
	cout << "\n";
	
	string auxiliar;
	
	switch(escolha){
		case 1:
			auxiliar = (comparavel.maiorOuigual(numero)) ? "<< VERDADE >>" : "<< FALSO >>";
			cout << auxiliar << endl;
			break;
		case 2:
			auxiliar = (comparavel.menorIgual(numero)) ? "<< VERDADE >>" : "<< FALSO >>";
			cout << auxiliar << endl;
			break;
		case 3: 
			auxiliar = (comparavel.diferenteDe(numero)) ? "<< VERDADE >>" : "<< FALSO >>";
			cout << auxiliar << endl;	
			break;
		default:
			cout << "<<< OPCAO INVALIDA >>>" << endl;	
	}
	
    system("PAUSE");
    return EXIT_SUCCESS;
}
