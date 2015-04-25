/* Trabajo Práctico 1 Tipos de Datos
* Lucas Vázquez K1091
* 24/04/2015
*/

#include <iostream>

using namespace std;
int main(){
	int A, B, C;
	bool D;
	char E;
	double F;
	string G, H;
	cout<<"Ingrese un caracter para identificar el resultado de la suma A+B \n";
	cin>>E;
	cout<<"Ingrese un numero entero A \n";
	cin>>A;
	cout<<"Ingrese un numero entero B \n";
	cin>>B;
	C=A+B;
	cout<<E;
	cout<<"=";
	cout<<C;
	cout<<endl;
	cout<<"A+B/2=";
	F=C/2.0;
	cout<<F;
	cout<<endl;
	D=(C%2)&&(C!=0);
	if (D==false){
		cout<<E;
		cout<<" un numero par";
	}
	else{
		cout<<E;
		cout<<" es un numero impar";
	};
	cout<<endl;
	string str ("Argentina");
	cout<<"La palabra 'Argentina' tiene "<<str.size()<<" letras \n";
	G="Fin del ";
	H="Programa";
	cout<<G+H;
}
