#include <iostream>

using namespace std;
main(){
  	int numero,qtde ;                
	
    cout << "informe um numero:";
 	cin >> numero;
 	
	for (int i = 0; i  <= 10; i++){
		  cout << numero << "x"<< i << " = " << numero * i << endl;
	}
}
