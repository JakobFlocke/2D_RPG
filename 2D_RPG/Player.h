#pragma once
#include "Entity.h"
#include "Utils.h"
class Player : public Entity {

	Player(Position pos, Stats stats, Status status, Race race, Professions professions, Rectangle collider);
	int draw();
	int process();

};

