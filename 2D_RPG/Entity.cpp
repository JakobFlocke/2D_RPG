#include "Entity.h"

Entity::Entity(Position pos, Stats stats, Race race, int level, int xp, Rectangle collider)
	  : GameObject(pos, stats, level, xp, collider) {

	this->race = race;

}

