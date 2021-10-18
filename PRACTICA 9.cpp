#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;
//Variables GLOBALES
float F, C, K;
float CeFa, FaCe, CeKe, KeCe;
//Declaración de MACROS
void showmenu(void);
void select(int option);
void caf(void);
void fac(void);
void cak(void);
void kac(void);

//Inicio de la código fuente
int main(){
	int option, res;
	setlocale(LC_ALL,"spanish");
	menu:
	cout<<"Menú de Opciones xd \n";
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
	//Sección del Funcionamiento de las Macros
//Menu 7w7
void showmenu(void){
		cout<<"1. C a F.\n";
		cout<<"2. F a C.\n";
		cout<<"3. C a K.\n";
		cout<<"4. EVACUACIÓN.\n";
}
//Seleccion 7w7
{
void select(int option){
		switch(option){
	case 1:
		caf();
		break;
	case 2:
		fac();
		break;
	case 3:
		cak();
		break;
	case 4:
		exit(0);
		break;
	default:
		cout<<"Opción inválida \n";
		break;
}
//Cels a Fahr 7w7
void CaF(void){
	cout<<"Dame C:";
	cin>>C;
	CeFa=((5*C)/9)+32;
	cout<<"ES IGUAL F:"<<CeFa<<"\n";
}
//Fahr a Cels 7u7
void FaC(void){
	cout<<"Dame F:";
	cin>>F;
	FaCe=(9*(F-32))/5;
	cout<<"ES IGUAL C:"<<FaCe<<"\n";
}
//Cels a Kelv awa
void CaK(void){
	cout<<"Dame C:";
	cin>>C;
	CeKe=C+273.15;
	cout<<"ES IGUAL K:"<<CeKe<<"\n";
}
}
}
