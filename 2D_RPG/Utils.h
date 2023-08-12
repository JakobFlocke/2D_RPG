#pragma once

#include <unordered_map>
#include "Entity.h"

//* generall definitions
#define TILE				16
#define	SCALE				4
#define TILE_SIZE			TILE * TILE_SIZE // 64

#define FRAME_WIDTH_TILES	22
#define FRAME_HEIGHT_TILES	14
#define FRAME_WIDTH			FRAME_WIDTH_TILES * TILE
#define FRAME_HEIGHT		FRAME_HEIGHT_TILES * TILE


//* general ENUMS
enum DIR {
	UP, DOWN, LEFT, RIGHT,
	UP_LEFT, UP_RIGHT,
	DOWN_LEFT, DOWN_RIGHT
};

enum STATUS {
	HP, STAMINA, MANA, 
};


enum STAT {
	HEALTH, STRENGTH, SPEED, ENDURANCE, TOUGHNESS, VITALITY, WISDOME, INTELLIGENCE
};

enum CLASS {
	// Archer
	ARCHER, NOVICE_ARCHER, APPRENTICE_ARCHER, VETERAN_ARCHER, GRAND_ARCHER, ELDER_ARCHER,
			ARCHER_OF_DECAY,
			NEOPHYTE_MANA_ARCHER,
	// MAGE
	MAGE, NOVICE_MAGE,
			RANGED_MAGE,
			COMBAT_MAGE,
	// LIGHT WARRIOR
	LIGHT_WARRIOR,
	// HEAVY WARRIOR
	HEAVY_WARRIOR,
	// CONJURER
	CONJURER,
	// TRAPPER
};

enum PROFESSION {
	BUILDER, WOOODWORKER, ENGENEER, 
	SMITH, BLACKSMITH,
	ALCHEMIST,

};

enum RACE {
	HUMAN,
};

enum class GAME_STATE {
	LOADING, MENU, PLAYING, PAUSE, OPTIONS
};

enum SKILL {
	BASIC_TWO_HANDED_WEAPONS, BASIC_RANGED_WEAPONS, POISONOUS_TOUCH
};

enum ITEM {
	SWORD, BOW, 
};

enum EFFECT {
	POISON, HEALING
};

enum class ACTION_REQ {
	NONE, MELE, RANGED, ARMOR,
	HAND, BOW, DAGGER, SHORT_SWORD, SWORD, LONG_SWORD, SPEAR, AXE, HAMMER, STAFF

};

//* General structs and classes
struct Position {

	double x;
	double y;
	int z;
	
	Position();
	Position(double x, double y);
	Position(double x, double y, int z);

};

struct Level {

	int stage;
	int level;
	int xp;

};


struct Bonus {
	std::unordered_map<STAT, int[]> status; // [points, procent]

};

struct Damage {
	int mele;
	int magic;
	int mind;
};

struct Effect {
	EFFECT effect;
	const char* name;
	int stage;
	Damage damageP100;
	Bonus bonus;
public:
	Effect(EFFECT effect, const char* name, int stage, Damage damageP100, Bonus bonus);

	Effect(EFFECT effect, int stage, Damage damageP100, Bonus bonus);
};

struct Effects {
private:
	std::vector<Effect> eId;
	std::unordered_map<Effect, int[]> effects; // level stage xp

public:
	int* operator[](Effect a) {
		return effects[a];
	}

	int* operator[](int a) {
		return effects[eId[a]];
	}
};
/*
struct Action {

	Entity& user;
	ACTION_REQ* requierments;
	Bonus bonus;
	Effects effects;
	Damage damage;
	int stage;

	Action(Entity& user, ACTION_REQ* requierments, Bonus bonus, Effects effects, Damage damage, int stage);

	int use() {



		return 0;
	}
};

struct ATTACK_ACTION : Action{



};

*/
struct Skill {
	SKILL skill;
	Bonus bonus;
	Effects effects;
	int stage;
};

struct AttackSkill : Skill {
	ITEM weapon;
};

struct Skills {
private:
	std::vector<SKILL> sId;
	std::unordered_map<SKILL, Skill> skills; // level stage xp

public:
	Skill operator[](SKILL a) {
		return skills[a];
	}

	Skill operator[](int a) {
		return skills[sId[a]];
	}

};

class Stats {

private:
	std::unordered_map<STAT, int> stats;

public:
	int& operator[](STAT stat) {
		return stats[stat];
	}

	Stats();
	Stats(int health, int strength, int speed, int endurance, int toughness, int vitality, int wisdome, int intelligence);
};

class Status {
private:
	std::unordered_map<STATUS, int*> status; // []

public:
	Status(int hp, int stamina, int mana);
	Status();

	int* operator[](STATUS a) {
		return status[a];
	}

};


struct Race {
public:
	RACE race;
	Skills sills;
	Level level;

};

class Class {

private:
	CLASS baseClase;
	CLASS currentClass;
	Level level;
public:

	Class();
	Class(CLASS baseClass, Level level);
	Class(CLASS baseClass, CLASS currentClass, Level level);

};

struct Profession {
private:
public:
	PROFESSION profession;
	bool main;
	int level;
	int stage;
	int xp;

	Profession();
	Profession(PROFESSION profession, int level, int stage, int xp);
	Profession(PROFESSION profession, int level, int stage, int xp, bool main);

};

struct Professions {

private:
	std::vector<PROFESSION> pId;
	std::unordered_map<PROFESSION, int[]> professions; // level stage xp

public:
	int* operator[](PROFESSION a) {
		return professions[a];
	}

	int* operator[](int a) {
		return professions[pId[a]];
	}

};