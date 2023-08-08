#pragma once
#include "GameObject.h"
#include "Utils.h"

class Entity : public GameObject {
protected:
	Race race;
	DIR dir;

	void move(DIR direction) {

		double speed = stats[SPEED] * GetFPS() * 0.001;

		switch (direction) {
		case UP: pos.y -= speed; break;
		case DOWN: pos.y += speed; break;
		case LEFT: pos.x -= speed; break;
		case RIGHT: pos.x += speed; break;
		case UP_LEFT:
			pos.y -= speed;
			pos.x -= speed;
			break;
		case UP_RIGHT: break;
			pos.y -= speed;
			pos.x += speed;
		case DOWN_LEFT:
			pos.y += speed;
			pos.x -= speed;
			break;
		case DOWN_RIGHT:
			pos.y += speed;
			pos.x += speed;
			break;
		default: printf("Error!");
		}

	}

public:
	//Entity(Position pos, int hp, int ap, int level, int xp, Rectangle collider, const char* spriteFile, int speed);
	Entity(Position pos, Stats stats, Status status, Race race, Rectangle collider);


};

