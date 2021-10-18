#include <iostream>
#include <locale.h>
using namespace std;
int s, vs, lim;
int main(){
	setlocale(LC_ALL,"spanish");
	cout<<"Dame el número de la serie: \n";
	cin>>s;
	vs=s;
	cout<<"Establece el límite: \n";
	cin>>lim;
	do{
	cout<<vs<<"\n";
	vs=vs+s;
	}while(vs<=lim);
	system("pause");
	return 0;
}
