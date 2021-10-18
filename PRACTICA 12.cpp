#include <iostream>
using namespace std;
int vt, t, cnt;

int main(){
int ans=1;

do{
	
	cnt=0;
	
	cout<<"Impresion de tablas c: \n";
	cout<<"Pon tu serie 7w7:";
	cin>>t;
		while(cnt<=15){
		vt=t*cnt;
		cout<<" \n "<<t<<" X "<<cnt<< " = "<<vt<<" \n ";
		cnt=cnt+1; //cnt++;//cnt+=1;
		};
	cout<<"Would you like to continuar:0? (1.- Zi , 0.- Nel:";
	cin>>ans;
	system("cls");
}while(ans==1);
system("pause");
return 0;}

