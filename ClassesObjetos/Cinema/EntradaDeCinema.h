

class EntradaDeCinema{
	
	public:
		int diaDoFilme;
		float horario;
		int sala;
		float valor;
	
	EntradaDeCinema(int diaDoFilme, float horario, int sala, float valor){
		this -> diaDoFilme = diaDoFilme;
		this -> horario = horario;
		this -> sala = sala;
		this -> valor = valor;
	}
	
	bool calcularDesconto(int idadePessoa){
		if(idadePessoa <= 12){
			this -> valor = valor / 2; 
			return 1;
		}
		else{
			return 0;
		}
	}
};
