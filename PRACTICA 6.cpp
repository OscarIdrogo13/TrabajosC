#include <iostream>
#include <locale.h>
using namespace std;
int main(){
setlocale(LC_ALL,"spanish");
	//Declaraci�n de variables
	int year, age;
	//Recopliaci�n del dato
	cout<<"Ingresa tu a�o de nacimiento y te dir� si eres legal o todav�a no :) \n";
	ask_year:
	cout<<"Ingresa tu a�o de nacimiento:D :";
	cin>>year;
	if(cin.fail()){
			cin.clear();
			cin.ignore();
				goto ask_year;}
	//Validaci�n del a�o
	if(year>2019){
		cout<<"�Estas jugando? Hazme un favor y deja el futuro. \n";
		goto ask_year;}
		else
	if(year<=1868){
		cout<<"Alo, antropolog�a, he encontrado un f�sil. �Podr�as dejar de jugar? \n";
		goto ask_year;}
	//Proceso de la edad
	{
	age=2019-year;
	cout<<"Tu edad es:"<<age;
	if(age>=18){
		cout<<"\n �Felicidades! Eres mayor de edad, ve a tramitar tu INE :D \n";}
		else
	if(age<18){
		cout<<"\n Chales:(, aun no tienes mayor�a de edad ni voto, pero al menos tienes voz:D \n";
	}
}
		system("pause");
		return 0;
}
