#include <iostream>
#include <cstdlib>

using namespace std;

int informatica(string);
int count_digits3(string);

int main() {
	string carnet, carreraUniversitaria, Laboratorio;
	int administrador, personas, resp=0;
	do {
		cout << "Bienvenido al sistema de reserva de Laboratorios\nIngrese su carnet: ";
		cin >> carnet;
		if (carnet == "EduardoS") {
			cout << "Usted ha accedido a las funciones de administrador" << endl;
			cout << "1- Verificar disponibilidad de laboratorios\n2- Reservar laboratorio\n3- Cancelar una reserva de laboratorio\n4- Generar registro de reservas\n5- Generar registro del laboratorio con numero mayor de reservas\n6- Salir\nQue desea realizar: ";
			cin >> administrador;
			switch (administrador) {
			case 1:

				break;
			case 2:

				break;
			case 3:

				break;
			case 4:

				break;
			case 5:

				break;
			case 6:
				system("cls");
				resp = 1;
				break;
			default:
				break;
			}
		}
		else {
			if (count_digits3(carnet) == 8) {
				cout << "Indique su carrera universitaria: ";
				cin >> carreraUniversitaria;
				if (informatica(carreraUniversitaria)==1) {
					cout << "Bienvenido\nIndique que laboratorio quiere usar : ";
					cin >> Laboratorio;
					cout << "Indique la fecha en la que se va a utilizar: ";

					cout << "Indique la cantidad de personas que van a ingresar al laboratorio: ";
					cin >> personas;
				}
				else {
					cout << "Usten no puede ingresar a estos laboratorios";
					resp = 1;
					system("cls");
				}
			}
			else {
				cout << "La cantidad de digitos no coicide";
				system("cls");
				resp = 1;
			}
		}

	} while (resp==1);
	return 0;
}

//conteo de cifras
int count_digits3(string number) {
	int count = 0;
	for (char c : number) {
		if (isdigit(c)) {
			count++;
		}
	}
	return count;
}

//ingenieria informatica
int informatica(string Carrera) {
	int respuesta;
	if (Carrera == "ingenieria informatica" || Carrera == "Ingenieria Informatica" || Carrera == "INGENIERIA INFORMATICA" || Carrera == "Ingenieria informatica"){
		respuesta = 1;
	}
	else {
		respuesta = 0;
	}

	return respuesta;
}

