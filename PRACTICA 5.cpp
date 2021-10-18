#include <iostream>
using namespace std;
int main(){
	float num;
	cout<<"Determinacion del signo. \n";
	ask_num:
	cout<<"Dame el valor del numero: \n";
	cin>>num;
	
		if(cin.fail()){
			cin.clear();
			cin.ignore();
				goto ask_num;
	}	
		if(num==0){
			system("cls");
			cout<<"Numero Neutro. \n";
			goto ask_num;
			
		}
	else if(num>0){
		cout<<"Numero Positivo. \n";
	}
	else if(num<0){
		cout<<"Numero Negativo. \n";
	}
	system("pause");
	return 0;
}
