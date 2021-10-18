#include<iostream>
using namespace std;

//Variables
int opt,resp;
float a,l1,l2;

//Macros
void vermenu(void);
void leeropcion(void);
void operaciones(void);

//Funciones
int main(){
do{
	menu:
		vermenu();
		leeropcion();
		operaciones();
		
		cout<<"\nDesea realizar otra operacion?  1.-Si, 0.-No  ";
		cin>>resp;
		system("cls");
		goto menu;
	}while(resp==1);
	
	system("pause");
	return 0;
}

void vermenu(void){
	cout<<"Programa para calcular el area del rombo o romboide.\n";
	cout<<"Seleccione una opcion:\n";
	cout<<"1.- Rombo\n";
	cout<<"2.- Romboide\n";
	cout<<"3.- Salir\n";	
}

void leeropcion(void){
	cout<<"Opcion: ";
		cin>>opt;
}

void operaciones(void){
	switch(opt){
		case 1: 
			system("cls");
			cout<<"Area de rombo\n";
		ingrese1:	
			cout<<"Ingrese la diagonal mayor= ";
				cin>>l1;
			if(l1<=0){
			cout<<"Opcion no valida\n";
			goto ingrese1;}
		ingrese2:
			cout<<"Ingrese la diagonal menor= ";
				cin>>l2;
				if(l2<=0){
			cout<<"Opcion no valida\n";
			goto ingrese2;}
			a=(l1*l2)/2;
			cout<<"\nArea= "<<a;
			break;
			
		case 2:
			system("cls");
			cout<<"Area de romboide\n";
		ingrese3:	
			cout<<"Ingrese la base= ";
				cin>>l1;
			if(l1<=0){
			cout<<"Opcion no valida\n";
			goto ingrese3;}
		ingrese4:
			cout<<"Ingrese la altura= ";
				cin>>l2;
				if(l2<=0){
			cout<<"Opcion no valida\n";
			goto ingrese4;}
			a=l1*l2;
			cout<<"\nArea= "<<a;
			break;
			
		case 3:
			exit(0);
			break;
			
		default:
			cout<<"\nOpcion no valida, ingrese otra opcion";
			break;
		}
	}

