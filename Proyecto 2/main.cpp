#include <iostream>
#include <clocale>

int main() {
	
	using namespace std;	
	int tabla, numero, i, contador, multiplicacion;
	char opcion='S';
	setlocale(LC_CTYPE,"Spanish");
	
do {
	cout<<"¿Qué tabla de multiplicar desea mostrar (Del 1 al 10)?"<<endl;
	cin>>tabla;
	if(tabla <= 10){
	cout<<"¿Hasta qué número desea calcular la operación? (n números)"<<endl;
		cin>>numero;
		for(i=1; i<=numero; i++){		
				cout<<endl<<"Usted ha elegido la tabla del "<<numero;
				multiplicacion=numero*i;
				cout<<endl<<"La multiplicación de "<<numero<<" * "<<i<<" es "<<multiplicacion<<endl;
				
				
		}
	} else {
		cout<<"Tabla de multiplicar "<<tabla<<" no disponible. ";
		
	}
cout<<"¿Quiere volver a calcular alguna tabla de multiplicar dentro del rango establecido? (Si/No) ";
	cin>>opcion;		
	} while(opcion=='S'||opcion=='s');
	cout<<"El proceso a finalizado"; 	
}

