#include <iostream>
using namespace std;
double vt, t, cnt;

int main(){
int ans=1;

do{
	//LECTURA DE DATOS
	cout<<"Impresion de tablas c: \n";
	cout<<"Pon tu serie 7w7:";
	cin>>t;
	//CICLO
		for(cnt=0;cnt<=100;cnt=cnt+1){
		vt=t*cnt;
		cout<<" \n "<<vt<<" \n ";
		};
		//PREGUNTA
	cout<<"Would you like to continuar:0? (1.- Zi , 0.- Nel:";
	cin>>ans;
	system("cls");
}while(ans==1);
system("pause");
return 0;}

