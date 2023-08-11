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

Class::Class(CLASS baseClass, Level level) {
	this->baseClase = baseClass;
	this->currentClass = baseClass;
	this->level = level;
}

Class::Class(CLASS baseClass, CLASS currentClass, Level level) {
	this->baseClase = baseClass;
	this->currentClass = currentClass;
	this->level = level;
}

Race::Race(RACE race, Level level) {
	this->race = race;
	this->level = level;
}

Profession::Profession(PROFESSION profession, int level, int stage, int xp) {
	this->profession = profession;
	this->level = level;
	this->stage = stage;
	this->xp = xp;
	this->main = false;
}

Profession::Profession(PROFESSION profession, int level, int stage, int xp, bool main) {
	this->profession = profession;
	this->level = level;
	this->stage = stage;
	this->xp = xp;
	this->main = main;
}

Effect::Effect(EFFECT effect, const char* name, int stage, Damage damageP100, Bonus bonus) {
	this->effect = effect;
	this->name = name;
	this->stage = stage;
	this->damageP100 = damageP100;
	this->bonus = bonus;
}

Effect::Effect(EFFECT effect, int stage, Damage damageP100, Bonus bonus) {
	this->effect = effect;
	this->name = "";
	this->stage = stage;
	this->damageP100 = damageP100;
	this->bonus = bonus;
}