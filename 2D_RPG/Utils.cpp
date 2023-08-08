#include "Utils.h"

// Stats
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

// Status
// everything full
Status::Status(int hp, int stamina, int mana) {
	status[HP][0] = hp;
	status[STAMINA][0] = stamina;
	status[MANA][0] = mana;
	status[HP][1] = hp;
	status[STAMINA][1] = stamina;
	status[MANA][1] = mana;
}

Class::Class(CLASS baseClass, int level, int stage) {
	this->baseClase = baseClass;
	this->currentClass = baseClass;
	this->level = level;
	this->stage = stage;
}

Class::Class(CLASS baseClass, CLASS currentClass, int level, int stage) {
	this->baseClase = baseClass;
	this->currentClass = currentClass;
	this->level = level;
	this->stage = stage;
}