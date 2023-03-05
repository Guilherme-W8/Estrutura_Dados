#include <cstdlib>
#include <iostream>
using namespace std;

/* 1-) Fazer um programa que leia vários números inteiros e positivos. A leitura se encerra quando encontrar um número negativo ou quando o vetor ficar completo. Sabe-se que o vetor possui, no máximo, 10 elementos. Gerar e imprimir um vetor onde cada elemento é o inverso do correspondente do vetor original. */

int main(int argc, char *argv[])
{
    int vetor[10];
    int auxiliarConfirma = 0;
    
    for(int i = 0; i < 10; i++){
            
            int auxiliar = 0;
            
            cin >> auxiliar;
            
            if(auxiliar < 0){
                        break;
                        }
                        
            vetor[i] = auxiliar * -1;
            auxiliarConfirma++;
          }
          
          cout << "==================================" << endl;
          
    for(int i = 0; i < auxiliarConfirma; i++){
            cout << vetor[i] << endl;
          }
    

    system("PAUSE");
    return EXIT_SUCCESS;
}
