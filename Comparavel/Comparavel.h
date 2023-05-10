using namespace std;

class Comparavel{
	
	int inteiro;
	
	public:
		
		Comparavel(){
		inteiro = 10;
		}
	
		Comparavel(int inteiro){
		this -> inteiro = inteiro;
	}
		
		bool maiorOuigual(int numero){
			if(this -> inteiro >= numero) return true;

			else return false;
		}
		
		bool menorIgual(int numero){
			if(this -> inteiro <= numero) return true;

			else return false;
		}
		
		bool diferenteDe(int numero){
			if(this -> inteiro != numero) return true;

			else return false;
		}
};
