#include <iostream>
using namespace std;

/* Criar um programa que leia dados de um vetor de 12 elementos inteiros. Imprima o maior e menor sem ordenar, o percentual de numeros pares e a media dos elementos do vetor.  */

int main(int argc, char** argv) {
	
	int inteiro[12];
	int maior = 0;
	int menor = 0;
	int contadorPar = 0;
	int contadorImpar = 0;
	float percentualPar = 1;
	float somaInteiros = 0;
	
	cout << "Popule o vetor: " << endl;
	
	for(int i = 0; i < 12; i++){
		cin >> inteiro[i];
		somaInteiros += inteiro[i];
		
		if(inteiro[i] % 2 == 0){
			contadorPar++;
			}
			else{	
				contadorImpar++;
			}
		
		if(i == 0){
			menor = inteiro[i];
			maior = inteiro[i];
		}
		
		else if(inteiro[i] > maior){
			maior = inteiro[i];
		}
		if(menor > inteiro[i]){
			menor = inteiro[i];
		}
		
	}	
	cout << "Maior -> " << maior << endl;
	cout << "Menor -> " << menor << endl;
	
	cout << "Par > " << contadorPar << endl << "Impar > " << contadorImpar << endl;
	
	percentualPar = (contadorPar * 100 / 12 * percentualPar);
	
	cout << "Percentual de numeros pares > " << percentualPar << "%" << endl;
	cout << "Media aritmetica dos elementos do vetor > " << (somaInteiros / 12) << endl;
	
	return 0;
}
