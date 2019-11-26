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
	CVecteur3d(float, float, float);

	//Destructeur
	~CVecteur3d();

	//Methode
	bool coincide_V(CVecteur3d);
	bool coincide_A(CVecteur3d*);
	bool coincide_R(CVecteur3d&);

	//Getteur & setteur
	float getfX();
	void setfX(float fX);
	float getfY();
	void setfY(float fY);
	float getfZ();
	void setfZ(float fZ);
};

