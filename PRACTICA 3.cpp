#include<iostream>
using namespace std;
int main(){
	//Decalaración de las variables
	float fahr, cels;
	//Lectura de los valores de entrada
	cout<<"Conversion de temperatura. \n";
	ask_cels:
	cout<<"Dame el numero de grados celsius: \n";
	cin>>cels;
		if (cin.fail()){
			cin.ignore();
			cin.clear();
				goto ask_cels;}
	//Proceso de conversión
		if (cels>=(-273)){
		fahr=(9*cels/5)+32;
		//Impresión de resultados
		cout<<"El valor en Farenheits es: \n";
		cout<<fahr;
		}
	}
		
