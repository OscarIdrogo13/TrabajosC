#include <iostream>
#include <locale.h>
using namespace std;
float ponderated_e, acum_e;
int e, cntp;
int main(){
	setlocale(LC_ALL,"spanish");
	cntp=1;
	e=0;
	acum_e=0;
	for(cntp=1; cntp<=10; cntp++){	
			cout<<"Dame la edad de la persona: ";
			cin>>e;
			acum_e=acum_e+e;
	}
	ponderated_e=acum_e/10;
	cout<<"El promedio de edad es: "<<ponderated_e<<"\n";
system("pause");
return 0;
}
