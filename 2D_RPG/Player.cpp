#include "Player.h"
#include "Utils.h"

Player::Player(Position pos, Stats stats, Race race, int level, int xp, Rectangle collider)
	  : Entity(pos, stats, race, level, xp, collider) {

	// constructor

}

int Player::draw() {

	// code

	return 0;
}

int Player::process() {
	
	// code

	// get user input
	if (IsKeyPressed(KEY_W)) {
		move(UP);
	}
	if (IsKeyPressed(KEY_A)) {
		move(LEFT);
	}
	if (IsKeyPressed(KEY_S)) {
		move(DOWN);
	}
	if (IsKeyPressed(KEY_D)) {
		move(RIGHT);
	}

	return 0;
}