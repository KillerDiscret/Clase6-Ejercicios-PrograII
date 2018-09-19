#include <iostream>
#include<conio.h>
using namespace std;
using namespace System;
class Figura
{
protected:
	double base;
public:
	Figura(double BASE);
	~Figura();
};
Figura::Figura(double BASE)
{
	base=BASE;
}
Figura::~Figura()
{

}


class Rectangulo: public Figura
{
private:
	double altura;
public:
	Rectangulo(double ALTURA, double base);
	double areaRectangulo();
	double perimetroRectangulo();
	~Rectangulo();
};
Rectangulo::Rectangulo(double ALTURA, double base):Figura(base)
{
	altura = ALTURA;
}
double Rectangulo::areaRectangulo()
{
	return (base*altura);

}
double Rectangulo::perimetroRectangulo()
{
	return(2 * (base + altura));
}
Rectangulo::~Rectangulo()
{

}
class Triangulo: public Figura
{
private:
	double altura;
public:
	Triangulo(double ALTURA, double base);
	double areaTriangulo();
	double perimetroTriangulo();
	~Triangulo();
};
Triangulo::Triangulo(double ALTURA, double base):Figura(base)
{
	altura = ALTURA;
}
double Triangulo::areaTriangulo()
{
	return ((base*altura) / (2 * 1.0));
}
double Triangulo::perimetroTriangulo()
{
	return (3*base);
}
Triangulo::~Triangulo()
{

}

class Romboide: public Figura
{
private:
	double altura;
	double lado;
public:
	Romboide(double ALTURA,double LADO, double base);
	double areaRomboide();
	double perimetroRomboide();
	~Romboide();

};
Romboide::Romboide(double ALTURA,double LADO, double base): Figura(base)
{
	altura = ALTURA;
	lado = LADO;
}
double Romboide::areaRomboide()
{
	return (base*altura);
}
double Romboide::perimetroRomboide()
{
	return (2*(base+lado));
}

Romboide::~Romboide()
{
	
}

int main()
{
	Figura* unaFigura;
	Rectangulo* unRectangulo;
	Triangulo* unTriangulo;
	Romboide* unRomboide;
	double base, lado, altura;
	cout << "DATO HEREDADO" << endl;
	cout << "Ingrese la base:" << endl;
	cin >> base;
	unaFigura = new Figura(base);
	cout << "CALCULOS DEL RECTANGULO" << endl;
	cout << "Ingrese la altura:" << endl;
	cin >> altura;
	unRectangulo = new Rectangulo(altura, base);
	cout << "Base: " << base << endl;
	cout << "Altura: " << altura << endl;
	cout << "Area: " << unRectangulo->areaRectangulo()<<endl;
	cout << "Perimetro: " << unRectangulo->perimetroRectangulo()<<endl;
	
	
	cout << "DATOS DEL TRIANGULO " << endl;
	cout << "Ingrese la altura: " << endl;
	cin >> altura;
	unTriangulo = new Triangulo(altura, base);
	cout << "Base: " << base << endl;
	cout << "Altura: " << altura << endl;
	cout << "Area: " << unTriangulo->areaTriangulo() << endl;
	cout << "Perimetro: " << unTriangulo->perimetroTriangulo() << endl;

	cout << "DATOS DEL ROMBOIDE" << endl;
	cout << "Ingrese la altura: " << endl;
	cin >> altura;
	cout << "Ingrese el lado: " << endl;
	cin >> lado;
	unRomboide = new Romboide(altura, lado, base);
	cout << "Base: " << base << endl;
	cout << "Altura: " << altura << endl;
	cout << "Lado: " << lado << endl;
	cout << "Area: " << unRomboide->areaRomboide()<< endl;
	cout << "Perimetro: " << unRomboide->perimetroRomboide() << endl;
	delete unaFigura;
	delete unTriangulo;
	delete unRectangulo;
	delete unRomboide;
	_getch();
}