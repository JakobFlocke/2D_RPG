#pragma once

#include "raylib.h"
#include "Utils.h"


class GameObject {
protected:
	Position pos;
	Stats stats;
	Status status;
	Texture2D sprite;
	Rectangle collider;

public:

	// GameObject(Position pos, int hp, int ap, int level, int xp, Rectangle collider, const char* spriteFile);
	// GameObject(Position pos, int hp, int ap, int level, int xp, Rectangle collider);
	GameObject(Position pos, Stats stats, Rectangle collider);

	int draw();
	int process();

	void loadSprite(const char* file);

};

