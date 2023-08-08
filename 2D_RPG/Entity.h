#pragma once
#include "GameObject.h"
#include "Utils.h"

class Entity : public GameObject {
protected:
	Race race;
	DIR dir;

	void move(DIR direction) {

		switch (direction) {
		case UP: pos.y -= stats[SPEED]; break;
		case DOWN: pos.y += stats[SPEED]; break;
		case LEFT: pos.x -= stats[SPEED]; break;
		case RIGHT: pos.x += stats[SPEED]; break;
		case UP_LEFT:
			pos.y -= stats[SPEED];
			pos.x -= stats[SPEED];
			break;
		case UP_RIGHT: break;
			pos.y -= stats[SPEED];
			pos.x += stats[SPEED];
		case DOWN_LEFT:
			pos.y += stats[SPEED];
			pos.x -= stats[SPEED];
			break;
		case DOWN_RIGHT:
			pos.y += stats[SPEED];
			pos.x += stats[SPEED];
			break;
		default: printf("Error!");
		}

	}

public:
	//Entity(Position pos, int hp, int ap, int level, int xp, Rectangle collider, const char* spriteFile, int speed);
	Entity(Position pos, Stats stats, Race race, int level, int xp, Rectangle collider);


};

