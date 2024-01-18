/*
Titulo: Problema de asignacion de variables
	Auntor:
	Descripcion: Segundo ejercicion del practico de pregramacion 1
	Fecha: 2024-01-18
	*/
#include <iostream>
	using namespace std;

int main(int argc, char *argv[]) {
	int n1,n2;//maximo es de 2147483647, rango minimo -2147483648
	unsigned int nn1,nn2; //limite maximo es de 4294967295, rango minimo 0
	double d1,d2;//limite maximo es de 1.7E+308,rango minimo 1.7E-308
	char c1;//limite maximo es de 127,rango minimo -128
	bool b1;//Si es diferente de 0 es verdadero o 1, si es identico a 0 es falso
	
	//--Tipo int --
	n1=2147483645;//Correcto
	cout<<"Valor de int = "<<n1<<endl;
	//--Tipo unsigned int --		
	nn1=n1+3;//correcto
	cout<<"Valor de unsigned int = "<<nn1<<endl;	
	//--Tipo double --		
	d1=c1+n1;//Correcto
	cout<<"Valor de double = "<<d1<<endl;
	//--Tipo char --		
	c1=n1+2;//Incorrecto
	cout<<"Valor de char = "<<c1<<endl;
	//--Tipo bool --		
	b1=-1000;//correcto
	cout<<"Valor de bool = "<<b1<<endl;
	
	return 0;
}
