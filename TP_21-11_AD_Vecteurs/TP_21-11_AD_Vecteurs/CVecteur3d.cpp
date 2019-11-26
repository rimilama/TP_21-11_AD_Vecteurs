#include "CVecteur3d.h"

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