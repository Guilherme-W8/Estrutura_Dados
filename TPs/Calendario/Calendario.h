using namespace std;

#include <stdio.h>
#include <windows.h>

class Calendario{
    
	int dia;
    int mes;
    int ano;
    
    public:
    
    Calendario(int dia, int mes, int ano){
        this->dia=dia;
        this->mes=mes;
        this->ano=ano;
    }
    
    bool Bissexto(){
        if( ( (ano % 4 == 0) && (ano % 100 != 0) ) || (ano % 400 == 0) ) 
            return true; 
        else 
            return false; 
    }
    
   	int dayWeek(int dia, int mes, int ano){
         int f = ano + dia + 3 * (mes - 1) - 1; 
         if (mes < 3) ano--; 
	
	else f -= int(0.4 * mes + 2.3); 
         f += int (ano / 4) - int ((ano / 100 + 1) * 0.75); 
   	     f %= 7; 
   	     return f+1; 
        }   
		
	   
 
    void ImprimiCalendario(int mes, int ano){ 
    	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4 /* Cor */);
       	cout <<"DOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n\n"; 
       	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7 /* Cor */);
        int auxiliar = 0;
       
  	short TamanhoDoMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
  			if (Bissexto() == true){ 
 				TamanhoDoMes[1] = 29; 
 			}  
  			for(int j = 1; j < dayWeek(dia,mes,ano); j++) cout <<'\t'; 
  				for(int i = dia; dia <= TamanhoDoMes[mes - 1]; dia++){
    				if(i >= dia) {
    					if(auxiliar == 0){
    						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10 /* Cor */);
    						cout  << dia <<'\t';
    						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7 /* Cor */);
    						auxiliar++;
						}	
    					else
							cout  << dia <<'\t'; 
					}
                	else cout << " " <<'\t'; 
    				i++;
				if(dayWeek(dia,mes,ano) == 7) cout <<'\n'; 
        } 
  	}	 
};
