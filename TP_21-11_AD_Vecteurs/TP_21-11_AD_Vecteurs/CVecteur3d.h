#pragma once
class CVecteur3d
{
private:
	float fX;
	float fY;
	float fZ;

public:
	//Constructeur
	CVecteur3d();
	CVecteur3d(float fX, float fY, float fZ);
	//CVecteur3d(float fX = 0.0, float fY = 0.0, float fZ = 0.0) : fX(fX), fY(fY), fZ(fZ) {}

	//Methode
	void init(float, float, float);

	//Getteur & setteur
	float getfX();
	void setfX(float fX);
	float getfY();
	void setfY(float fY);
	float getfZ();
	void setfZ(float fZ);
};

