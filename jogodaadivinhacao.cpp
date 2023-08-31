#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	
	cout << "*************************************" << endl;
	cout << "* Bem Vindo ao Jogo da Adivinhacao! *" << endl;
	cout << "*************************************" << endl;
	
	cout << "Escolha o seu nivel de dificuldade: " << endl;
	cout << "Facil (F), Medio (M), Dificil (D) " << endl;
	
	char dificuldade;
	
	int numero_de_tentativas;
	
	bool opcao_invalida;
	do {
		cin >> dificuldade;
		bool opcao_invalida = false;
		switch(dificuldade){
		case 'F':
			numero_de_tentativas = 15;
			break;
		case 'M':
			numero_de_tentativas = 10;
			break;
		case 'D':
			numero_de_tentativas = 5;
			break;
		default:
			opcao_invalida = true;
			cout << "Escolha uma opcao valida" << endl;
		}
	} while(opcao_invalida);
	
	
	srand(time(NULL));
	const int NUMERO_SECRETO = rand() % 100;
	
	bool nao_acertou = true;
	int tentativas = 0;
	
	double pontos = 1000.00;
	
	for (tentativas = 1; tentativas <= numero_de_tentativas; tentativas++) {
		int chute;
		cout << endl <<"Tentativa: " << tentativas << endl;
		cout << "Qual seu chute? ";
		cin >> chute;
		
		double pontos_perdidos = abs(chute - NUMERO_SECRETO) / 2.0;
		pontos -= pontos_perdidos;
		
		cout << "O valor do seu chute eh: " << chute << endl;
		
		bool acertou = chute == NUMERO_SECRETO;
		bool maior = chute > NUMERO_SECRETO;
		bool menor = chute < NUMERO_SECRETO;
		
		if (acertou){
			cout << "Parabens! Voce acertou o numero secreto!" << endl;
			nao_acertou = false;
			break;
		}
		else if (maior){
			cout << "Seu chute foi MAIOR que o numero secreto." << endl;
		}
		else if (menor){
			cout << "Seu chute foi MENOR que o numero secreto." << endl;
		}
	}
	
	cout << endl << "Fim do jogo!" << endl;
	if (nao_acertou){
		cout << "Voce perdeu! Tente novamente" << endl;
	}
	else {
		cout << "Voce acertou o numero secreto em " << tentativas << " tentativas." << endl;
		cout.precision(2);
		cout << fixed;
		cout << "Sua pontuacao foi de " << pontos << " pontos." << endl;
	}

}