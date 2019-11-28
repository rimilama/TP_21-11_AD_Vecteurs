#include "CVecteur3d.h"
#include <math.h>
#include <iostream>

using namespace std;

CVecteur3d::CVecteur3d() {
	this->fX = 0;
	this->fY = 0;
	this->fZ = 0;
}

CVecteur3d::CVecteur3d(float fX, float fY, float fZ) {
	this->fX = fX;
	this->fY = fY;
	this->fZ = fZ;
}

CVecteur3d::~CVecteur3d()
{
}

bool CVecteur3d::coincide_V(CVecteur3d Vec2) {
	if (this->fX == Vec2.fX && this->fY == Vec2.fY && this->fZ == Vec2.fZ) {
		return true;
	}
	else {
		return false;
	}
}

bool CVecteur3d::coincide_A(CVecteur3d* Vec2) {
	if (this->fX == Vec2->fX && this->fY == Vec2->fY && this->fZ == Vec2->fZ) {
		return true;
	}
	else {
		return false;
	}
}

bool CVecteur3d::coincide_R(CVecteur3d& Vec2) {
	if (this->fX == Vec2.fX && this->fY == Vec2.fY && this->fZ == Vec2.fZ) {
		return true;
	}
	else {
		return false;
	}
}

float CVecteur3d::normax_V(CVecteur3d Vec2) {
	float norme1 = sqrt(pow(this->fX, 2) + pow(this->fY, 2) + pow(this->fZ, 2));
	float norme2 = sqrt(pow(Vec2.fX, 2) + pow(Vec2.fY, 2) + pow(Vec2.fZ, 2));
	if (norme1 > norme2) {
		return norme1;
	}
	else {
		return norme2;
	}
}

float* CVecteur3d::normax_A(CVecteur3d* Vec2) {
	float norme1 = sqrt(pow(this->fX, 2) + pow(this->fY, 2) + pow(this->fZ, 2));
	float norme2 = sqrt(pow(Vec2->fX, 2) + pow(Vec2->fY, 2) + pow(Vec2->fZ, 2));
	if (norme1 > norme2) {
		return &norme1;
	}else {
		return &norme2;
	}
}

float& CVecteur3d::normax_R(CVecteur3d& Vec2) {
	float norme1 = sqrt(pow(this->fX, 2) + pow(this->fY, 2) + pow(this->fZ, 2));
	float norme2 = sqrt(pow(Vec2.fX, 2) + pow(Vec2.fY, 2) + pow(Vec2.fZ, 2));
	if (norme1 > norme2) {
		return norme1;
	}
	else {
		return norme2;
	}
}

void CVecteur3d::affiche() {
	cout << this->fX << ", " << this->fY << ", " << this->fZ << endl;
}

CVecteur3d CVecteur3d::somme(CVecteur3d Vec2) {
	float fX3 = this->fX + Vec2.fX;
	float fY3 = this->fY + Vec2.fY;
	float fZ3 = this->fZ + Vec2.fZ;
	CVecteur3d Vec3(fX3, fY3, fZ3);
	return Vec3;
}

float CVecteur3d::scalaire(CVecteur3d Vec2) {
	float scal = this->fX * Vec2.fX + this->fY * Vec2.fY + this->fZ * Vec2.fZ;
	return scal;
}

float CVecteur3d::getfX() {
	return fX;
}

void CVecteur3d::setfX(float fX) {
	this->fX = fX;
}

float CVecteur3d::getfY() {
	return fY;
}

void CVecteur3d::setfY(float fY) {
	this->fY = fY;
}

float CVecteur3d::getfZ() {
	return fZ;
}

void CVecteur3d::setfZ(float fZ) {
	this->fZ = fZ;
}