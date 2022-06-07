#include <iostream>
using namespace std;

class Computadora
{
private:
	string procesador;
	string Marca;
	string Modelo;
	string memoria;
	string SOperativo;
	float precio;
	float DiscoDuro;
public:
	Computadora(string,string,string,string,string,float);
	Computadora(string,string,string,float);
	void Compra();
	void Trabajo();
	void Juegos();
	void Multimedia();
	void Edicion();
};
Computadora::Computadora(string _procesador,string _Marca, string _Modelo, string _Memoria ,string _SO ,float _precio)
{
	procesador = _procesador;
	Marca = _Marca;
	Modelo = _Modelo;
	memoria = _Memoria;
	SOperativo = _SO;
	precio = _precio;
}
Computadora::Computadora(string procesador_, string memoria_, string so_, float DDuro)
{
	procesador = procesador_;
	memoria = memoria_;
	SOperativo = so_;
	DiscoDuro = DDuro;
}

void Computadora::Compra()
{
	cout<<"La computadora a comprar tiene las siguientes caracteristicas: "<<endl;
	cout<<"Procesador: "<<procesador<<endl;
	cout<<"Memoria: "<<memoria<<endl;
	cout<<"Modelo: "<<Modelo<<endl;
	cout<<"Marca: "<<Marca<<endl;
	cout<<"Sistema Operativo: "<<SOperativo<<endl;
	cout<<"Actualmente la computadora tiene un precio de: "<<precio<<endl;
	cout<<endl;
}

void Computadora::Trabajo()
{
	cout<<"La computadora del área de programación del sector 7 debe complir lo siguiente"<<endl;
	cout<<"Horario: 7:00 - 16:00"<<endl;
	cout<<"La computadora es: "<<endl;
	cout<<"Marca: "<<Marca<<endl;
	cout<<"Modelo: "<<Modelo<<endl;
	cout<<endl;
}

void Computadora::Juegos()
{
	cout<<"La computadora "<<Marca<<" tiene la capacidad para ejecutar"<<endl;
	cout<<"ya que actualmente tiene las siguientes caracteristicas: "<<endl;
	cout<<"procesador: "<<procesador<<endl;
	cout<<"Ram: "<<memoria<<endl;
	cout<<endl;
}

void Computadora::Multimedia()
{
	if (DiscoDuro < 1024)
	{
		cout<<"La computadora con las siguientes caracteristicas: "<<endl;
		cout<<"Procesador: "<<procesador<<endl;
		cout<<"Ram: "<<memoria<<endl;
		cout<<"Sistema Operativo: "<<SOperativo<<endl;
		cout<<"No es recomendable utilizarlo para la grabación de multimedia ya que cuenta con "<<DiscoDuro<<"GB de espacio"<<endl;
		cout<<endl;
	}else{
		cout<<"La computadora con las siguientes caracteristicas: "<<endl;
		cout<<"Procesador: "<<procesador<<endl;
		cout<<"Ram: "<<memoria<<endl;
		cout<<"Sistema Operativo: "<<SOperativo<<endl;
		cout<<"Si es recomendable utilizarlo para la grabación de multimedia ya que cuenta con "<<DiscoDuro<<"GB de espacio"<<endl;
		cout<<endl;
	}
}
int main()
{
	string juego;
	Computadora compu1 = Computadora("Intel i9","Dell","D570","12 GB","Windows 11",3500);
	Computadora compu2 = Computadora("AMD 9","Lenovo","E500","16 GB","Windows 11",6500);
	Computadora compu3 = Computadora("AMD 10","12","Windows 11",1500);
	Computadora compu4 = Computadora("Intel i5","8","Windows 10",500);
	
	//Computadoras usando el método de compra
	cout<<"---------------------------------"<<endl;
	compu1.Compra();
	compu2.Compra();
	
	//Computadoras usando el método de trabajo
	cout<<"---------------------------------"<<endl;
	compu1.Trabajo();
	//compu2.Trabajo();
	
	//Computadora usando el método de juegos
	cout<<"---------------------------------"<<endl;
	cout<<"Ingrese el juego: "<<endl;
	cin>>juego;
	
	if(juego != "Fifa")
	{
		cout<<"juego a ejecutar: "<<juego<<endl;
		compu2.Juegos();
	}else{
		cout<<"El juego Fifa no se puede ejecutar en la computadora";
	}

	cout<<"---------------------------------"<<endl;
	//Computadoras usando el método de Multimedia
	compu3.Multimedia();
	compu4.Multimedia();
	
	
}
