#include <iostream>
using namespace std;
int main(){
	//Declaración de variables
 float peso, dolar, euro;
    //Preguntar por el valor en pesos
    cout<<"Conversion del Sistema de Divisas. \n";
    ask_pesos: cout<<"Ingresa la cantidad en pesos: \n";
    cin>>peso;
    	if(cin.fail()){
			cin.clear();
			cin.ignore(); goto ask_pesos;}
    	if (peso==0) {
    		system("cls");
    		cout<<"Error dato no valido. \n" ; goto ask_pesos;}
    //Proceso de conversion
    dolar=peso/19.21;
    euro=peso/21.79;
    //Impresión de resultados
    cout<< "\n Dolar:" <<dolar; cout<< "\n Euro:" <<euro;
	cout<<"\n"; system("pause");
	return 0; }

