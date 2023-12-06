#pragma once
#include "Enemy.h"
#define k 1
#include "..\Castle\Tower.h"

class Grenade:public Enemy
{
public:
	Grenade(string R, Tower * t, int id, int FP, int T, double health, int P);
	~Grenade();
	virtual void Damage_to_Enemy(int fire_power_tower);
	virtual double PSE();
	virtual int Get_K();
	virtual void DecrementDist();
	virtual bool isShielded();
	virtual void Fight(int TimeStep);
};

