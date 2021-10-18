#include <iostream>
using namespace std;
int main(){
	//Declaración de variables
	float distance, time, speed;
	//Lectura de valores de entrada
	cout<<"Formula de la velocidad \n";
	ask_distance: cout<<"Inserte el valor de la distancia en metros:";
	cin>>distance;
	ask_time: cout<<"Inserte el valor del tiempo en segundos:";
	cin>>time;
		if(time==0){
		system("cls");
		cout<<"Error dato no valido. \n";
		goto ask_time;}
	//Proceso de la formula
	speed=distance/time;
	//Impresión de resultados
	cout<<"El valor de la velocidad es:";
	cout<<speed;
	cout<<"\n";
	system("pause");
	return 0;}

