#include "Entity.h"

Entity::Entity(Position pos, Stats stats, Status status, Race race, Rectangle collider)
	  : GameObject(pos, stats, collider) {
	
	this->status = status;
	this->race = race;

}

