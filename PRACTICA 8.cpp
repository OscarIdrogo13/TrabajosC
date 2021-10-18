#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;
//Variables Ultimate
float a,b;
float s,r,m,d;

//Declaración de macros
void showmenu(void);
void select(int option);
void suma(void);
void resta(void);
void multiplicacion(void);
void division(void);

//Inicio del código
int main(){
	int option, res;
	setlocale(LC_ALL,"spanish");
	menu:
	cout<<"Menú de Opciones ;v \n";
	showmenu();
	cout<<"Opción: ";
	cin>>option;
	select(option);
		cout<<"\n ¿Te gustaría seguir en este mundo de perdición? 1.- Sí  0.- NOO";
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
//Menusito 7w7
void showmenu(void){
		cout<<"1. jaja yo sumo.\n";
		cout<<"2. jaja asies resto.\n";
		cout<<"3. jaja turbo yo multiplico.\n";
		cout<<"4. unu divides\n";
		cout<<"5. EVACUACIÓN.\n";
}
//Seleccionito 7w7
void select(int option){
		switch(option){
	case 1:
		suma();
		break;
	case 2:
		resta();
		break;
	case 3:
		multiplicacion();
		break;
	case 4:
		division();
		break;
	case 5:
		exit(0);
		break;
	default:
		cout<<"Opción inválida \n";
		break;
		}
}
//Sumito 7w7
void suma(void){
	cout<<"Dame A:";
	cin>>a;
	cout<<"Dame B:";
	cin>>b;
	s=a+b;
	cout<<"ES IGUAL A:"<<s<<"\n";
}
//Restito 7u7
void resta(void){
	cout<<"Dame A:";
	cin>>a;
	cout<<"Dame B:";
	cin>>b;
	r=a-b;
	cout<<"ES IGUAL A:"<<r<<"\n";
}
//Multipliquito awa
void multiplicacion(void){
	cout<<"Dame A:";
	cin>>a;
	cout<<"Dame B:";
	cin>>b;
	m=a*b;
	cout<<"ES IGUAL A:"<<m<<"\n";
}
//Dividiito unu
void division(void){
	cout<<"Dame A:";
	cin>>a;
	cout<<"Dame B:";
	cin>>b;
	d=a/b;
	cout<<"ES IGUAL A:"<<d<<"\n";
}
