#include <iostream>

using namespace std;

class Pelicula
{
protected:
	string nombre;
	float duracion;
	string autor;
	
public:
	Pelicula(string,float,string);
	void presentarPelicula();
};

Pelicula::Pelicula(string nom, float duracion_, string autor_)
{
	nombre = nom;
	duracion = duracion_;
	autor = autor_;
}


class Categoria: public Pelicula
{
protected:
	string cate;
	int edad;
public:
	void mostrar();
	Categoria(string, float, string, string, int);
};

Categoria::Categoria(string nom, float duracion_, string autor_ ,string cate_, int edad_):Pelicula(nom,duracion_,autor_)
{
	cate = cate_;
	edad = edad_;
}

void Categoria::mostrar()
{
	string resultado;
	if (edad >=18)
	{
		resultado = "Mayor de 18 años";
	}else{
		resultado = "Todo publico";
	}
	
	cout<<"La pelicula "<<nombre<<" tiene una duracion de: "<<duracion<<" minutos"<<endl;
	cout<<"y pertenece a la categoria "<<cate<<" y el autor es: "<<autor<<endl;
	cout<<"y la pelicula es apto para: "<<resultado<<endl;
}

int main()
{
	Categoria pelicula1= Categoria("Cars",120,"Carlos","Animacion",18);
	pelicula1.mostrar();
}
