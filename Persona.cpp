#include <iostream>

using namespace std;
//Crear la clase principal

class Persona
{
protected:
	string Nombre;
	int Edad;
	
public:
	void LeerEdad();
	void CambiarNombre();
	void CambiarEdad();
	Persona(string, int);
};

//Clase de herencia Empleado derivado de la clase Persona

class Empleado: public Persona
{
protected:
	float SalarioAnual;
	
public:
	Empleado(string, int, float);
	void cambiarSalario();
};

Persona::Persona(string nombre_, int edad_)
{
	Nombre = nombre_;
	Edad = edad_;
}


Empleado::Empleado(float salario_)
{
	SalarioAnual = salario_;
}

void Persona::CambiarNombre()
{
	cout<<"Bienvenido al sistema de cambio de nombre"<<endl;
	cout<<"Escriba su nuevo nombre"<<endl;
}
int main()
{
	Persona persona1 = Persona("Miguel Contreras",25);
	
	persona1.CambiarNombre();
	
	//Empleado emp1 = Empleado("Miguel Contreras",25,3500.75);
	
	//emp1.cambiarSalario();
}
