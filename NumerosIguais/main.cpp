#include <iostream>
using namespace std;

/* Fazer um programa que digite v�rios n�meros no vetor de tamanho m�ximo de 100 elementos, at� digitar o n�mero �0�. Imprimir quantos n�meros iguais ao �ltimo n�mero foram lidos. O limite de n�meros � 100.  Sem considerar o �0� como �ltimo n�mero. */

int main(int argc, char *argv[])
{
    float vetor[5];
    float ultimoNumeroSemSerZero = 0;
    int contadorIguais = 0;
    
    for(int i = 0; i < 5; i++){
            cin >> vetor[i];
                if(vetor[i] == 0){
                             break;
                     }         
                else{
                     ultimoNumeroSemSerZero = vetor[i];
                     }
        }
    
    for(int i = 0; i < 5; i++){
            if(vetor[i] == ultimoNumeroSemSerZero){
                        contadorIguais++;
                }
          }    
          
          cout << "O total de numeros iguais ao ultimo digitado (" << ultimoNumeroSemSerZero << ") = " << (contadorIguais - 1) << endl;
        
    system("PAUSE");
    return EXIT_SUCCESS;
}
