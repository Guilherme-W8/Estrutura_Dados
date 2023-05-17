#include <iostream>
using namespace std;

/* Fazer um programa que, dados dois vetores de 7 posicoes cada, efetue as operações aritmeticas basicas, indicadas por um terceiro vetor cujos dados tambem sao fornecidos pelo usuario, gerando e imprimindo um quarto vetor.  */

int main(int argc, char** argv) {
	float primeiro[7], segundo[7]; 
	float vetorResultante[7];
	int decisao[7];
	
	cout << "Digite os dois valores e escolha qual operacao aritmetica voce deseja. \n1 - Adicao\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao" << endl;
	
	for(int i = 0; i < 7; i++){
		cout << "\nValores: ";
		cin >> primeiro[i] >> segundo[i];
		cout << "Codigo da operacao: ";
		cin >> decisao[i];
	
		switch(decisao[i]){
			case 1:
				vetorResultante[i] = (primeiro[i] + segundo[i]);
				cout << "=== " << vetorResultante[i] << " ===\n" << endl;
				break;
			case 2:
				vetorResultante[i] = (primeiro[i] - segundo[i]);
				cout << "=== " << vetorResultante[i] << " ===\n" << endl;
				break;
			case 3:
				vetorResultante[i] = (primeiro[i] * segundo[i]);
				cout << "=== " << vetorResultante[i] << " ===\n" << endl;
				break;
			case 4:
				vetorResultante[i] = (primeiro[i] / segundo[i]);
				cout << "=== " << vetorResultante[i] << " ===\n" << endl;
				break;	
		}
	}	
}
