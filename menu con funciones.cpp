#include <iostream>
using namespace std;

int opcion;//variable global se usa en todos lados

void menu()//funcion menu
{
	cout<<"menu principal"<<endl;
	cout<<"(1)-string suma de cadenas"<<endl;
	cout<<"(2)-string nombre completo"<<endl;
	cout<<"(3)-string ofuscar"<<endl;
	cout<<"(s/S)salir"<<endl;
	cin>>opcion;
}


int main(int argc, char *argv[]) {
	do
	{
		menu();//aqui llamamos al menu para mostra en pantalla
			switch(opcion)
			{
				case 1:
					cout<<"Suma de string"<<endl;
					break;
				case 2:
					cout<<"Nombre completo"<<endl;
					break;
				case 3:
					cout<<"string ofusca"<<endl;
					break;
				case 's':
					cout<<"Saliendo...."<<endl;
					break;
			}
	}while(opcion != 's');
	return 0;
}

