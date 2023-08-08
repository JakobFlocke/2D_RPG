#include "GameObject.h"

GameObject::GameObject(Position pos, int hp, int ap, int level, int xp, Rectangle collider) {

	this->pos = pos;
	this->stats[HEALTH] = hp;
	this->stats[STRENGTH] = ap;
	this->level = level;
	this->xp = xp;
	this->collider = collider;

}

/*
GameObject::GameObject(Position pos, int hp, int ap, int level, int xp, Rectangle collider, const char* spriteFile) {

	this->pos = pos;
	this->stats[HEALTH] = hp;
	this->stats[STRENGTH] = ap;
	this->level = level;
	this->xp = xp;
	this->collider = collider;
	this->sprite = LoadTexture(spriteFile);

}*/

GameObject::GameObject(Position pos, Stats stats, Status status, Rectangle collider) {

	this->pos = pos;
	this->stats = stats;
	this->status = status;
	this->collider = collider;

}

void GameObject::draw() {

	// draw
	DrawTexture(sprite, 0, 0, RAYWHITE);

}

void GameObject::process() {

	// process

}


void GameObject::loadSprite(const char* file) {

	sprite = LoadTexture(file);

}
