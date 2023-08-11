#include "Player.h"
#include "Utils.h"

Player::Player(Position pos, Stats stats, Status status, Race race, Rectangle collider)
	  : Entity(pos, stats, status, race, collider) {

	// constructor

}

int Player::draw() {


	// code
	DrawRectangle((int) pos.x, (int) pos.y, collider.width, collider.height, BLACK);

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