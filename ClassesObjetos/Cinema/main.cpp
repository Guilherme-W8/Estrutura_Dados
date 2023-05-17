#include <iostream>
#include "EntradaDeCinema.h"
#include "Date.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Date data;
	EntradaDeCinema entrada(11, 7, 33, 50);
	
	cout << entrada.valor << endl;
	
	if(entrada.calcularDesconto(data.calcularIdade(2003))){
		cout << "SUCESSO NO DESCONTO" << endl;
	}
	else{
		cout << "SEM SUCESSO NO DESCONTO" << endl;
	}
	
	cout << entrada.valor << endl;
	
	return 0;
}
