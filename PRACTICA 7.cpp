#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"spanish");
	//Declaraci�n de variables
	int num;
	//Recopilaci�n de datos
	cout<<"�Par o impar? esa es la cuesti�n. \n";
	ask_num:
	cout<<" \n Inserta un n�mero:D :";
	cin>>num;
	//Proceso del n�mero
	if(num%2==0){
		cout<<"Es un n�mero par \n";
}
else
	{
		cout<<"Es un n�mero impar \n";
}
		system("pause");
		return 0;
	}
