#include "GameObject.h"


GameObject::GameObject(Position pos, Stats stats, Rectangle collider) {

	this->pos = pos;
	this->stats = stats;
	this->collider = collider;

}

int GameObject::draw() {

	// draw
	DrawTexture(sprite, 0, 0, RAYWHITE);

}

int GameObject::process() {

	// process

}


void GameObject::loadSprite(const char* file) {

	sprite = LoadTexture(file);

}
