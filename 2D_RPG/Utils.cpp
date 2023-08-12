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

Stats::Stats() {



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

Status::Status() {

	status[HP][0] = 50;
	status[HP][1] = 50;

}

Class::Class() {



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

Profession::Profession() {



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

Position::Position() {

	this->x = 0;
	this->y = 0;
	this->z = 0;

}

Position::Position(double x, double y) {

	this->x = x;
	this->y = y;
	this->z = 0;

}

Position::Position(double x, double y, int z) {

	this->x = x;
	this->y = y;
	this->z = z;

}
/*
Action::Action(Entity& user, ACTION_REQ* requierments, Bonus bonus, Effects effects, Damage damage, int stage) {

	this->user = user;
	this->requierments = requierments;
	this->bonus = bonus;
	this->effects = effects;
	this->damage = damage;
	this->stage = stage;

}
*/