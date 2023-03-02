#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");
    float media;
    
    cout<<"Digite sua nota: ";
    cin>> media;
     
    cout<<"\nResultado: ";
    if(media==1)
        cout<<"A";
    else if(media==2)
        cout<<"B";
    else if(media==3)
        cout<<"C";
    else if(media==4)
        cout<<"D";
    else if(media==5)
        cout<<"E";
    else
        cout<<"Inválido";
}
