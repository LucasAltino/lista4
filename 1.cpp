#include <iostream>

using namespace std;

main() {
	setlocale(LC_ALL, "portuguese");
	int mes;
	
	
	cout << "Informe um dia de 1 a 7: \n";
	cin >> mes;
	
	switch (mes){
		case 1: cout << "Domingo";
		break;
		case 2: cout << "Segunda";
		break;
		case 3: cout << "Ter�a";
		break;
		case 4: cout << "Quarta";
		break;
		case 5: cout << "Quinta";
		break;
		case 6: cout << "Sexta";
		break;
		case 7: cout << "S�bado";
		break;
		defaut: cout << "N�o inexistente";
	}
}
