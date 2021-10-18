#include <iostream>
using namespace std;
int main(){
	//Declaración de las variables
	float a,b;
	float s,r,m,d;
	//Leer valores de entrada
	cout<<"Operaciones basicas. \n";
	ask_a:
	cout<<"Dame el valor de a: ";
	cin>>a;
	if(cin.fail()){
			cin.clear();
			cin.ignore();
				goto ask_a;}
	ask_b:
	cout<<"Dame el valor de b: ";
	cin>>b;
	if(cin.fail()){
			cin.clear();
			cin.ignore();
				goto ask_b;}
	if(b==0) {
		system("cls");
		cout<<"Error, dato no valido. \n";
		goto ask_b;
	}
	else{
	//Proceso
		s=a+b;
		r=a-b;
		m=a*b;
		d=a/b;
	//Imprimir datos
		cout<<"\n Suma:" <<s;
		cout<<"\n Resta:" <<r;
		cout<<"\n Multiplicacion:" <<m;
		cout<<"\n Division:" <<d;
	}
	cout<<"\n";
	system("pause");
	return 0;
}
