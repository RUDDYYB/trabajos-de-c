//practico numero 2
//realizar un menu que pueda realizar operaciones matematicas
#include <iostream>
#include <cctype>
using namespace std;

int main() {
	int val_uno, val_dos, val_tres;
	double res_val;  // Cambiado a double para manejar valores con decimales
	
	char opcion;
	opcion = tolower(opcion);//definiendo las opciones para el menu y utilizamos el do para iniciar el bucle
	do {
		cout << "Menu principal" << endl;
		cout << "1. Multiplicacion con dos valores" << endl;
		cout << "2. Division con dos valores" << endl;
		cout << "3. Multiplicacion con tres valores" << endl;
		cout << "4. Mayor de 3 numeros" << endl;
		cout << "S. SALIR" << endl;
		cin >> opcion;
		
		switch (opcion) {//utilizamos el switch para comparar segun opcion ingresada por el usuario
		case '1':
			cout << "Ingrese el primer valor a multiplicar: ";
			cin >> val_uno;
			cout << "Ingrese el segundo valor a multiplicar: ";
			cin >> val_dos;
			res_val = static_cast<double>(val_uno * val_dos);
			cout << "EL RESULTADO DE LA MULTIPLICACION ES DE: " << res_val << endl;
			break;//utilizamos el break para romper un bucle
			
		case '2':
			cout << "Ingrese el primer valor del dividendo: ";
			cin >> val_uno;
			cout << "Ingrese el segundo valor del divisor: ";
			cin >> val_dos;
			if (val_dos != 0) { //iniciamos if para que realice la operacion en caso sea diferente de 0
				res_val = static_cast<double>(val_uno) / static_cast<double>(val_dos);
				cout << "EL RESULTADO DE LA DIVISION ES DE: " << res_val << endl;
			} else { //de locontrario que imprima el siguiente mensaje
				cout << "¡¡NO ES POSIBLE DIVIDIR ENTRE 0!!" << endl;
			}
			break;
			
		case '3':
			cout << "Ingrese el primer valor a multiplicar: ";
			cin >> val_uno;
			cout << "Ingrese el segundo valor a multiplicar: ";
			cin >> val_dos;
			cout << "Ingrese el tercer valor a multiplicar: ";
			cin >> val_tres;
			res_val = static_cast<double>(val_uno * val_dos) * val_tres;
			cout << "EL RESULTADO DE LA MULTIPLICACION ES DE: " << res_val << endl;
			break;
			
		case '4':
			cout << "Ingrese el primer valor: ";
			cin >> val_uno;
			cout << "Ingrese el segundo valor: ";
			cin >> val_dos;
			cout << "Ingrese el tercer valor: ";
			cin >> val_tres;
			
			if (val_uno > val_dos && val_uno > val_tres) {
				cout << "EL NUMERO MAYOR ES: " << val_uno << endl;
			} else if (val_dos > val_uno && val_dos > val_tres) {
				cout << "EL NUMERO MAYOR ES: " << val_dos << endl;
			} else {
				cout << "EL NUMERO MAYOR ES: " << val_tres << endl;
			}
			break;
			
		case 's':
			cout << "SALIENDO...DE UN CLICK PARA FINALIZAR" << endl;
			break;
			
		default://si el usuario ingresa una opcion diferente que imprima el siguiente mensaje
			cout << "OPCION INVALIDA" << endl;
		}
	} while (opcion != 's');//damos una oreden la variable "s" para que el bucle termine y salga del programa
	
	return 0;
}
