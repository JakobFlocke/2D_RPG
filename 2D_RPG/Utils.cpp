#include "Utils.h"

Stats::Stats(int health, int strength, int speed, int endurance, int toughness, int vitality, int wisdome, int intelligence) {

	stats[HEALTH] = health;
	stats[STRENGTH] = strength;
	stats[SPEED] = speed;
	stats[ENDURANCE] = endurance;
	stats[TOUGHNESS] = toughness;
	stats[VITALITY] = vitality;
	stats[WISDOME] = wisdome;
	stats[INTELLIGENCE] = intelligence;
}