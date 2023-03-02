#include <iostream>

using namespace std;

main(){

setlocale( LC_ALL, "portuguese");

float numero;

	cout << "Escolha um numero entre 1 e 3:";	
	cin >> numero;

if (numero =1) {
	cout << "Turno da manhã";
		
} else if (numero =2){
	cout << "Turno da tarde";
		
} else if (numero =3){
	cout << "Turno da noite";
}
}


