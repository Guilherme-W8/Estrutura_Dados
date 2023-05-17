#include <iostream>
#include "Calendario.h"
using namespace std;

int main(int argc, char** argv) {
	int dia,mes,ano;
    
    cout << "DIGITE A DATA: ";
    cin >> dia >> mes >> ano;    
    Calendario calendario(dia, mes, ano);
	
	cout << "\n";
	
    cout<<"Data: " << dia << "/" << mes << "/" << ano << endl;
    
    switch(calendario.dayWeek(dia, mes, ano)){
    case 1: 
        cout << "DOMINGO" << endl;
        break;
    case 2: 
        cout << "SEGUNDA-FEIRA" << endl;
        break;
    case 3: 
        cout << "TERCA-FEIRA" << endl;
        break;
    case 4: 
        cout << "QUARTA-FEIRA" << endl;
        break;
    case 5: 
        cout << "QUINTA-FEIRA" << endl;
        break;
    case 6: 
        cout << "SEXTA-FEIRA" << endl;
        break;
    case 7: 
        cout << "SABADO" << endl;
        break;
    }
    
    cout<<"\n\n";
    
    calendario.ImprimiCalendario(mes, ano);
    
    
    return 0;
}
