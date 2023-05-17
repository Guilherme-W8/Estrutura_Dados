#include <cstdlib>
#include <iostream>
using namespace std;

/*  Criar um programa que crie um vetor com 10 posicoes e carregue com uma palavra, depois imprima o vetor de uma maneira que exiba a palavra ao contrario (ex. Casa...asac). */ 

int main(int argc, char *argv[])
{   
    char vetor[10];
    int tamanho = 0;
    
    cout << "Digite o tamanho da palavra: ";
    cin >> tamanho;
    
    for(int i = 0; i < tamanho; i++){
    	cin >> vetor[i];
	}
	
    for(int i = (tamanho - 1); i >= 0; i--){
            cout << vetor[i];
          }      
          
    cout << "\n";      
        
    system("PAUSE");
    return EXIT_SUCCESS;
}
