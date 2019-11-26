#include "CVecteur3d.h"
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;

int main(){

	CVecteur3d Vec1(10.0, 50.0, 2.0);
	CVecteur3d Vec2(30.0, 1.0, 15.0);
	
	cout << Vec1.coincide_V(Vec2) << endl;
	cout << Vec1.coincide_A(&Vec2) << endl;
	cout << Vec1.coincide_R(Vec2) << endl;



	return 0;
}