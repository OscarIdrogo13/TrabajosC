#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "spanish");
	int a, b, c;
cout<<"El numero ese \n";
cout<<"Dame el valor de a:";
cin>>a;
cout<<"\n Dame el valor de b:";
cin>>b;
cout<<"\n Dame el valor de c:";
cin>>c;
if(a>b && a>c){
	cout<<"\n El número más grande es: A \n";
}
else if(b>a && b>c){
	cout<<"\n El número más grande es: B \n";
}
else if(c>a && c>b){
	cout<<"\n El número más grande es: C \n";
}
else if(a=b && a>c){
	cout<<"\n Los números más grandes son: A y B";
}
else if(a=c && a>b){
	cout<<"\n Los números más grandes son: A y C";
}
else if(c=b && b>a){
	cout<<"\n Los números más grandes son: B y C";
}
system("pause");
return 0;
}
