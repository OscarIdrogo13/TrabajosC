#include <iostream>
#include <cstdlib>
using namespace std;

//DECLARACIÓN DE MACROS
void showmenu(void);
void deseac(void);

//DECLARACIÓN DE VARIABLES GLOBALES
int res, option;
float Dm, dm, b, h, ARMB, ARMBD;

//CÓDIGO
int main(){
	cout<<"Programa de areas \n";
	start:
	showmenu();
	cout<<"Seleccione la opcion deseada: \n";
	cin>>option;
//ESTRUCTURA SWITCH
	switch(option){
	//ROMBO
		case 1:
		Iniciar1:	
		Dato1:
			cout<<"\n Dame la Diagonal Mayor: ";
			cin>>Dm;
		//VALIDACION
			if(Dm<=0){
				cout<<"Opcion no valida";
				goto Dato1;
			}
		Dato2:
			cout<<"\n Dame la Diagonal menor: ";
			cin>>dm;
		//VALIDACION
			if(dm<=0){
				cout<<"Opcion no valida";
				goto Dato2;
			}
			ARMB=(Dm*dm)/2;
			cout<<"El area del rombo es: "<<ARMB;
		//REPETICION O INICIO
			deseac();
			if(res==1){
				goto Iniciar1;
			}
			do{
				goto start;
			}while(res==0);
			break;
	//ROMBOIDE
		case 2:
			Iniciar2:
			Dato3:
			cout<<"\n Dame la base:";
			cin>>b;
		//VALIDACION
			if(b<=0){
				cout<<"Opcion no valida";
				goto Dato3;
			}
			Dato4:
			cout<<"\n Dame la altura:";
			cin>>h;
		//VALIDACION
			if(h<=0){
				cout<<"Opcion no valida";
				goto Dato4;
			}
			ARMBD=(b*h);
			cout<<"El area del romboide es: "<<ARMBD;
		//REPETICION O INICIO
			deseac();
			if(res==1){
				goto Iniciar2;
			}
			do{
				goto start;
			}while(res==0);
			break;
	//SALIR
		case 3:
			exit(0);
			break;
	//DEFAULT
		default:
			cout<<"Opcion No Valida";
			goto start;
	}
}
//FUNCIONAMIENTO DE MACROS
void showmenu(void){
	cout<<"\n Opcion 1.- Area del rombo";	
	cout<<"\n Opcion 2.- Area del romboide";
	cout<<"\n Opcion 3.- Salir \n";
}
void deseac(void){
	cout<<"\n Desea otro calculo?"<<"\n 1.- Si"<<"\n 0.- NO";
	cin>>res;
}
