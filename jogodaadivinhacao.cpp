#include <iostream>

using namespace std;

int main(){
	
	cout << "*************************************" << endl;
	cout << "* Bem Vindo ao Jogo da Adivinhacao! *" << endl;
	cout << "*************************************" << endl;
	
	int numero_secreto = 42;
	
	int chute;
	cout << endl << "Qual seu chute? ";
	cin >> chute;
	cout << "O valor do seu chute eh: " << chute << endl;
	
	if (chute == numero_secreto){
		cout << "Parabens! Voce acertou o numero secreto!" << endl;
	}
	else if (chute > numero_secreto){
		cout << "Seu chute foi maior que o numero secreto." << endl;
	}
	else {
		cout << "Seu chute foi menor que o numero secreto." << endl;
	}
}