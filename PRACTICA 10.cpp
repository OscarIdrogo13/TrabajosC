#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;
//Variables Ultimate
float EURO,PESO,DOLAR;
float PD,DP,PE,EP;

//Declaraci�n de macros
void showmenu(void);
void select(int option);
void PesoDolar(void);
void DolarPeso(void);
void PesoEuro(void);
void EuroPeso(void);

//Inicio del c�digo
int main(){
	int option, res;
	setlocale(LC_ALL,"spanish");
	menu:
	cout<<"Men� de Opciones xD \n";
	showmenu();
	cout<<"Opci�n: ";
	cin>>option;
	select(option);
		cout<<"\n �Te gustar�a seguir en este mundo de perdici�n? 1.- S�  0.- NOO";
		cin>>res;
			if(res==1){
				system("cls");
				goto menu;
			}
			else{
				exit(0);
			}
	system("pause");
	return 0;
}
//Funcionamiento de macros
//Menu 7w7
void showmenu(void){
		cout<<"1. Peso-Dolar.\n";
		cout<<"2. Dolar-Peso.\n";
		cout<<"3. Peso-Euro.\n";
		cout<<"4. Euro-Peso.\n";
		cout<<"5. EVACUACI�N.\n";
}
//Seleccionito 7w7
void select(int option){
		switch(option){
	case 1:
		PesoDolar();
		break;
	case 2:
		DolarPeso();
		break;
	case 3:
		PesoEuro();
		break;
	case 4:
		EuroPeso();
		break;
	case 5:
		exit(0);
		break;
	default:
		cout<<"Opci�n inv�lida \n";
		break;
		}
}
//PD 7w7
void PesoDolar(void){
	cout<<"Dame Pesos:";
	cin>>PESO;
	PD=PESO/19.21;
	cout<<"ES IGUAL DOLARES:"<<PD<<"\n";
}
//DP 7u7
void DolarPeso(void){
	cout<<"Dame Dolares:";
	cin>>DOLAR;
	DP=DOLAR*19.21;
	cout<<"ES IGUAL PESOS:"<<DP<<"\n";
}
//PE awa
void PesoEuro(void){
	cout<<"Dame Pesos:";
	cin>>PESO;
	PE=PESO/21.79;
	cout<<"ES IGUAL EUROS:"<<PE<<"\n";
}
//EP unu
void EuroPeso(void){
	cout<<"Dame Euros:";
	cin>>EURO;
	EP=EURO*21.79;
	cout<<"ES IGUAL PESOS:"<<EP<<"\n";
}
