#include <iostream>

using namespace std;

int main(){
	
	cout << "*************************************" << endl;
	cout << "* Bem Vindo ao Jogo da Adivinhacao! *" << endl;
	cout << "*************************************" << endl;
	
	const int NUMERO_SECRETO = 42;
	
	bool nao_acertou = true;
	int tentativas = 0;
	
	double pontos = 1000.00;
	
	while (nao_acertou){
		tentativas++;
		int chute;
		cout << endl <<"Tentativa: " << tentativas << endl;
		cout << "Qual seu chute? ";
		cin >> chute;
		
		double pontos_perdidos = abs(chute - NUMERO_SECRETO) / 2.0;
		pontos = pontos - pontos_perdidos;
		
		cout << "O valor do seu chute eh: " << chute << endl;
		
		bool acertou = chute == NUMERO_SECRETO;
		bool maior = chute > NUMERO_SECRETO;
		bool menor = chute < NUMERO_SECRETO;
		
		if (acertou){
			cout << "Parabens! Voce acertou o numero secreto!" << endl;
			nao_acertou = false;
		}
		else if (maior){
			cout << "Seu chute foi MAIOR que o numero secreto." << endl;
		}
		else if (menor){
			cout << "Seu chute foi MENOR que o numero secreto." << endl;
		}
	}
	cout << endl << "Fim do jogo!" << endl;
	cout << "Voce acertou o numero secreto em " << tentativas << " tentativas." << endl;
	cout.precision(2);
	cout << fixed;
	cout << "Sua pontuacao foi de " << pontos << " pontos." << endl;
}