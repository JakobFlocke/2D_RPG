#pragma once
#include "Entity.h"
#include "Utils.h"
class Player : public Entity {

	Player(Position pos, Stats stats, Race race, int level, int xp, Rectangle collider);

	int draw();
	int process();

};

