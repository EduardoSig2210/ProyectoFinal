#include<iostream>

using namespace std;

int ingenieria(int);


int main() {
	int carnet, opcion, opcion2;
	cout << "Ingrese su carnet: ";//ingreso del carnet de la universidad
	cin >> carnet;
	cout << "1-Ingenieria y arquitectura\n2-Licenciatura\n3-Profesorado\n4-Tecnico\nIngrese el numero de su facultad: ";
	cin >> opcion;
	switch (opcion){ //clasificacion de la facultad de la universidad
	case 1:
		cout << "1-Arquitectura\n2-Ingenieria de alimentos\n3-Ingenieria civil\n4-Ingenieria electrica\n5-Ingenieria energetica\n6-Ingenieria Industrial\n7-Ingeneria informatica\n8-Ingenieria mecanica\n9-Ingenieria quimica\nIngrese el numero de su carrera: ";
		cin >> opcion2;
		if (ingenieria(opcion2)==1){
			cout << "Bienvenido";
		}
		else {
			cout << "Usted no puede ingresar a estos laboratorios";
		}
		break;
	case 2:
		cout << "Esta facultad no aplica para los laboratorios";
		break;
	case 3:
		cout << "Esta facultad no aplica para los laboratorios";
		break;
	case 4:
		cout << "Esta facultad no aplica para los laboratorios";
		break;
	default:
		break;
	}

	return 0;
}

int ingenieria(int opcion) {
	int resp;
	if (opcion==7){
		resp = 1;
	}
	else{
		resp = 0;
	}
	return resp;
}

