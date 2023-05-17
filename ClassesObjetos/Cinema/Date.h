class Date{
	
	public:
	
	int dia;
	int mes;
	int ano;
	int diaAtual = 10;
	int mesAtual = 5;
	int anoAtual = 2023;
	
	
	Date(){
	}
	
	Date(int dia, int mes, int ano){
		this -> dia = dia;
		this -> mes = mes;
		this -> ano = ano;
	}
	
	int calcularIdade(int anoPessoa){
		return anoAtual - anoPessoa;
	}
	
};
