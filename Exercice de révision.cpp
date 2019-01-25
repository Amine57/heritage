// Exercice de révision.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;
template <typename T>

class point
{
protected :
	T x, y;
public :
	point() { x = 0; y = 0; }
	point(T a, T b) { x = a; y = b; }

	T getX() { return x; }
	T getY() { return y; }

	void setX(T a) { x = a; }
	void setY(T a) { y = a; }

	T operator-(point p) { return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2)); }
};

template <typename T>
class triangle : public point
{
	T base, hauteur;
public :
	triangle() { base = 0; hauteur = 0; }
	triangle(point a, point b, point c) { base = a - b; hauteur = a - c; }

};

template <typename T>
class rectangle : public point
{
	T longueur, largeur;
public :
	rectangle() { longueur = 0; largeur = 0; }
	rectangle(point a, point b, point c) { longueur = a - b; largeur = a - c; }
};

int main()
{
	point<double> P1(4, 2), P2(5, 3);
	cout << P1 - P2;
	return 0;
}


