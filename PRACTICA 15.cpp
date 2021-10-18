#include <iostream>
#include <locale.h>
using namespace std;
int s, vs, cnt, acum;
int main(){
	setlocale(LC_ALL,"spanish");
	cout<<"Establece la serie: \n";
	cin>>s;
	while(cnt<=100){
			vs=s*cnt;	
			cout<<vs<<", ";
			cnt=cnt+1;
			acum=acum+vs;
	}
	cout<<"El total de los primeros 100 múltiplos de la serie es: "<<acum<<"\n";
system("pause");
return 0;
}
