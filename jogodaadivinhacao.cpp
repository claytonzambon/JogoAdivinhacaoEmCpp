#include <iostream>

using namespace std;

int main(){
	
	cout << "*************************************" << endl;
	cout << "* Bem Vindo ao Jogo da Adivinhacao! *" << endl;
	cout << "*************************************" << endl;
	
	const int NUMERO_SECRETO = 42;
	
	int chute;
	cout << endl << "Qual seu chute? ";
	cin >> chute;
	cout << "O valor do seu chute eh: " << chute << endl;
	
	bool acertou = chute == NUMERO_SECRETO;
	bool maior = chute > NUMERO_SECRETO;
	bool menor = chute < NUMERO_SECRETO;
	
	if (acertou){
		cout << "Parabens! Voce acertou o numero secreto!" << endl;
	}
	else if (maior){
		cout << "Seu chute foi maior que o numero secreto." << endl;
	}
	else if (menor){
		cout << "Seu chute foi menor que o numero secreto." << endl;
	}
}