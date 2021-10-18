#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"spanish");
	//Declaración de variables
	int num;
	//Recopilación de datos
	cout<<"¿Par o impar? esa es la cuestión. \n";
	ask_num:
	cout<<" \n Inserta un número:D :";
	cin>>num;
	//Proceso del número
	if(num%2==0){
		cout<<"Es un número par \n";
}
else
	{
		cout<<"Es un número impar \n";
}
		system("pause");
		return 0;
	}
