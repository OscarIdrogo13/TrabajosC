#include<iostream>
#include<cstdlib>
using namespace std;

//Declarar variables
	int opt, resp;
	float cm, ft, in;

//Declarar funciones
	void vermenu(void);
	void leeropt(void);
	void rea_opt(int opt);
	
//Macro principal
int main(){
	
	menu:
		vermenu();
		leeropt();
		rea_opt(opt);
				system("cls");
				goto menu;
				
	system("pause");
	return 0;
}

//Macro 1
void vermenu(void){
	cout<<"Menu de conversion de unidades \n";
	cout<<"1.- Centimetros a pulgadas\n";
	cout<<"2.- Pulgadas a pies\n";
	cout<<"3.- Salir";
}

//Macro 2
void leeropt(void){
	opcion:
	cout<<"\n Opcion: ";
	cin>>opt;
	if(opt<0){
		system("cls");
		cout<<"Opcion no valida";
		goto opcion;
	}
	else if(opt>3){
	system("cls");
		cout<<"opcion no valida";
		goto opcion;
	}
}

//Macro 3
void rea_opt(int opt){
	switch(opt){
		case 1:
			do{
			system("cls");
			principal:
				cout<<"Centimetros a pulgadas\n";
				cout<<"Ingrese los centimetros:";
					cin>>cm;
						if(cm<=0){
							cout<<"Los valores no pueden ser menores o iguales a cero";
							goto principal;
						}
				in=cm/2.54;
			cout<<"Pulgadas="<<in<<"\n";
		cout<<"Desea volver al menu principal? 1.- Si 0.- No";
		cin>>resp;}while(resp==0);
		break;

		case 2:
			do{
			system("cls");
			principal2:
				cout<<"Pulgadas a pies\n";
				cout<<"Ingrese las pulgadas:";
					cin>>in;
						if(in<=0){
							cout<<"Los valores no pueden ser menores o iguales a cero";
							goto principal2;
						}
				ft=in/12;
			cout<<"Pies="<<ft<<"\n";
		cout<<"Desea volver al menu principal? 1.- Si 0.- No";
		cin>>resp;}while(resp==0);
		break;	
		
		case 3:
			exit(0);
			break;
			
		default:
			system("cls");
			cout<<"\n Opcion No Valida";
			break;
			}
	}
