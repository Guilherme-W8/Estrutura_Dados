#include <iostream>
using namespace std;

/* Fazer um programa que digite vários números no vetor de tamanho máximo de 100 elementos, até digitar o número “0”. Imprimir quantos números iguais ao último número foram lidos. O limite de números é 100.  Sem considerar o “0” como último número. */

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
