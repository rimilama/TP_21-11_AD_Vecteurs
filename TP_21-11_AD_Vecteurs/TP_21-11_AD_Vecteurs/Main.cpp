#include "CVecteur3d.h"
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;

int main(){

	CVecteur3d Vec1(10.0, 50.0, 2.0);
	CVecteur3d Vec2(30.0, 1.0, 15.0);
	
	Vec1.affiche();
	CVecteur3d Vec3 = Vec1.somme(Vec2);
	cout << "La somme du vecteur1 et du vecteur 2 donne : " << endl;
	Vec3.affiche();
	cout << "La produit scalaire du vecteur1 et du vecteur 2 donne : " << Vec1.scalaire(Vec2) << endl;

	return 0;
}